//Suraj Subramanian
//C program to reverse two digit number
#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	printf("%d%d\n",n%10,n/10); //mod for second digit div for first digit
	return 0;
}
