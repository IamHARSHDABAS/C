#include<stdio.h>
int main()
{
	int number1, number2, number3;
	printf("Enter first number  : ");
	scanf("%d", & number1);
	printf("Enter second number : ");
	scanf("%d", & number2);
	printf("Enter third number  : ");
	scanf("%d", & number3);
	if (number1 > number2 && number1 > number3)
	{
		printf("%d is largest amoung %d and %d", number2, number1, number3);
	}
	else if (number2 > number1 && number2 > number3)
	{
		printf("%d is largest amoung %d and %d", number2, number1, number3);
	}
	else if (number3 > number2 && number3 > number2)
	{
		printf("%d is largest amoung %d and %d", number3, number1, number2);
	}
	else
	{
		printf("They are equal");
	}
}
