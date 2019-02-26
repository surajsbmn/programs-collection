//Suraj Subramanian
//C++ program to check od or even
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n; 		//Input a number
	if(n%2)					//check n%2
		cout<<"Odd"<<endl;	//n%2==1 then statement true & no. is odd
	else
		cout<<"Even"<<endl;	//n%2==0 then statement false & no. is even
}
