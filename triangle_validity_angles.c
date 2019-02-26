//Suraj Subramanian 18/02/19
//C program: Check triangle validity using angles

#include<stdio.h>
int main(){
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    if(x+y+z==180)
        printf("Valid\n");
    else
        printf("Invalid\n");
    return 0;
}