/*
 * Author : Rohit Shakya
 * Date   : July-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Title : Dutch National flag/ Count the number of 0s, 1s, and 2s
 */
 #include<iostream>
using namespace std;
int main()
{
	int a[]={1,1,1,2,2,0,0,0,0,1,0,2};
	int c0=0,c1=0,c2=0;
	int n=sizeof(a)/sizeof(a[0]);
	for(int i=0;i<n;i++)
	{
		if(a[i]==0) c0++;
		else if(a[i]==1) c1++;
		else c2++;
	}
	for(int i=0;i<c0;i++)
	{
		a[i]=0;
	}
	for(int i=c0;i<c0+c1;i++)
	{
		a[i]=1;
	}
	for(int i=c0+c1;i<c0+c1+c2;i++)
	{
		a[i]=2;
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
