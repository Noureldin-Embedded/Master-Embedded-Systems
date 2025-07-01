#include <stdio.h>

void main()
{
	float x,y;
	printf("Enter Two Float Numbers: ");
	fflush(stdin); fflush(stdout);
	scanf("%f%f",&x,&y);
	printf("Product: %f",x*y);
}
