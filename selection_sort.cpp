/*
 * Program to Demo Selection Sort
 * Suraj Subramanian
 */
#include<iostream>

using namespace std;

#define SIZE 10
C#define ZERO 0

void selectionSort(int [],int,int); //Selection Sort
void swap(int&,int&);               //Swap 

int main(){
    int arr[SIZE];

    cout<<"Enter the elements:"<<endl;

    for(int i=ZERO;i<SIZE;i++)
        cin>>arr[i];

    selectionSort(arr,ZERO,SIZE);

    for(int i=ZERO;i<SIZE;i++)
        cout<<arr[i]<<" ";
    cout<<endl;

    return 0;
}

void selectionSort(int a[],int start,int end){
    int min;
    for(int i=ZERO;i<SIZE-1;i++){
        min=i;
        for(int j=i+1;j<SIZE;j++){
           if(a[j]<=a[min])
               min=j;
        }
        swap(a[min],a[i]);
    }
}

void swap(int &a,int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}
