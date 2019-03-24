//Suraj Subramanian 18/2/19
//program to check if a given number is a perfect number

#include<stdio.h>
int main(){
    int n,i=1,sum=0;
    scanf("%d",&n);
    while(i<=n/2){
        if(n%i==0)
            sum+=i;
        i++;
    }
    if(sum==n)
        printf("%d is a Perfect Number\n",n);
    else
        printf("%d is not a Perfect Number\n",n);
    
}