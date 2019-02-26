//Suraj Subramanian 
//C++ program : leap year using logical operators

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n%4==0&&n%100!=0||n%400==0)
        cout<<"Leap Year"<<endl;
    else
        cout<<"Not Leap Year"<<endl;
    return 0;
}