#include<stdio.h>
main()
{
	int i,j,n,k;
	printf("enter a number");
	scanf("%d",&n);
	for(i>n;k=n%10;n=n/10)
	{
		j=j+(k*k*k);
		
	}
	printf("%d",j);
	if(j==n)
	{
		printf("armstrong number");
	}
	if(j!=n)
	{
		printf("not an armstrong number");
		
	}
}
