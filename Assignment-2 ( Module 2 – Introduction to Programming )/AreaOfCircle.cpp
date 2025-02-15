#include<stdio.h>
int main()
{
	float rad, area;
	printf("Enter value of Radius: ");
	scanf("%f",&rad);
	area = 3.14*rad*rad;
	printf("Area of Circle is: %f unit sq", area);
	return 0;
}
