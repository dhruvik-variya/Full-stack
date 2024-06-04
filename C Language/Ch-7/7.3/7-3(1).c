#include<stdio.h>

main()
{
	int a,b,c;


	printf("Enter A : ");
	scanf("%d",&a);
	printf("Enter B : ");
	scanf("%d",&b);
	printf("Enter C : ");
	scanf("%d",&c);

	(a<b)
	       ?(a<c)
			?printf("A is minimum")
			:printf("C is minimum")
	       :(b<c)
			?printf("B is minimum")
			:printf("C is minimum");
	
}
