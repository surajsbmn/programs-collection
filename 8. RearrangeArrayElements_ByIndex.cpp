/*
 * Author : Rohit Shakya
 * Date   : Aug-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Title : Rearrange array elements according to the given index
 */
#include<iostream> 
using namespace std; 
void reorder(int arr[], int index[], int n) 
{ 
    // Fix all elements one by one 
    for (int i=0; i<n; i++) 
    { 
        // While index[i] and arr[i] are not fixed 
        while (index[i] != i) 
        { 
            int  oldTargetIndex  = index[index[i]];// 1
            int oldElement  = arr[index[i]]; //60
            //Swap old index and old element with (index i and arr[i])
            arr[index[i]] = arr[i]; //60 becomes 50 in target array
            index[index[i]] = index[i]; //1 becomes 3
            index[i] = oldTargetIndex; //3 becomes 1 in index array
            arr[i]   = oldElement; //50 becomes 60 in target array
            //repeat the process till index[i] not equal to i
        } 
    } 
} 
  
int main() 
{ 
    int arr[] = {50, 40, 70, 60, 90}; 
    int index[] = {3,  0,  4,  1,  2}; 
    int n = sizeof(arr)/sizeof(arr[0]);   
    reorder(arr, index, n); 
    cout << "Reordered array is: \n"; 
    for (int i=0; i<n; i++) 
        cout << arr[i] << " "; 
    cout << "\nModified Index array is: \n"; 
    for (int i=0; i<n; i++) 
        cout << index[i] << " "; 
    return 0; 
} 
