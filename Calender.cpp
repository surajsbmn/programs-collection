/*
 * Author : Rohit Shakya
 * Date   : 26-April-2020
 * Compiler : g++ 4.9.2
 * flags    : -std=c++14
 * time complexity : O(1)
 * title :  Date to Day Finder
 * input : 26-04-2020
 * output : Sunday
 */

#include<iostream>
using namespace std;
int convertStringToInt();
int lastdayofpreviousyear(int d,int m,int y);
int currentdate(int d,int m,int y);
void display(int x);
int main()
{
	int z=convertStringToInt();
	if(z==-1)
	cout<<"Enter the correct date"<<endl;
	else
	display(z);
}

int convertStringToInt()
{
	string date="";
	cout<<"Enter date in dd-mm-yyyy format"<<endl;
	cin>>date;
	int d,m,y;
	d=((int)date[0]-48)*10+((int)date[1]-48);
	m=((int)date[3]-48)*10+((int)date[4]-48);
	y=((int)date[6]-48)*1000+(((int)date[7]-48)*100)+(((int)date[8]-48)*10)+((int)date[9]-48);
	if(d>=1&&d<=31&&m>=1&&m<=12&&y>=1&&y<=9999)
	{
		int q=currentdate(d,m,y);
		int p=lastdayofpreviousyear(d,m,y);
		return (p+q)%7;
	}
	else
	return -1;
	
}
int lastdayofpreviousyear(int d,int m,int y)
{
	y=y-1;
	int count=0;
	y=y%400;
	if(y>=100)
	{
		count=(y/100*5)%7;
		y=y%100;
	}
	int l=y/4;
	count+=(2*l)+(y-l);
	count%=7;
	return count;
}
int currentdate(int d,int m,int y)
{
	int fcount=0;
	int f=0;
	if(y%4==0)
	f=1;
	switch(m)
	{
		case 1:fcount=d;
		break;
		case 2:fcount=d+31;
		break;
		case 3:fcount=f+d+59;
		break;
		case 4:fcount=f+d+90;
		break;
		case 5:fcount=f+d+120;
		break;
		case 6:fcount=f+d+151;
		break;
		case 7:fcount=f+d+181;
		break;
		case 8:fcount=f+d+212;
		break;
		case 9:fcount=f+d+243;
		break;
		case 10:fcount=f+d+273;
		break;
		case 11:fcount=f+d+304;
		break;
		case 12:fcount=f+d+334;
		break;
	}
	return fcount;
}

void display(int x)
{
	switch(x)
	{
		case 0: cout<<"Sunday"<<endl;
		break;
		case 1: cout<<"Monday"<<endl;
		break;
		case 2: cout<<"Tuesday"<<endl;
		break;
		case 3: cout<<"Wednesday"<<endl;
		break;
		case 4: cout<<"Thursday"<<endl;
		break;
		case 5: cout<<"Friday"<<endl;
		break;
		case 6: cout<<"Saturday"<<endl;
		break;
	} 
	
}
