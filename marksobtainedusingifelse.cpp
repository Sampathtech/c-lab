#include<stdio.h>
main()
{
	int m;
	printf("enter marks obtained:");
	scanf("%d",&m);
	if(m>=90){
		printf("the grade obtained is: A");
	}
	else if (m>=80){
		printf("the grade obtained is: B");
	}
	else if (m>=70){
		printf("the grade obtained is: C");
	}	
	else if (m>=60){
		printf("the grade obtained is: D");
	}	
	else if (m>=50){
		printf("the grade obtained is: E");
	}
	else{
		printf("the grade obtained is: F");
	}
	}	
