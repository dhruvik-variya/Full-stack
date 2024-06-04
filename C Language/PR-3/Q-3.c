#include<stdio.h>
#include<conio.h>

main()
{
	int fd,td;
	
	clrscr();
	
	printf("enter a number : ");
	scanf("%d",&fd);
	
	td = fd%10;
	
	while(fd > 9)
	{
		fd = fd/10;
	}
	
	printf("\nSum of first and last digit : %d",fd + td);
	
	getch();
}
