#include <stdio.h>

void main()
{
	int num;

	printf("Enter Value of a Number: ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&num);

	if(num%2==0)
		printf("The Number %d is an Even Number",num);
	else
		printf("The Number %d is an Odd Number",num);

}
