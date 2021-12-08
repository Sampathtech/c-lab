#include<stdio.h>
main()
{
	int a,bill;
	printf("enter units");
	scanf("%d",&a);
	if(a<=50){
		bill = a * 1;
		printf("electricity bill is %d",bill);
	}
	else if(a>=51 && a<=100){
		bill =( ((50*1) + (a-50)*2);
		printf("electricity bill is %d",bill);
	}
	else if (a>=101 && a<=250){
		bill =(50*1) + (100*2) + (a-100)*3;
		
	}

