#include<stdio.h>
main()
{
	char a;
	printf("enter a character");
	scanf("%c",&a);
	printf("the character entered is %c\n",a++);
	printf("the next character is %c\n",a++);

}
