/*
 * Author : Rohit Shakya
 * Date   : July-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(nlogn)
 * Title : Minimum platforms needed on a railway station
 */
#include <algorithm> 
#include <iostream> 
using namespace std; 
int main() 
{ 
    int arr[] = { 900, 940, 950, 1100, 1500, 1800 }; 
    int dep[] = { 910, 1200, 1120, 1130, 1900, 2000 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    sort(arr,arr+n);
    sort(dep,dep+n);
    int platform=1;
    int i=1,j=0;
    int max=1;
    while(i<n&&j<n)
    {
    	if(arr[i]<=dep[j]) 
		{
			platform++;
			i++;	
		}
    	else if(arr[i]>dep[j])
		{
			platform--;
			j++;	
		} 
    	if(platform>max) max=platform;
    }
    cout << "Minimum Number of Platforms Required = "<<max;
    return 0; 
} 

