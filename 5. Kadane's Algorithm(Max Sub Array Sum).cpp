/*
 * Author : Rohit Shakya
 * Date   : July-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Title : Kadane's Algorithm/ max-Sub-Array-Sum
 */
 #include<iostream>
 using namespace std;
 int main()
 {
 	int arr[]={1,2,5,34,23,45,-42,-78,90,100};
 	int n=sizeof(arr)/sizeof(arr[0]);
 	int maxHere=0;
 	int max=0;
 	int sum=0;
 	int start=0;
 	int end=0;
 	int s=0;
 	for(int i=0;i<n;i++)
 	{
 		maxHere+=arr[i];
 		if(maxHere>max) 
		 {
		 	max=maxHere;
			 start=s;
			 end=i;	
		 }
		 if(maxHere<0)
		 {
		 	maxHere=0;
		 	s=i+1;
		 }
	}
	cout<<max<<" start at "<<start<<" end at "<<end;
 }

