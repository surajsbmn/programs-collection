/* Program to analyze performance of various sorting algorithms by sorting
 * an array of 10,000 elements
 *
 * Suraj Subramanian 
 */

#include<iostream>
#include<time.h>

using namespace std;

#define SIZE 10000000
#define ZERO 0

void selectionSort(int [],int,int); //Selection Sort
void swap(int&,int&);               //Swap 
void insertionSort(int[],int,int);
void quickSort(int [],int,int);
int place_pivot(int [],int,int);
void merge_sort(int[],int,int);
void merge(int[],int,int,int);

int main(){
    int arr[SIZE];
    srand(time(NULL));
    
    clock_t start, stop;
    double cpu_time_used;

    for(int i=ZERO;i<SIZE;i++)
        arr[i]=rand()%10000;

    cout<<"Selection Sort:"<<endl;
    start=clock();
    selectionSort(arr,ZERO,SIZE);
    stop=clock();
    cpu_time_used = ((double)(stop-start))/CLOCKS_PER_SEC;
    cout<<"Execution Time: "<<cpu_time_used<<endl;
   

    for(int i=ZERO;i<SIZE;i++)
        arr[i]=rand()%10000;

    cout<<"Insertion Sort:"<<endl;
    start=clock();
    for(int i=ZERO+1;i<SIZE;i++)
        insertionSort(arr,i,arr[i]);
    stop=clock();
    cpu_time_used = ((double)(stop-start))/CLOCKS_PER_SEC;
    cout<<"Execution Time: "<<cpu_time_used<<endl;
    

    for(int i=ZERO;i<SIZE;i++)
        arr[i]=rand()%10000;

    cout<<"Merge Sort:"<<endl;
    start=clock();
    merge_sort(arr,ZERO,SIZE);
    stop=clock();
    cpu_time_used = ((double)(stop-start))/CLOCKS_PER_SEC;
    cout<<"Execution Time: "<<cpu_time_used<<endl;


    for(int i=ZERO;i<SIZE;i++)
        arr[i]=rand()%10000;

    cout<<"Quick Sort:"<<endl;
    start=clock();
    quickSort(arr,ZERO,SIZE);
    stop=clock();
    cpu_time_used = ((double)(stop-start))/CLOCKS_PER_SEC;
    cout<<"Execution Time: "<<cpu_time_used<<endl;
    
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

void insertionSort(int A[],int pos,int val){
    int i=pos-1;
    while(i>=0&&A[i]>val){
        A[i+1]=A[i];
        i--;
        A[i+1]=val;
     }
}

//quicksort functions
 void quickSort(int a[],int start,int end){
     if(start<end){

         int pivot_pos = place_pivot(a,start,end);     //place pivot in "right"place

         quickSort(a,start,pivot_pos-1);              //call quicksort on left sub array
         quickSort(a,pivot_pos+1,end);                //call quicksort on right sub array
     }
 }

//function to find pivot position
 int place_pivot(int a[],int start,int end){
     int pivot=a[end];                                   //set pivot as last element
     int index=start-1;

     for(int i=start;i<=end-1;i++){
         if(a[i]<=pivot){
             index++;
             swap(a[index],a[i]);
         }
     }

     swap(a[index+1],a[end]);
     return index+1;
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
     int temp1,temp2,temp3;
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
 
 
 }

void swap(int &a,int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}
