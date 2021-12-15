#include<stdio.h>
main()
{
	char c;
	printf("enter a character");
	scanf("%c",&c);
	switch(c>=65 && c<=90)
	{
		case 1:
			c=c+32;
			printf("the character converted %c",c); break;
		case 0: switch(c>=97 && c<=122){
				case 1:
					c = c-32;
					printf("the character converted %c",c); break;
					break;
				case 0:switch(c>=0 && c<=9)
				{
						default:
						printf("the character entered is a number"); break;
				}
				
									}
			
		
		
	}
}
