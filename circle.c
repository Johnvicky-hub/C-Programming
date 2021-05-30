// To find out the area and the perimeter of the circle.

#include<stdio.h>
int main()
{
	float pi,area,r,perimeter;
	pi = 3.14;
	printf("Enter the value of radius:");
	scanf("%f",&r);
	area = pi*r*r;
	perimeter = 2*pi*r;
	printf("The area of the circle is:%f and the perimeter of the circle is:%f",area,perimeter);
}

