#include<stdio.h>
int main()
{
	int array[10], tempGreat;
	printf("Enter numbers\n");
	for (int exitLoop = 0; exitLoop < 10; exitLoop++)
	{
		scanf("%d", & array[exitLoop]);
	}
	for (int exitLoop1 = 0; exitLoop1 < 10; exitLoop1++)
	{
		if (tempGreat < array[exitLoop1])
		{
			tempGreat = array[exitLoop1];
		}
	}
	 printf("%d is the largest number\n", tempGreat);
}
