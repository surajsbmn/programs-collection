//Suraj Subramanian 18/2/19
//program to check if given number is an armstrong number
#include<stdio.h>
int main(){
    int n,d,sum=0;
    scanf("%d",&n);
    int m=n;
    while(n){
        d=n%10;
        sum+=d*d*d;
        n/=10;
    }
    if(sum==m)
        printf("%d is an Armstrong number\n",m);
    else
        printf("%d is not an Armstrong number\n",m);
    

}