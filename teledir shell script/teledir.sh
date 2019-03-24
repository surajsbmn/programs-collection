#!/bin/bash

# Suraj Subramanian
# teledir is a telephone directory script to store, search and display entries in a telephone directory
# Useage:
# -a add new entry
# -l list existing entries

#File in which data will be stored
TELEDIRECTORY="/home/suraj/code/OperatingSystem/teledir"

echo "Welcome to teledir"

#if the teledir file doesnt exsist then create it
if [ ! -f "$TELEDIRECTORY" ]; then
    touch $TELEDIRECTORY
fi

#input() function to take input from user and store in file
input(){

    echo "Enter name:"
    read NAME

    echo "Enter phone number:"
    read PHONENO

#TODO add validation of phone no(10 digits) also check feilds are not null

    echo "Enter address:"
    read ADDRESS

    echo "$NAME:$PHONENO:$ADDRESS" >>  $TELEDIRECTORY
}

display(){
    cat $TELEDIRECTORY
}

if [[ "$1" -eq "-a" ]]
then
#call input()
    input
fi
