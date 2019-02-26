//Suraj Subramanian
//C++ : Print number triangle pattern
#include<iostream>
using namespace std;

int main(){
    int n=1;    
    for(int i=0;i<4;i++){
        for(int j=3-i;j>=0;j--)
            cout<<"  ";
        for(int k=1;k<=i+1;k++)
            cout<<n++<<"   ";
        cout<<endl;
    }
    return 0;
}