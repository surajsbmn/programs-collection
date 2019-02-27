#include<iostream>
using namespace std;
int main(){
    int a=0,b=1,c,n,flag=0;
    cin>>n;
    if(n==0){
        cout<<"Its a fibonacci number"<<endl;
        return 0;
    }
    for(int i=0;;i++){
        c=a+b;
        if(c==n){
            flag=1;
            break;
        }
        if(c>n)
            break;
        a=b;
        b=c;
    }
    if (flag)
        cout<<"Its a fibonacci number"<<endl;
    else
        cout<<"Its not a fibonacci number"<<endl;
    
}