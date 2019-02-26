//Suraj Subramanian
//C : Sum of first and last digits
#include <stdio.h>

int main(){
    int n,sum=0;
    scanf("%d",&n);
    sum+=n%10;
    while(n){
        if(n/10==0)
            sum+=n;
        n/=10;
    }
    printf("%d\n",sum);
}