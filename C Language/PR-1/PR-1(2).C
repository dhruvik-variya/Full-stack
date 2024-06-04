#include<stdio.h>
#include<conio.h>

main()
{
	float bs,hra,da,ta,total=0;
	clrscr();

	printf("enter your bs : ");
	scanf("%f",&bs);

	hra = bs * 10/100;
	da =  bs * 5/100;
	ta = bs * 8/100;

	total = bs + hra + da + ta;

	printf("total salary : %.2f",total);
	getch();

}