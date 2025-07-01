#include <stdio.h>
void main()
{
	char character;
	printf("Enter a Character: ");
	fflush(stdout); fflush(stdin);
	scanf(" %c",&character);

	printf("ASCII value of %c: %d ",character,character);
}
