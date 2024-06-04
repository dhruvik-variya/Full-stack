#include<stdio.h>

void check(int x)
{
	(x%3==0 && x%5==0)
		?printf("\n%d is divisible by both 3 & 5",x)
		:printf("\n%d is not divisible by both 3 & 5",x);
	
}

void main()
{
	int x;
	
	printf("Enter Any Number : ");
	scanf("%d",&x);	
	check(x);
}


