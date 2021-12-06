#include<stdio.h>
main()
{
	int a;
	printf("enter a number to display name of the week");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			printf("sunday");
			break;
		case 2:
			printf("monday");
			break;
		case 3:
			printf("tuesday");
			break;
		case 4:
			printf("wednesday");
			break;
		case 5:
			printf("thursday");
			break;
		case 6:
			printf("friday");
			break;
		case 7:
			printf("saturday");
			break;
		default:
			printf("invalid number entered. enter a valid number between 1-7");
	}
}
