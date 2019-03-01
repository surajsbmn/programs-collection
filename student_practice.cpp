#include<iostream>
#include<string.h>
using namespace std;

class Student{
    char *p,size;
    public:
    Student(int n);
    void getstring();
    void showstring();
    void reversestring(Student s);
};

Student::Student(int n){
   // cout<<"Enter size"<<endl;
    //cin>>n;
    size=n;
    p=(char*)malloc(n);
}

void Student::getstring(){
    cout<<"Enter String"<<endl;
    for(int i=0;i<size;i++)
        cin>>p[i];
}

void Student::showstring(){
    for(int i=0;i<size;i++)
        cout<<p[i];
}

void Student::reversestring(Student s){
    
    int j,i=0,flag=0;

    while(s.p[i]!='\0'){      //find length of user input
        j=i;
        i++;
    }

    for(int i=0;i<j/2;){
        int temp=s.p[j];
        s.p[j]=s.p[i];
        s.p[i]=temp;
        i++;
        j--;
    }

    s.showstring();
}

int main(){
    int n;
    cin>>n;
    Student s1(n);
    s1.getstring();
    s1.showstring();
    s1.reversestring(s1);
    return 0;
}