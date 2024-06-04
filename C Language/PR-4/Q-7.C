#include<stdio.h>
#include<conio.h>

main()

{
	int i,j;

	clrscr();

	for(i=1;i<=9;i++)
	{
	       for(j=1;j<=9;j++)
	       {
				if(i==5 || 
				   j==5 || 
				   i==4 && (j!=1 && j!=9) || 
				   i==6 && (j!=1 && j!=9) || 
				   j==4 && (i!=1 && i!=9) || 
				   j==6 && (i!=1 && i!=9) ||
				   j==3 && (i>=3 && i<=7) ||
				   j==7 && (i>=3 && i<=7) )
				{
					printf("* ");
				}

				else
				{
					printf("  ");
				}
			
			}
	       printf("\n");

	}

	getch();
}
