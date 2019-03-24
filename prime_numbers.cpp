//Suraj Subramanian 
//C++ : check if number is prime
#include<iostream>
using namespace std;
int main(){
    int n,i=2;
    cin>>n;
    while(i<=n/2){
        if(n%i==0)
            break;
        i++;
    }
    if(i<=n/2)
        cout<<"Not Prime"<<endl;
    else
        cout<<"Prime"<<endl;
    return 0;
    
}