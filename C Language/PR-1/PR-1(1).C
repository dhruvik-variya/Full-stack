#include<stdio.h>
#include<conio.h>

main()
{
	float Fa,Ce;
	clrscr();

	printf("Enter temp in celsius : ");
	scanf("%f",&Ce);

	Fa = (Ce*1.8)+32;

	printf("temp in fahrenheit : %.2f",Fa);

	getch();
}