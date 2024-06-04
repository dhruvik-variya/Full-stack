#include<stdio.h>
#include<conio.h>

main()
{
	int i,n,a=0,b=1,c;
	clrscr();

	printf("enter N :");
	scanf("%d",&n);
	printf("%d %d ",a,b);

	for(i=3;i<=n;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d ",c);
	}

	getch();
}
