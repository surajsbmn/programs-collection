/*
 * Author : Rohit Shakya
 * Date   : Aug-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Title :  Closest Pair of points in two sorted array
 */
#include<bits/stdc++.h>
using namespace std;
void printClosest(int arr1[], int arr2[], int m, int n, int x) 
{ 
	 int diff=INT_MAX;
	 int lp,rp;
	 int l=0,r=n-1;
	 while(l<m&&r>=0)
	{
		if(abs(arr1[l]+arr2[r]-x)<diff)
		{
			lp=l;
			rp=r;
			diff=abs(arr1[l]+arr2[r]-x);
		}
		else if(arr1[l]+arr2[r]>x)
		{
			r--;
		}
		else
		l++;
	} 
	cout<<"minimum difference is "<<diff<<" at "<<arr1[lp]<<" and "<<arr2[rp]<<endl;
} 
 
int main() 
{ 
	int arr1[] = {1, 4, 5, 7}; 
	int arr2[] = {10, 20, 30, 40}; 
	int m = sizeof(arr1)/sizeof(arr1[0]); 
	int n = sizeof(arr2)/sizeof(arr2[0]); 
	int x = 38; 
	printClosest(arr1, arr2, m, n, x); 
	return 0; 
} 

