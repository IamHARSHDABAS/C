#include<stdio.h>
int main()
{
	double principleAmount, rate, time, simpleInterest;
	printf("Enter Principle Amount : ");
	scanf("%lf", & principleAmount);
	printf("Enter Rate : ");
	scanf("%lf", & rate);
	printf("Enter Time : ");
	scanf("%lf", & time);
	simpleInterest = (principleAmount * rate * time) / 100;
	printf("Simple Interest : %lf", simpleInterest);
}
