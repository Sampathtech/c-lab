#include<stdio.h>
main()
{
	int i,n,f;
	f=i=1;
	printf("enter a number");
	scanf("%d",&n);
	while(i<=n)
	{
		f*=i;
		i++;
	
	}
		printf("factorial is %d",f);
}

