//Suraj Subramanian 
//C program : check type of character entered

#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(ch>=65&&ch<=90)
        printf("capital alphabet\n");
    else if(ch>=97 && ch<=122)
        printf("small alphabet\n");
    else if(ch>=48 && ch<=57)
        printf("number\n");
    else
        printf("special character\n");
    return 0;
}