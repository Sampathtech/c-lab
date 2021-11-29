#include<stdio.h>
main()
{
	int a,b,c,d,e,total;
	printf("enter no of 10ruppee notes");
	scanf("%d",&a);
	printf("enter no of 20ruppee notes");
	scanf("%d",&b);
	printf("enter no of 50ruppee notes");
	scanf("%d",&c);
	printf("enter no of 100ruppee notes");
	scanf("%d",&d);
	printf("enter no of 500ruppee notes");
	scanf("%d",&e);
	total = (a*10)+(b*20)+(c*50)+(d*100)+(e*500);
	printf("total amount is %d",total);
}
