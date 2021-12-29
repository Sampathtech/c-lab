#include<stdio.h>
main()
{
	int n,k,i;
	k=0;
	printf("enter any number:");
	scanf("%d",&n);
	i=1;
	while(i<n)
	{
		if(n%i==0)
		{
		k=k+i;	
		}
		i=i+1;
	}
	if(k==n)
	{
		printf("perfect number");
	}
	else
	{
		printf("not a perfect number");
	}
}
