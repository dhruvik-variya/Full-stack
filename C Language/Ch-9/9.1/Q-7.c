#include<stdio.h>
#include<conio.h>

main()
{
	int a=1,b,sum=0;
	clrscr();
	printf("Enter any number : ");
	scanf("%d",&b);

	while(a<=b)
	{
		sum += a;
		a++;
	}
	printf("\n Sum of N numbers : %d",sum);
	getch();
}
