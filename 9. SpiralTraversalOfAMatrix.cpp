/*
 * Author : Rohit Shakya
 * Date   : Aug-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(m*n)
 * Title : spiral traversal of a matrix
 */
#include <bits/stdc++.h> 
using namespace std; 
#define R 3 
#define C 6 

void spiralPrint(int m, int n, int matrix[R][C]) 
{ 
	int i, row=0,col=0;
	while(row<m&&col<n)
	{
		for(int i=col;i<n;i++)
		{
			cout<<matrix[row][i];
		}
		row++;
		for(int i=row;i<m;i++)
		{
			cout<<matrix[i][n-1];
		}
		n--;
		if(row<m)
		{
			for(int i=n-1;i>=col;i--)
			{
				cout<<matrix[m-1][i];
			}
		m--;	
		}
		if(col<n)
		{
			for(int i=m-1;i>=row;i--)
			{
				cout<<matrix[i][col];
			}
		col++;	
		}
		
	}
} 

int main() 
{ 
	int a[R][C] = { { 1, 2, 3, 4, 5, 6 }, 
					{ 7, 8, 9, 10, 11, 12 }, 
					{ 13, 14, 15, 16, 17, 18 } }; 

	spiralPrint(R, C, a); 
	return 0; 
}
