#include<stdio.h>
main()
{
	int n,i,k,r,m;
	r=0;
	printf("enter any number:");
	scanf("%d",&n);
	m=n;
	while(n>0)
	{
		k=n%10;
		r=r+(k*k*k);
		n=n/10;
	}
	printf("%d\n",r);
	if(r==m)
	{
		printf("armstrong number");
	}
	else
	{
		printf("not a armstrong number");
	}
}
