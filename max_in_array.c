//Suraj Subramanian 18/2/19
//maximum in an array
#include<stdio.h>
int main(){
    int arr[10];   
    int max=-1;
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>max)
            max=arr[i];
    }
    printf("%d\n",max);
    return 0;
}