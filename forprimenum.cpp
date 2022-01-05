#include<stdio.h>
main()
{
	int i,j,n,k;
	printf("enter the range:-");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		k = 1;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				
				k=0;
				break;
			}
			     
		}
		if(k==1)
			{
				printf("%d\n",i);
			}
	}
}
