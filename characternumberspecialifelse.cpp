#include<stdio.h>
main()
{
	char c;
	printf("enter a character");
	scanf("%c",&c);
	if (c>='a' && c<='z'|| c>='A'&& c<='Z')
	{
		printf("character");
	}
	else if(c>='0'&& c<='9'){
		printf("number");
	}
	else {
		printf("special character");
	}
}
