// Create the simple interest calculation in terms of months as output.

#include<stdio.h>
int main()
{
	int p,m,years;
	float r,si;
	printf("Enter number of months as input we need :");
	scanf("%d",&m);
	years = m/12;
	printf("Enter the principle and Interest:");
	scanf("%d%f",&p,&r);
	si = p*years*r/100;
	printf("simple interest for %d months is:%f",m,si);
}

