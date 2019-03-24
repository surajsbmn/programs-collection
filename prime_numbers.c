//Suraj Subramanian 
//C : check if number is prime
#include<stdio.h>
int main(){
    int n,i=2;
    scanf("%d",&n);
    while(i<=n/2){
        if(n%i==0)
            break;
        i++;
    }
    if(i<=n/2)
        printf("Not Prime\n");
    else
        printf("Prime\n");
    return 0;
    
}