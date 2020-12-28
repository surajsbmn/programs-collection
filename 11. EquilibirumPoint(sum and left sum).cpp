/*
 * Author : Rohit Shakya
 * Date   : July-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Title : Equilibirium point in an array
 * Equilibirium point: Point at which sum of left and right part are equal
 */
 #include<iostream>
using namespace std;
int main()
{
	int a[]={1,1,1,2,2,0,0,2,2,1,0,2};
	int sum=0;
	int n=sizeof(a)/sizeof(a[0]);
	for(int i=0;i<n;i++)
	{
		sum+=a[i];
	}
	if(sum&1) return -1;
	int leftsum=0;
	for(int i=0;i<n;i++)
	{
		sum-=a[i];
		leftsum+=a[i];
		if(sum==leftsum) 
		{
			cout<<"equilibirium point at "<<i+1<<" position"<<endl;
			break;
		}	
	}
	return 0;
}
