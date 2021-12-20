#include<stdio.h>
int main()
{
	int i=1,n;
	printf("enter no of stars to display\n");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("%c",'*');
		i++;
	}
	
}
