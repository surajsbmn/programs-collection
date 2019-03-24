//Suraj Subramanian
//C : Simple profit loss
#include<stdio.h>

int main(){
    int cp,sp,d;
    scanf("%d%d",&cp,&sp);
    d=sp-cp;
    if(d>0)
        printf("Profit\n");
    else
        printf("Loss\n");
    printf("%d\n",d);
    return 0;
}