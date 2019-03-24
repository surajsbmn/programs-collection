//Suraj Subramanian
//C : point on x/y axis or origin
#include <stdio.h>

int main(){
    int x,y;
    scanf("%d%d",&x,&y);
    if(x==0&&y==0)
        printf("On Origin\n");
    else if(x==0)
        printf("On X-axis\n");
    else if(y==0)
        printf("On Y-axis\n");
    else 
        printf("Not on any axis\n");
    return 0;
}