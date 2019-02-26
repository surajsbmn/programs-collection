//Suraj Subramanian 
//C program : leap year using logical operators

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n%4==0&&n%100!=0||n%400==0)
        printf("Leap Year\n");
    else
        printf("Not Leap Year\n");
    return 0;
}