#include<stdio.h>
int main()
{
	int number1, number2, number3 , temp, exitLoop;
	printf("Enter fibonacci number to printn : ");
	scanf("%d", & number3);
	exitLoop = 0;
	number1 = 0;
	number2 = 1;
	while (exitLoop <= number3)
	{
		temp = number1 + number2;
		number1 = number2;
		number2 = temp;
		exitLoop++;
	}
	printf("%d\n", temp);
}
