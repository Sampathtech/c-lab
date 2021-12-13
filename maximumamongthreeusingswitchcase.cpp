#include<stdio.h>
main()
{
	int a,b,c,big;
	printf("enter a number");
	scanf("%d",&a);
	printf("enter second number");
	scanf("%d",&b);
	printf("enter third number");
	scanf("%d",&c);
	switch(a>b && a>c)
	{
		case 1: printf("the maximum number is %d",a);break;
		case 0:
			switch(b>c)
			{
				case 1:printf("the maximum number is %d",b); break;
				case 0:printf("the maximum number is %d",c);break;
			}
	}
}
