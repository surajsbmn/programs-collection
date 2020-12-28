#include<bits/stdc++.h>
using namespace std;
void swap(int &a,int &b)
{
	int temp=a;
	a=b;
	b=temp;
}
void sort(int arr[],int n)
{
	int index=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==0)
		{
			swap(arr[i],arr[index]);
			index++;
		}
	}
	
}
int main()
{
	int arr[]={1,1,0,1,0,1};
	int n=*(&arr+1)-arr;
	sort(arr,n);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
