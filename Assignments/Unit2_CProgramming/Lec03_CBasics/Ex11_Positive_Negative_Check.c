#include <stdio.h>

void main()
{
	float num;

	printf("Enter a Number: \n");
	fflush(stdout); fflush(stdin);
	scanf("%f",&num);

	if(num>0)
		printf("The number %.3f is positive",num);
	else if(num<0)
		printf("The number %.3f is negative",num);
	else
		printf("You Entered Zero");
}
