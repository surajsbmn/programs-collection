#!/bin/bash

# Suraj Subramanian
# teledir is a telephone directory script to store, search and display entries in a telephone directory

#File in which data will be stored
TELEDIRECTORY="/home/suraj/code/programs-collection/teledir_shell_script/teledir"

#if the teledir file doesnt exsist then create it
if [ ! -f "$TELEDIRECTORY" ]; then
    touch $TELEDIRECTORY
fi


#input() function to take input from user and store in file
input(){

    echo "Enter name:"
    read NAME

    #Check if feild is empty
    [[ -z $NAME ]] && echo "Feild cannot be empty! Exiting..." && exit 1


    echo "Enter phone number:"
    read PHONENO

    #Check if phone no. is valid
    [[ $PHONENO =~ ^[0-9]{10}$ ]] || echo "Invalid Phone Number! Number should be 10 digits. Exiting..." || exit 1

    #Check if phone no. already exsists
    grep "$PHONENO" $TELEDIRECTORY
    [[ $? == "0" ]] && echo "Entry already exsists." && exit 1


    echo "Enter address:"
    read ADDRESS

    #check if address feild is empty
    [[ -z $ADDRESS ]] && echo "Feild cannot be empty! Exiting..." && exit 1

    #write the data to file
    echo "$NAME:$PHONENO:$ADDRESS" >>  $TELEDIRECTORY
}


# display the teledirectory as it is
display(){
    echo -e "\n"
    cat $TELEDIRECTORY
}

# delete an entry
delete(){

    echo "Enter the phone no. to delete"
    read D_PHONENO

    [[ $D_PHONENO =~ ^[0-9]{10}$ ]] || echo "Invalid Phone Number! Number should be 10 digits. Exiting..." || exit 1
    grep -q "$D_PHONENO" $TELEDIRECTORY
    [[ $? != "0" ]] && echo "Entry does not exsists." && exit 1

    sed -i "/$D_PHONENO/d" $TELEDIRECTORY

    echo "Entry Deleted."

}


# search an entry in the file
search(){

    echo "Enter the the value to be searched:"
    read S_KEY

    echo -e "Seacrching... \n"

    grep -i "$S_KEY" $TELEDIRECTORY

    if [[ $? != "0" ]]
    then
        echo "Entry not found. Exiting..."
        exit 1
    fi

}


# Function to display the data in sorted order
sort_func(){

    #Option to sor according to name,phoneno or address
    echo "Sort by ?"
    echo "1. Name"
    echo "2. Phone No."
    echo "3. Address"
    read sort_option

    case $sort_option in
        1)
            sort -t: $TELEDIRECTORY
            ;;
        2)
            sort -t: -k2,10 $TELEDIRECTORY
            ;;
        3)
            sort -t: -k3 $TELEDIRECTORY
            ;;
        *)
            echo "Invalid Option!"
            exit 1;
            ;;
    esac

}

#Function to update an entry
update(){
    echo "Enter the phone no. to update"
    read U_PHONENO

    [[ $U_PHONENO =~ ^[0-9]{10}$ ]] || echo "Invalid Phone Number! Number should be 10 digits. Exiting..." || exit 1
    grep "$U_PHONENO" $TELEDIRECTORY
    if [[ $? == "0" ]]
    then
        sed -i "/$U_PHONENO/d" $TELEDIRECTORY
        input
    else
        echo "Entry not found!"
    fi
}

# main Routine
echo "Welcome to teledir"
echo "Enter option"
echo "1. Add New Entry "
echo "2. Search"
echo "3. Display"
echo "4. Display Sorted"
echo "5. Delete Entry"
echo "6. Update"

read option
case $option in
    1)
        #call input()
        input
        ;;
    2)
        #call search()
        search
        ;;
    3)
        #call display()
        display
        ;;
    4)
        #call sort_func()
        sort_func
        ;;
    5)
        #call delete()
        delete
        ;;
    6)
        #call update()
        update
        ;;
    *)
        echo "Invalid Option"
        exit 1
        ;;
esac

exit 0
# End of main
