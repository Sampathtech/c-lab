#include<stdio.h>
main()
{
	float a,b;
	printf("enter a number");
	scanf("%f",&a);
	printf("enter another number");
	scanf("%f",&b);
	if (a>b){
		printf("the maximum number is %f",a);
	}
	
	else {
		printf("the maximum number is %f",b);
	}
}
