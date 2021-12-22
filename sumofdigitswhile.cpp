#include<stdio.h>
main()
{
	int n,p,k;
	
	printf("enter a number");
	scanf("%d",&n);
	while(n>0)
	{
		 p = n%10;
		 k = k+p;
		 n = n/10;
	}
	printf("%d",k);
}
