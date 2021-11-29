#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter first number");
	scanf("%d",&a);
	printf("enter second number");
	scanf("%d",&b);
	printf("enter third number");
	scanf("%d",&c);	
	if (a>b && a>c){
		printf("the largest number is %d\n",a);
	}
	else if (b>a && b>c){
		printf("the largest number is %d\n",b);		
	}
	else{
		printf("the largest number is %d\n",c);	
	}
}
