#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c,d;
	clrscr();

	printf("Enter a: ");
	scanf("%d",&a);
	
	printf("Enter b: ");
	scanf("%d",&b);
	
	printf("Enter c: ");
	scanf("%d",&c);
	
	printf("Enter d: ");
	scanf("%d",&d);

	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				printf("%d is max",a);
			}
			else
			{
				printf("%d is max",d);
			}
		}
		else
		{
			if(c>d)
			{
				printf("%d is max",c);
			}
			else
			{
				printf("%d is max",d);
			}
		}
	}
	else
	{
		if(b>c)
		{
			if(b>d)
			{
				printf("%d is max",b);
			}
			else
			{
				printf("%d is max",d);
			}
		}
		else
		{
			if(c>d)
			{
				printf("%d is max",c);
			}
			else
			{
				printf("%d is max",d);
			}
		}
	}



	getch();
}
