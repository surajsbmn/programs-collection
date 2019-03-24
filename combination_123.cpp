//Suraj Subramanian
#include<iostream>
using namespace std;

int main(){
    for(int i=1;i<=3;i++)
        for(int j=1;j<=3;j++)
            for(int k=1;k<=3;k++)
                if(i!=j && j!=k && i!=k)
                    cout<<i<<" "<<j<<" "<<k<<endl;
    return 0;
}