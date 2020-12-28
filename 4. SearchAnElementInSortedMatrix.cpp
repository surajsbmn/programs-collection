/*
 * Author : Rohit Shakya
 * Date   : Aug-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Title : C++ program to search an element in row-wise and column-wise sorted matrix 
 */
#include <bits/stdc++.h>
using namespace std;
int search(int mat[4][4], int n, int x) 
{ 
	if (n == 0) 
		return -1; 
	int smallest = a[0][0], largest = a[n - 1][n - 1]; 
	if (x < smallest || x > largest) 
		return -1; 
	int i = 0, j = n - 1; // set indexes for top right element 
	while (i < n && j >= 0) { 
		if (mat[i][j] == x) { 
			printf("\n Found at %d, %d", i, j); 
			return 1; 
		} 
		if (mat[i][j] > x) 
			j--; 
		else  
			i++; 
	} 

	printf("n Element not found"); 
	return 0;  
} 
int main() 
{ 
	int mat[4][4] = { 
		{ 10, 20, 30, 40 }, 
		{ 15, 25, 35, 45 }, 
		{ 27, 29, 37, 48 }, 
		{ 32, 33, 39, 50 }, 
	}; 
	search(mat, 4, 29); 
	return 0; 
} 

