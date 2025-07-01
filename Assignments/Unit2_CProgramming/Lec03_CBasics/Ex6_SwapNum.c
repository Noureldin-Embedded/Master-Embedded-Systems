#include <stdio.h>

void main()
{
	int temp,a,b;
	printf("Enter Value of a: \n");
	fflush(stdout); fflush(stdin);
	scanf("%d",&a);
	printf("Enter Value of b: \n");
	fflush(stdout); fflush(stdin);
	scanf("%d",&b);

	printf("Number Before Swapping a=%d b=%d\n",a,b);

	temp=a;
	a=b;
	b=temp;

	printf("Number After Swapping a=%d b=%d\n",a,b);
}
