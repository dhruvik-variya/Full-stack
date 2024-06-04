#include<stdio.h>
#include<conio.h>

main()
{
	float x,y,z;
	clrscr();

	printf("enter the value of x : ");
	scanf("%f",&x);

	printf("enter the value of y : ");
	scanf("%f",&y);

	z = 180 - (x + y);

	printf("angle z : %.2f",z);

	getch();

}