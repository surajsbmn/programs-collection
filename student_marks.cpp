#include<iostream>
using namespace std;

int main(){
    float marks[5];
    float total=0,avg,percent;
    for(int i=0;i<5;i++){
        cin>>marks[i];
        total+=marks[i];
    }
    avg=(float)total/5;
    percent=(float)total/500*100;
    cout<<"Total: "<<total<<endl;
    cout<<"Average: "<<avg<<endl;
    cout<<"Percent: "<<percent<<"%"<<endl;
    return 0;
}