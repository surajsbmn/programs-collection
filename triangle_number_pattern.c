//Suraj Subramanian
//C : Print number triangle pattern
#include<stdio.h>

int main(){
    int n=1;    
    for(int i=0;i<4;i++){
        for(int j=3-i;j>=0;j--)
            printf(" ");
        for(int k=1;k<=i+1;k++)
            printf("%d ",n++);
        printf("\n");
    }
    return 0;
}