#include<stdio.h>

main()
{
	int eco,ba,stat,ac,eng,total;
	float per;
	
	printf("enter the marks of eco : ");
	scanf("%d",&eco);
	
	printf("enter the marks of ba : ");
	scanf("%d",&ba);
	
	printf("enter the marks of stat : ");
	scanf("%d",&stat);
	
	printf("enter the marks of ac : ");
	scanf("%d",&ac);
	
	printf("enter the marks of eng : ");
	scanf("%d",&eng);
	
	total=eco+ba+stat+ac+eng;
	
	printf("\nTotal of all subjects : %d\n\n",total);
	
	per=total/5;
	
	printf("\nPer : %.2f ",per);
	
	
	
	if(100>= per && per <=90)
	{
		printf("\nGrad is A+");
	}
	else if(90>= per && per <=80)
	{
		printf("\nGrad is B+");
	}
	else if(80>= per && per <=70)
	{
		printf("\nGrad is C+");
	}
	else if(70>= per && per <=60)
	{
		printf("\nGrad is D+");
	}
	else if(60>= per && per <=50)
	{
		printf("\nGrad is E+");
	}
	else if(50>= per && per <=33)
	{
		printf("\nYOU'RE FAIL !!");
	}
	
	
	
	
	
}
