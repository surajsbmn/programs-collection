/*
 * Author : Rohit Shakya
 * Date   : July-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(nlogn) for sorting + O(n) for searching
 * Title : search two elements whose sum is equal to given number given
 * Notes : For two pointer method, Array must be sorted
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> v={10,3,4,1,6,9};
	sort(v.begin(),v.end());
	int given;
	cout<<"enter the sum of two numbers\n";
	cin>>given;
	int i=0,j=v.size()-1;
	while(i!=j)
	{
		if((v[i])+(v[j])==given)
		{
			cout<<v[i]<<" "<<v[j];
			break;
		}
		else if((v[i])+(v[j])>given) j--;
		else i++;
	}
	if(i==j) cout<<"Not found\n";
}
