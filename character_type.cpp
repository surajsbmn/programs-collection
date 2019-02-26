//Suraj Subramanian 
//C++ program : check type of character entered

#include<iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    if(ch>=65&&ch<=90)
        cout<<"capital alphabet"<<endl;
    else if(ch>=97 && ch<=122)
        cout<<"small alphabet"<<endl;
    else if(ch>=48 && ch<=57)
        cout<<"number"<<endl;
    else
        cout<<"special character"<<endl;
    return 0;
}