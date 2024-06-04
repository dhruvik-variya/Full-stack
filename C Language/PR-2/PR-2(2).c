#include<stdio.h>
#include<conio.h>

main()
{
	int n;
	clrscr();

	printf("Enter a number : ");
	scanf("%d",&n);

	(n % 2 == 0)
	
		?printf("%d is an even",n)
		:printf("%d is an odd",n);

	getch();
}
