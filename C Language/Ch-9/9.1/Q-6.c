#include<stdio.h>
#include<conio.h>

main()
{
	int n=1,a,mult;
	clrscr();

	printf("Enter any number : ");
	scanf("%d",&a);

	while(n<=a)
	{
		mult = mult *n;
		n++;
	}
	printf("\n Mult of N numbers : %d",mult);
	getch();
}
