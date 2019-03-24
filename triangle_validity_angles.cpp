//Suraj Subramanian 
//C++ program: Check triangle validity using angles

#include<iostream>
using namespace std;

int main(){
    int x,y,z;
    cin>>x>>y>>z;
    if(x+y+z==180)
        cout<<"Valid"<<endl;
    else
        cout<<"Invalid"<<endl;
    return 0;
}