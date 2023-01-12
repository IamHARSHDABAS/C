#include<stdio.h>
#include<stdbool.h>
int main()
{
	int number;
	bool prime = false;
	printf("NUMBER MUST BE POSITIVE INTEGER GREATER THAN 1\nEnter number : ");
	scanf("%d", & number);
	for (int exitLoop = 2; exitLoop <= number; exitLoop++)
	{
		if (number % exitLoop == 0)
		{
			printf("%d is a prime number", number);
			prime = true;
			break;
		}
	}
	if (prime == false)
	{
		printf("%d is not a prime number", number);
	}
}
