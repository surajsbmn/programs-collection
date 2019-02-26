//Suraj Subramanian 18/2/19
//reverse an array

#include<stdio.h>
int main(){
    int arr[10];
    for(int i=0;i<10;i++)
        scanf("%d",&arr[i]);
    int p=0,q=9,temp;
    while(p<5){
        temp=arr[p];
        arr[p]=arr[q];
        arr[q]=temp;
        p++;
        q--;
    }
    for(int i=0;i<10;i++)
        printf("%d\n",arr[i]);
    return 0;
}