/*
 * Author : Rohit Shakya
 * Date   : Aug-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity :
 * Title : stock buy and sell
 * Note: Another approaches are 1) to sort array and swap accordinly and another one is to
 * find next greater element using stack
 */
#include <bits/stdc++.h> 
using namespace std; 
void stockBuySell(int arr[], int n) 
{ 
	if(n==1) return;
	int i=0;
	while(i<n-1)
	{
		while(i<n&&arr[i+1]<arr[i])
		i++;
		if(i==n-1) break;
		int buy=i++;
		while(i<n&&arr[i]>arr[i-1])
		i++;
		int sell=i-1;
		cout<<"best price to buy "<<buy<<endl<<"best price to sell "<<sell<<endl;
	} 
	
} 

// Driver code 
int main() 
{ 
	// Stock prices on consecutive days 
	int price[] = { 100, 180, 260, 310, 40, 535, 695 }; 
	int n = sizeof(price) / sizeof(price[0]); 

	// Fucntion call 
	stockBuySell(price, n); 

	return 0; 
}
