//Suraj Subramanian 9/3/19
//Program to demo merge sort

#include<iostream>
using namespace std;

#define SIZE 10

void merge_sort(int[],int,int);
void merge(int[],int,int,int);

int main(){

  int arr[SIZE];
  srand(time(NULL));              //set rand()
  for(int i=0;i<SIZE;i++){
      arr[i]=rand()%100;          //populate array with random numbers    
      cout<<arr[i]<<" ";
  }
  cout<<endl;
  
  merge_sort(arr,0,SIZE-1);

  for(int i=0;i<SIZE;i++)
      cout<<arr[i]<<" ";
  cout<<endl;

}

void merge_sort(int a[],int left,int right){
    if(left<right){
    int middle=(left+right)/2;

    merge_sort(a,left,middle);
    merge_sort(a,middle+1,right);

    merge(a,left,middle,right);
    }
}

void merge(int a[],int left,int middle,int right){

    int size1,size2;

    size1=middle-left+1;
    size2=right-middle;

    int Larr[size1];
    int Rarr[size2];

    for(int i=0;i<size1;i++)
        Larr[i]=a[left+i];
    for(int i=0;i<size2;i++)
        Rarr[i]=a[middle+1+i];
    
    temp1=0;
    temp2=0;
    temp3=left;

    while (temp1 < size1 && temp2 < size2)
    {
        if (Larr[temp1] <= Rarr[temp2])
        {
            a[temp3] = Larr[temp1];
            temp1++;
        }
        else
        {
            a[temp3] = Rarr[temp2];
            temp2++;
        }
        temp3++;
    }

    while (temp1 < size1)
    {
        a[temp3] = Larr[temp1];
        temp1++;
        temp3++;
    }

    while (temp2 < size2)
    {
        a[temp3] = Rarr[temp2];
        temp2++;
        temp3++;
    }


C}
