#include<stdio.h>
#include<conio.h>

main()
{
	char i,j,s;
	
	clrscr();
	
	for(i='A';i<='E';i++)
	{
		for(s='E';s>i;s--)
		{
			printf("  ");
		}
		
		for(j='A';j<=i;j++)
		{
			printf("%c ",j);
		}
		printf("\n");
	}
	
	getch();
}
