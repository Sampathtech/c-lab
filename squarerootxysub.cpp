#include<stdio.h>
#include<math.h>
main()
{
	float x,y,value;
	printf("enter x value");
	scanf("%f",&x);
	printf("enter y value");
	scanf("%f",&y);
	value = sqrt ((x*x +y*y)/(x *x) - 1);
	printf("value is %f",value);
}
