#include <stdio.h>

void main()
{
	char let;

	printf("Enter a Letter: ");
	fflush(stdout); fflush(stdin);
	scanf("%c",&let);

	if((let>='a'&&let<='z')||(let>='A'&&let<='Z'))
		printf("%c is an Alphapet",let);
	else
		printf("%c is not an Alphapet",let);

}
