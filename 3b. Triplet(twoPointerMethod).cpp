/*
 * Author : Rohit Shakya
 * Date   : July-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n^2)
 * Title : Search triplet whose sum is equal to given number x
 * Note : Array must be sorted for two pointer method
 */

#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> v={10,3,4,1,6,9,11,56,13};
	sort(v.begin(),v.end());
	int x;
	cout<<"enter the sum of two numbers\n";
	cin>>x;
	int flag=0;
	for(int p=0;p<v.size()-2;p++)
	{
	int i=p+1,j=v.size()-1;
	while(i!=j)
	{
		if((v[i])+(v[j])+v[p]==x)
		{
			cout<<"{ "<<v[p]<<" "<<v[i]<<" "<<v[j]<<" } ";
			flag=1;
			break;
		}
		else if(v[i]+v[j]+v[p]>x) j--;
		else i++;
	}		
	}
	if(flag==0) cout<<"not found\n";
	
}
