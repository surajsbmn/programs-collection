//Suraj Subramanian 18/2/19
//second largest in an array
#include<stdio.h>
int main(){
    int arr[10];
    int max=-1;
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>max)
            max=arr[i];
    }
    int max2=-1;
    
    for(int i=0;i<10;i++){
        if(arr[i]>max2&&arr[i]<max)
            max2=arr[i];
    }
    printf("%d\n",max2);
    return 0;
}