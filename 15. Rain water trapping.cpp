/*
 * Author : Rohit Shakya
 * Date   : July-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Title : Rain water trapping problem
 */
#include <bits/stdc++.h> 
using namespace std; 
int max(int a, int b)
{
	if(a>=b) return a;
	return b;
}
int min(int a, int b)
{
	if(a<=b) return a;
	return b;
}
  
int findWater(int arr[], int n) 
{ 
	int left[n];
	int right[n];
	left[0]=arr[0];
	for(int i=1;i<n;i++)
	{
		left[i]=max(left[i-1],arr[i]);
	}
	right[n-1]=arr[n-1];
	for(int i=n-2;i>=0;i--)
	{
		right[i]=max(right[i+1],arr[i]);
	}
	int water=0;
	for(int i=0;i<n;i++)
	{
		water+=min(left[i],right[i])-arr[i];
	}
    return water; 
} 
  
// Driver program 
int main() 
{ 
    int arr[] = { 0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    cout << "Maximum water that can be accumulated is "<< findWater(arr, n); 
    return 0; 
}
