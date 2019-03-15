//Suraj Subramanian

#include<iostream>
using namespace std;

void insert(int[],int,int);

int main(){
    int arr[10];
    srand(time(NULL));              //set rand()
    for(int i=0;i<10;i++){
        arr[i]=rand()%100;          //populate array with random numbers    
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    for(int i=1;i<10;i++)
        insert(arr,i,arr[i]);

    for(int i=0;i<10;i++)       
        cout<<arr[i]<<" ";              //print sorted array
    cout<<endl;
    return 0;
}


void insert(int A[],int pos,int val){
    int i=pos-1;

    while(i>=0&&A[i]>val){
        A[i+1]=A[i];
        i--;
        A[i+1]=val;
    }
}
