#include<stdio.h>

void c(int a)
{
	printf("\ncube of %d : %d",a,a*a*a);
}

void main()
{
	int a;
	
	printf("Enter Any Number : ");
	scanf("%d",&a);	
	c(a);
}


