#include<stdio.h>
main()
{
	float r,area,perimeter;
	printf("radius of circle %f\n");
	scanf("%f,&r");
	area = 3.14 * r *  r;
	perimeter = 2 * 3.14 * r;
	printf("area of circle is %f\n", area);
	printf("perimeter of circle is %f\n", perimeter);
}
