#include<stdio.h>
#include<conio.h>

main()
{
	float U,B,T;
	clrscr();

	printf("Enter your electricity Unit : ");
	scanf("%f",&U);

	if(U <= 50)
	{
		B = U*0.50 ;
	}
	
	
	else if(U>=51 && U<=150)
	{
		B = ((U-50)*0.75) +25 +((U-50)*0.75*0.2) ;
	}
	
	
	else if(U>=151 && U<=250)
	{
		B = ((U-150)*1.20) +(75+25)+((U-150)*1.20*0.2);
	}
	
	
	else if(U>=251)
	{
		B = ((U-250)*1.50) +(120+75+25)+((U-150)*1.50*0.2);
	}
	
	
	else
	{
		printf("Invalid input !!");
	}
	

	T = B;

	printf("Your Total bill : %.2f Rupees",T);

	getch();
}
