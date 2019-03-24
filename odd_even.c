//Suraj Subramanian
//C program to check od or even
#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n); 		//Input a number
	if(n%2)					//check n%2
		printf("Odd\n");	//n%2==1 then statement true & no. is odd
	else
		printf("Even\n");	//n%2==0 then statement false & no. is even
}
