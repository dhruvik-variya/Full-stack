#include<stdio.h>

void calc()
{
	int a,b,choice;
	
	SW:
	
		printf("1) For Add\n");
		printf("2) For Sub\n");
		printf("3) For Mult\n");
		printf("4) For Div\n");
		printf("5) For Mod\n");
		printf("6) For Exit\n");	
		printf("\n\nEnter Your Choice : ");
		scanf("%d",&choice);
	
	
	switch(choice)
	{
		case 1:
				printf("Enter a : ");
				scanf("%d",&a);
				printf("Enter b : ");
				scanf("%d",&b);
				printf("\nAddition Of %d and %d : %d\n\n",a,b,a+b);
				goto SW;
		
		case 2:
				printf("Enter a : ");
				scanf("%d",&a);
				printf("Enter b : ");
				scanf("%d",&b);
				printf("\nSubtraction Of %d and %d : %d\n\n",a,b,a-b);
				goto SW;
			
		case 3:
				printf("Enter a : ");
				scanf("%d",&a);
				printf("Enter b : ");
				scanf("%d",&b);
				printf("\nMultiplication Of %d and %d : %d\n\n",a,b,a*b);
				goto SW;
			
		case 4:
				printf("Enter a : ");
				scanf("%d",&a);
				printf("Enter b : ");
				scanf("%d",&b);
			
				if(b==0)
				{
					printf("\nERROR !!\n\n");
				}
				else
				{
					printf("\nDivision Of %d and %d : %d\n\n",a,b,a/b);	
				}
				goto SW;
			
		case 5:
				printf("Enter a : ");
				scanf("%d",&a);
				printf("Enter b : ");
				scanf("%d",&b);
				printf("\nModulus Of %d and %d : %d\n\n",a,b,a%b);
				goto SW;
			
		case 6:
				printf("\n\nYOU EXIT THIS PROGRAAM !!");
				break;
			
		default :
				printf("\n\nENTER VALID INPUT !!\n\n");
				goto SW;
	}	
}

void main()
{
	calc();
}
