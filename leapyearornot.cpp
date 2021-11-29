#include<stdio.h>
main()
{
	int a;
	printf("enter year");
	scanf("%d",&a);
	if (a%4==0 && a%400==0||a%100!=0){
		printf("given year is leap year");
	}
	else {
		printf("given year is non-leap year");
	}
}
