#include<stdio.h>
main()
{
	int i,n,k;
	i = 2;
	k =0;
	printf("enter a number");
	scanf("%d",&n);
	while(i<=n/2)
	{
		if(n%i==0)
			{
				k=1;
				printf("it's not a prime number");	break;
			}
			i++;
    }
    if(k==0)
	{
		printf("it's a prime number");
	}
}


