//Suraj Subramanian
//C++ : calculate power of number
#include <iostream>
using namespace std;

int main(){
    int b,p,res=1;
    cin>>b>>p;
    for(int i=0;i<p;i++)
        res*=b;
    cout<<res;
    return 0;
}