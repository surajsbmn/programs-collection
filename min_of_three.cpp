/*
 * Author : Suraj Subramanian
 * Date   : July-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(1)
 * Title : Minimum of three numbers
 */
#include<bits/stdc++.h>
using namespace std;
int min(int a,int b,int c)
{
	return min(min(a,b),c);
}
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    cout<<min(a,b,c);
    return 0;
}
