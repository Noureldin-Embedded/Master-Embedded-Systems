#include <stdio.h>

void main()
{
	float num1,num2,num3;
	printf("Enter 3 Numbers: ");
	fflush(stdout); fflush(stdin);
	scanf("%f%f%f",&num1,&num2,&num3);

	if(num1>num2){
		if(num1<num3)
			printf("%.5f is the greatest number ",num3);
		else
			printf("%.5f is the greatest number ",num1);
	}
	else if(num2>num1){
		if(num2<num3)
			printf("%.5f is the greatest number ",num3);
		else
			printf("%.5f is the greatest number ",num2);
	}
}
