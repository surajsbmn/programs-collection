//Suraj Subramanian
//C++ : Minimum of three numbers
#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    cout<<(a<b?((a<c)?a:c):((b<c)?b:c))<<endl;
    return 0;
}