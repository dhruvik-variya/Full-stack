#include<stdio.h>

void main()
{
	int a,b;
	int *x=&a,*y=&b;
	
	printf("Enter Value Of a : ");
	scanf("%d",&a);
	printf("Enter Value Of b : ");
	scanf("%d",&b);
	
	*x = *x  *  *y;
	*y = *x  /  *y;
	*x = *x  /  *y;
	
	printf("\nA : %d\n",a);
	printf("B : %d",b);
}
