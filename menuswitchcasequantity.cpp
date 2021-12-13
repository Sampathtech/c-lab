#include<stdio.h>
int main()
{
	char a;
	int bill,q;
	printf("Menu\n (b)Burger - 200 \n (f)French Fries - 50 \n (p)Pizza -500 \n (s)Sandwich - 150\n");
	scanf("%c",&a);
	switch(a)
	{
	case 'b':
		bill =200;
		printf("ordered burger\n");
		printf("enter quantity");
		scanf("%d",&q);
		bill = q * bill;
		break;
	case 'f':
		bill = 50;
		printf("ordered french fries\n");
		printf("enter quantity");
		scanf("%d",&q);
		bill = q * bill;
		break;
	case 'p':
		bill = 500;
		printf("ordered Pizza\n");
		printf("enter quantity");
		scanf("%d",&q);
		bill = q * bill;
		break;
	case 's':
		bill = 150;
		printf("ordered Sand wich\n");
		printf("enter quantity");
		scanf("%d",&q);
		bill = q * bill;
		break;
		default :printf("enter valid item from menu");
	}
	printf("total bill is %d",bill);
}
