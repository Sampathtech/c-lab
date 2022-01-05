#include<stdio.h>
main()
{
	int i,j;
	for(i=65;i<=70;i++)
	{
		for(j=65;j<=i;j++)
		{
			printf("%c\t",j);
		}
		printf("\n");
	}
}
