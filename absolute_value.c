//Suraj Subramanian
//C program find absoulte value of a number

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n<0)
        printf("%d\n",-n);
    else
        printf("%d\n",n);
    return 0; 
}