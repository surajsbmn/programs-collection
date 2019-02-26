//Suraj Subramanian 18/2/19
//C++ program: Leap year without logical operators
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n%400==0)
        cout<<"Leap Year"<<endl;
    else if(n%100==0)
        cout<<"Not Leap Year"<<endl;
    else if(n%4==0)
        cout<<"Leap Year"<<endl;
    else    
        cout<<"Not Leap Year"<<endl;
    return 0;
}