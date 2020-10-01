/*
 * Author : Rohit Shakya
 * Date   : July-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Title : Leaders in an array
 */

#include <iostream> 
using namespace std; 
int main() 
{ 
    int arr[] = {16, 17, 4, 3, 5, 2}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    int max=INT_MIN;
    for(int i=n-1;i>=0;i--)
	{
		if(arr[i]>max) 
		{
			cout<<arr[i]<<" ";
			max=arr[i];
		}
	}
    return 0; 
}     
