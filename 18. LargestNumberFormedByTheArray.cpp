/*
 * Author : Rohit Shakya
 * Date   : July-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(nlogn)
 * Title :
 */
#include<bits/stdc++.h>
using namespace std; 
int myCompare(string X, string Y) 
{ 
    string XY = X.append(Y); 
    string YX = Y.append(X); 
    return XY.compare(YX) > 0 ? 1: 0; 
} 
  
void printLargest(vector<string> arr) 
{ 
    sort(arr.begin(), arr.end(), myCompare); 
    for (int i=0; i < arr.size() ; i++ ) 
        cout << arr[i]; 
} 
int main() 
{ 
    vector<string> arr; 
    //output should be 6054854654 
    arr.push_back("54"); 
    arr.push_back("546"); 
    arr.push_back("548"); 
    arr.push_back("60"); 
    printLargest(arr); 
   return 0; 
} 
