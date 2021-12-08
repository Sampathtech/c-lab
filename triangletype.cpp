#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter angle 1\n");
	printf("enter angle 2\n");
	scanf("%d",&b);
	printf("enter angle 3\n");
	scanf("%d",&c);
	if (a==b && b==c)
	{
	
		printf("equilateral triangle");
	}
		else if (a==b || b==c || c==a )
		{
	
		
			printf("isosceles triangle");}
		else{
		
			printf("scalene triangle");
			}
			
}
