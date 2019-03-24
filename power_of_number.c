//Suraj Subramanian
//C : calculate power of number
#include <stdio.h>
int main(){
    int b,p,res=1;
    scanf("%d%d",&b,&p);
    for(int i=0;i<p;i++)
        res*=b;
    printf("%d",res);
    return 0;
}