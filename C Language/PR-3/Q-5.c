#include<stdio.h>
#include<conio.h>

main()
{
	int i,n=0;
	
	clrscr();
	
	for(i=0;i<5;i++)
	{
		n = (n*10)+1;	
		
		printf("%d,",n);	
	}

	getch();
}
