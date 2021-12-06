#include<stdio.h>
main()
{
	char a;
	printf("enter an arithmetic operator");
	scanf("%c",&a);
	int b,c;
	printf("enter a number");
	scanf("%d",&b);
	printf("enter another number");
	scanf("%d",&c);

	switch (a)
	{
		case '+':
			printf("the value of + is %d",b +c);
			break;
		case '-':
			printf("the value of - is %d",b-c);
			break;
		case '*':
			printf("the value of * is %d",b*c);
			break;
		case '%':
			printf("the value of % is %d",b%c);
			break;
		case '/':
			printf("the value of / is %d",b/c);
			break;
		default :
			printf("enter valid operator");
		
	}
}
