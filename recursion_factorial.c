//Suraj Subramanian
//C : Factorial of a number
#include<stdio.h>

long int factorial(long int);

int main(){
    long int n;
    scanf("%ld",&n);
    printf("%ld\n",factorial(n));
}

long int factorial(long int n){
    if(n==0)
        return 1;
    else
        return n*factorial(n-1);
    
}