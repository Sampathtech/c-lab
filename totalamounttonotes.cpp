#include<stdio.h>
main()
{
	int t,a,b,c,d,e;
	printf("enter total amount");
	scanf("%d",&t);
	a = (t/500);
	printf("total amount in 500notes is %d\n", a);
	b =(t/100);
	printf("total amount in 100notes is %d\n",b);
	c = (t/50);
	printf("total amount in 50notes is %d\n", c);
	d =(t/20);
	printf("total amount in 20notes is %d\n",d);
	e = (t/10);
	printf("total amount in 10notes is %d\n", e);
	
	
}
