//Suraj Subramanian 18/2/19
//C program: Leap year without logical operators
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n%400==0)
        printf("Leap Year\n");
    else if(n%100==0)
        printf("Not Leap Year\n");
    else if(n%4==0)
        printf("Leap Year\n");
    else    
        printf("Not Leap Year\n");
    return 0;
}