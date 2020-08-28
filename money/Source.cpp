#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
double a;
double b;
double c;
main()
{
	printf("Enter product prices : ");
	scanf("%lf", &a);
	printf("Enter your money : ");
	scanf("%lf", &b);
	c = b - a;
	if (c > 0)
	{
		printf("You can buy this item. Receive %.2lf baht change.", c);
	}
	else if (c == 0)
	{
		printf("You can buy this item. No change.", c);
	}
	else
	{
		c *= (-1);
		printf("You can't buy this item. Please add %.2lf baht.", c);
	}
}