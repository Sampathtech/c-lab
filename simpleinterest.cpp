#include<Stdio.h>
main()
{
	int p,t,r,sim;
	printf("principle %d");
	scanf("%d",&p);
	printf("time %d");
	scanf("%d",&t);
	printf("rate of interest %d");
	scanf("%d",&r);
	sim = p * t * r/100;
	printf("simple interest is %d",sim);
}
