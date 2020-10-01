/*
 * Author : Rohit Shakya
 * Date   : July-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Title : Reverse in a group
 */
#include <algorithm> 
#include <iostream> 
using namespace std; 
void swap(int &a, int &b)
{
	int temp=a;
	a=b;
	b=temp;
}
int main() 
{ 
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13};
    int n=sizeof(arr)/sizeof(arr[0]);
	int k=4;
	for(int i=0;i<n;i=i+k)
	{
		int tempk=i+k;
		for(int j=i;j<tempk/2+1;j++)
		{
			swap(arr[j],arr[--tempk]);
		}
	}	
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	} 
} 

