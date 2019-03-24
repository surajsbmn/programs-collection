//Suraj Subramanian
//C program to calculate area of triangle 
#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c,area,s;
	scanf("%f%f%f",&a,&b,&c);
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("Area = %.2f\n",area);
	return 0;
}

