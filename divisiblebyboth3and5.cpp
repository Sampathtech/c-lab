#include<stdio.h>
main()
{
	int a;
	printf("enter any number");
	scanf("%d",&a);
	if (a%3==0 && a%5==0){
		printf("number is divisible by 3 & 5\n");
	}
	else{
		printf("number is not divisible by both 3 & 5\n");
	}
}
