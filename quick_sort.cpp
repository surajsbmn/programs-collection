//Suraj Subramanian 
//Program to demo quicksort

#include<iostream>
using namespace std;

void quicksort(int [],int,int);
int place_pivot(int [],int,int);
void swap(int*,int*);

int main(){
    int arr[10];
    srand(time(NULL));              //set rand()
    for(int i=0;i<10;i++){
        arr[i]=rand()%100;          //populate array with random numbers    
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    quicksort(arr,0,9);                 //call quicksort

    for(int i=0;i<10;i++)       
        cout<<arr[i]<<" ";              //print sorted array
    cout<<endl;
    return 0;
}

//quicksort functions
void quicksort(int a[],int start,int end){      
    if(start<end){

        int pivot_pos = place_pivot(a,start,end);           //place pivot in "right" place

        quicksort(a,start,pivot_pos-1);              //call quicksort on left sub array
        quicksort(a,pivot_pos+1,end);                //call quicksort on right sub array
    }
}

//function to find pivot position
int place_pivot(int a[],int start,int end){
    int pivot=a[end];                                   //set pivot as last element
    int index=start-1;

    for(int i=start;i<=end-1;i++){
        if(a[i]<=pivot){
            index++;
            swap(&a[index],&a[i]);
        }
    }

c
    return index+1;
}

//swap function
void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
