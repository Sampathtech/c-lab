#include<stdio.h>
main()
{
	int a,b;
	printf("enter a number");
	scanf("%d",&a);
	b = a%2==0;
	switch (b)
	{
		case 0 :printf("odd number");
		break;
		case 1 :printf("even number");
		break;
	}
}
