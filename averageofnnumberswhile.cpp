#include<stdio.h>
main()
{
	float x,y,z,i,p;
	i=1;
	p=0;
	printf("enter how many numbers to find average:");
	scanf("%f",&x);
	printf("enter %f numbers\n",x);
	while(i<x)
	{
		scanf("%f\t",&y);
		p=p+y;
		i=i+1;		
	}
	z=p/x;
	printf("average:%f",z);
}
