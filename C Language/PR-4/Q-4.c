#include<stdio.h>
#include<conio.h>

main()
{
	int i,j,s;
	
	clrscr();
	
	for(i=1;i<=5;i++)
	{
		for(s=1;s<i;s++)
		{
			printf(" ");
		}
		for(j=5;j>=i;j--)
		{
			if(j%2==0)
			{
				printf("1");
			}
			else
			{
				printf("0");
			}
			
		}
		printf("\n");
	}
	
	getch();
}
