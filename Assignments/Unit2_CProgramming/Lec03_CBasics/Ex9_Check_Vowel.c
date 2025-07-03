#include <stdio.h>

void main()
{
	char let;

	printf("Enter a Letter: \n");
	fflush(stdout); fflush(stdin);
	scanf("%c",&let);

	switch(let)
	{
	case 'a':
	case 'A':
		printf("%c is a Vowel",let);
		break;

	case 'b':
	case 'B':
		printf("%c is a Vowel",let);
		break;

	case 'e':
	case 'E':
		printf("%c is a Vowel",let);
		break;

	case 'i':
	case 'I':
		printf("%c is a Vowel",let);
		break;

	case 'o':
	case 'O':
		printf("%c is a Vowel",let);
		break;

	case 'U':
	case 'u':
		printf("%c is a Vowel",let);
		break;

	default:
		printf("%c is a Consotant",let);
		break;

	}

}
