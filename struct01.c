#include<stdio.h>
struct time
{
	int h;
	int m;
	int s;
}t1;
main()
{
	struct time t2;
	printf("enter start time");
	scanf("%d%d%d",&t1.h,&t1.m,&t1.s);
	printf("enter end time");
	scanf("%d%d%d",&t2.h,&t2.m,&t2.s);
	printf("the time he reached his destiation was :%d%d%d",(t2.h-t1.h),(t2.m-t1.m),(t2.s-t1.s));
}
