//Suraj Subramanian
//C++ : Reverse string in memory

#include<iostream>
using namespace std;
int main(){

    string input;    //Max string length
    cin>>input;
    int j,i=0,flag=0;

    while(input[i]!='\0'){      //find length of user input
        j=i;
        i++;
    }

    for(int i=0;i<j/2;){
        int temp=input[j];
        input[j]=input[i];
        input[i]=temp;
        i++;
        j--;
    }

    cout<<input<<endl;
    return 0;
}