//Suraj Subramanian
//C : Armstrong and prime number in range 1 to 500
#include<stdio.h>
int armstrong(int);
int prime(int);

int main(){
    int x,y;
    for(int i=100;i<=999;i++){
        x=armstrong(i);
        y=prime(i);
        if(x==1&&y==1)
            printf("%d\n",i);
    }
    return 0;
}

int prime(int n){
    int i=2;
    while(i<=n/2){
        if(n%i==0)
            break;
        i++;
    }
    if(i<=n/2)
        return 0;
    else
        return 1; 
}

int armstrong(int n){
    int d,sum=0;
    int m=n;
    while(n){
        d=n%10;
        sum+=d*d*d;
        n/=10;
    }
    if(sum==m)
        return 1;
    else
        return 0;
}