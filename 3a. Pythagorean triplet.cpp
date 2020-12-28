/*
 * Author : Rohit Shakya
 * Date   : July-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n^2)
 * Title : Pythagorean triplet
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[]={1,2,3,-1,5,6,4};
	//squared the array
	//int n=sizeof(arr)/sizeof(arr[0]);
	int n=*(&arr+1)-arr;
	for(int i=0;i<n;i++)
	{
		arr[i]*=arr[i];
	}
	sort(arr,arr+n);
	
	 for (int i = n - 1; i >= 2; i--) { 
        int l = 0; 
        int r = i - 1; 
        while (l < r) { 
            if (arr[l] + arr[r] == arr[i]) 
                {
                	cout<<"found";
					break;	
				}
            (arr[l] + arr[r] < arr[i]) ? l++ : r--; 
        } 
    } 
}
