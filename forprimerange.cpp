#include<stdio.h>
main()
{
	int i,n,j,k;
	printf("enter a number");
	scanf("%d",&n);
	k=0;
	for(i=1;j<=n;i++)
	{
		for(i=2;i<j;j++)
		{
		
			if(n%i)
			{
				k=1;break;
			}
    }
    	if(k==0)
		{
			printf("%d\n",n);
			}
	}

}


