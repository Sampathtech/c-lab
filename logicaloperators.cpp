#include<stdio.h>
main()
{
	int a,b;
	printf("enter a value");
	scanf("%d",&a);
	printf("enter b value");
	scanf("%d",&b);
	printf("the value of &&(and)) is %d\n",((a==b) &&(a >b)));
	printf("the value of ||(or)) is %d\n",((a==b) ||(a >b)));
	printf("the value of !(not)) is %d\n", !(a==1));
}
