/*
 * Author : Rohit Shakya
 * Date   : July-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(logn)
 * Title : fist index of one in a sorted array
 */
#include<iostream>
using namespace std;
int search(int arr[],int l,int h)
{
	while(l<h)
	{
		int mid=l+(h-l)/2;
		if(arr[mid]==1&&(mid==0||arr[mid-1]==0))
		return mid;
		else if(arr[mid]==1)
		h=mid-1;
		else
		l=mid+1;
	}
	if(l>h) return -1;
}
int main()
{
	int arr[]={0,0,0,1,1,1,1,1,1,1,1};
	int n=sizeof(arr)/sizeof(arr[0]);
	int z=search(arr,0,n-1);
	cout<<z;
}
