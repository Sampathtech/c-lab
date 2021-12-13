#include<stdio.h>
int main()
{
	char a;
	int bill;
	printf("Menu\n (b)Burger - 200 \n (f)French Fries - 50 \n (p)Pizza -500 \n (s)Sandwich - 150\n");
	scanf("%c",&a);
	switch(a)
	{
	case 'b':
		bill = 200;
		break;
	case 'f':
		bill = 50;
		break;
	case 'p':
		bill = 500;
		break;
	case 's':
		bill = 150;
		break;
	}
	printf("total bill is %d",bill);
}
