//Suraj Subramanian
//C++ : Simple profit loss
#include<iostream>
using namespace std;
int main(){
    int cp,sp,d;
    cin>>cp>>sp;
    d=sp-cp;
    if(d>0)
        cout<<"Profit"<<endl;
    else
        cout<<"Loss"<<endl;
    cout<<d<<endl;
    return 0;
}