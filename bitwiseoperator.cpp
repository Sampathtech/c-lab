#include<stdio.h>
main()
{
	int a,b;
	printf("enter a value");
	scanf("%d",&a);
	printf("enter b value");
	scanf("%d",&b);
	printf("the value of bitwise and %d\n",a&b);
	printf("the value of bitwise or %d\n",a|b);
	printf("the value of bitwise ^ %d\n",a^b);
	printf("the value of bitwise << %d\n",a<<b);
	printf("the value of bitwise >> %d\n",a>>b);
}
