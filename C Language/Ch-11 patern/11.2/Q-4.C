#include<stdio.h>
#include<conio.h>

main()

{
	int i,j,s;
	
	clrscr();

	for(i=5;i>=1;i--)
	{
		for(s=i;s<5;s++)
		{
			printf("  ");
		}
		for(j=i;j>=1;j--)
		{

			if(j % 2 ==0)
			{
				printf("0 ");
			}
			else
			{
				printf("1 ");
			}
		}
		printf("\n");


	}
	
    getch();

}
