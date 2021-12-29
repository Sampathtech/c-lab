#include<stdio.h>
main()
{
	int n,i;
	i=1;
	printf("enter any number:");
	scanf("%d",&n);
	printf("odd    even\n");
	
	while(i<=n)
	{
	   if(i%2==0)
	   {
	   	printf("%d\n",i); 
       }
       else
       {
       	printf("%d\t",i);
	   }
     	i=i+1;
	}
}
