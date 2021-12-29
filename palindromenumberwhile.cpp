#include<stdio.h>
main()
{
	int i,k,r,n,m;
	r=0;
	printf("enter any number:");
	scanf("%d",&n);
	m=n;
	while(n>0)
	{
		k=n%10;
		r=(r*10)+k;
		n=n/10;
	}
	printf("%d\n",r);
	if(r==m)
	{
		printf("palindrome number");
	}
	else
	{
		printf("not a palindrome number");
	}
}
