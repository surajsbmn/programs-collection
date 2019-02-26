//Suraj Subramanian
//C++ : Sum of first and last digits
#include <iostream>

using namespace std;

int main(){
    int n,sum=0;
    cin>>n;
    sum+=n%10;
    while(n){
        if(n/10==0)
            sum+=n;
        n/=10;
    }
    cout<<sum<<endl;
}