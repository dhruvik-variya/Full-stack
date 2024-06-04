#include<stdio.h>
#include<conio.h>

main()
{
	char n;
	clrscr();

	printf("enter n : ");
	scanf("%c",&n);

	if(n >= 'A' && n <= 'Z' ||
	    n >= 'a' && n<= 'z' )

	{
		printf("%c is Alphabet !! ",n);
	}

	else if(n>0)
	{
		printf("%c is number !!");
	}

	else
	{
		printf("%c is special character !!");

	}
	getch();
}