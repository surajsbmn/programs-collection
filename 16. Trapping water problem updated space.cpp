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
	left[0]=arr[0];
	int lmax=arr[0];
	for(int i=1;i<n;i++)
	{
		lmax=max(lmax,arr[i]);
		left[i]=lmax;
	}
	
	int rmax=arr[n-1];
	int water=0;
	for(int i=n-2;i>=0;i--)
	{
		rmax=max(rmax,arr[i]);
		water+=min(left[i],rmax)-arr[i];
	}
	return water;
} 
  
int main() 
{ 
    int arr[] = {3,0,2,0,5,1,7}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    cout << "Maximum water that can be accumulated is "<< findWater(arr, n); 
    return 0; 
}
