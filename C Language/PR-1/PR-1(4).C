#include<stdio.h>
#include<conio.h>

main()
{
	int a,b;
	clrscr();

	printf("enter a value of A : ");
	scanf("%d",&a);

	printf("enter a value of B : ");
	scanf("%d",&b);

	a= a * b;
	b = a / b;
	a= a / b;

	printf("\nA : %d\n",a);
	printf("\nB : %d\n",b);


	getch();

}