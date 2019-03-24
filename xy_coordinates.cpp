//Suraj Subramanian
//C++ : point on x/y axis or origin
#include <iostream>

using namespace std;

int main(){
    int x,y;
    cin>>x>>y;
    if(x==0&&y==0)
        cout<<"On Origin"<<endl;
    else if(x==0)
        cout<<"On X-axis"<<endl;
    else if(y==0)
        cout<<"On Y-axis"<<endl;
    else 
        cout<<"Not on axis"<<endl;
    return 0;
}