#include<stdio.h>
#include<conio.h>

main()
{
	char n = 'a';
	clrscr();
	
	do
	{
		printf("%c\t",n);
		n += 4;
	}while(n<='z');
	getch();
}
