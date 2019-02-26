//Suraj Subramanian
//C++ program to calculate area of triangle 
#include<iostream>
#include<math.h>
using namespace std;
int main(){
	float a,b,c,area,s;
	cin>>a>>b>>c;
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	cout<<area<<endl;
	return 0;
}

