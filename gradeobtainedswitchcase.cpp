#include<stdio.h>
main()
{
	int a;
	printf("enter the marks obtained");
	scanf("%d",&a);
	
	switch(a/10)
	{
		case 10:
		case 9: 
			printf("grade obtained is A");
			break;
		case 8:
			printf("grade obtained is B");
			break;
		case 7:
			printf("grade obtained is C");
			break;
		case 6:
			printf("grade obtained is D");
			break;
		case 5:
			printf("grade obtained is E");
			break;
		default:
			printf("grade obtained is F");
	}
}
