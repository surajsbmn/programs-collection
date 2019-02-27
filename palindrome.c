//Author: Suraj Subramanian Date:19/2/19
//Program to check if given word is palindrome or not.(without string.h)
#include<stdio.h>
int main(){

    char input[100];    //Max string length
    scanf("%s",&input);
    int j,i=0,flag=0;

    while(input[i]!='\0'){      //find length of user input
        j=i;
        i++;
    }

    for(int i=0;i<j/2;){
        if(input[i]!=input[j]){     //if characters not equal set flag and break loop
            flag=1;
            break;
        }
        i++;
        j--;
    }

    if(flag)
        printf("Not a Palindrome\n");
    else
        printf("Palindrome\n");
    return 0;
}