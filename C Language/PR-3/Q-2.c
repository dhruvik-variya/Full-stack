#include<stdio.h>
#include<conio.h>

main()
{
	int n,counter;
	clrscr();
	
	printf("Enter a number : ");
	scanf("%d",&n);
	
	while(n != 0)
	{
		counter++;
		n /= 10;
	}
	
	printf("\nTotal num : %d",counter);
	
	getch();
}
