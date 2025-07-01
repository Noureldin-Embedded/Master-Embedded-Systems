#include <stdio.h>

void main()
{
	int x;
	printf("Enter an Integer: ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&x);
	printf("You Entered: %d",x);
}
