#include<stdio.h>
#include<conio.h>

main()
{
	char i,j,s;
	
	clrscr();
	
	for(i='A';i<='E';i++)
	{
		for(s='A';s<i;s++)
		{
			printf("  ");
		}
		
		for(j=i;j<='E';j++)
		{
			printf("%c ",j);
		}
		printf("\n");
	}
	
	getch();
}
