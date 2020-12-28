#include<bits/stdc++.h>
using namespace std;
int max(int arr[],int n)
{
	int left[n];
	int right[n];
	int max=arr[0];
	left[0]=max;
	for(int i=1;i<n;i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
		}
		left[i]=max;
	}
	max=arr[n-1];
	right[n-1]=max;
	for(int i=n-2;i>=0;i--)
	{
		if(max<arr[i])
		{
			max=arr[i];
		}
		right[i]=max;
	}
	max=INT_MIN;
	for(int i=0;i<n;i++)
	{
		int temp=min(left[i],right[i])-arr[i];
		if(temp>max) max=temp;
	}
	return max;
}
int main()
{
	int arr[]={1,8,6,2,5,4,8,3,7};
	int n=sizeof(arr)/sizeof(arr[0]);
	max(arr,n);
	cout<<max(arr,n);
}
