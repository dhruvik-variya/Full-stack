#include<stdio.h>
#include<conio.h>

main()
{
	char i,j,n='A';
	
	clrscr();
	
	for(i='A';i<='E';i++)
	{
		for(j='A';j<=i;j++)
		{
			printf("%c ",n++);
		}
		printf("\n");
	}
	
	getch();
}

