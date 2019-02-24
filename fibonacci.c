//Author: SurajSubramanian
//C program to print n fibonacci numbers
#include<stdio.h>
int main(){
    int a=0,b=1,c,n;
    scanf("%d",&n);
    if(n<=0)
        return 0;
    else if(n==1){
        printf("0\n");
        return 0;
    }
    else if(n==2){
        printf("0\n1\n");
        return 0;
    }
    printf("0\n1\n");
    for(int i=0;i<n-2;i++){
        c=a+b;
        printf("%d\n",c);
        a=b;
        b=c;
    }
    return 0;
}