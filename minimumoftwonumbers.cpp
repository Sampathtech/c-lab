#include <stdio.h>

main()
{
    int a, b, min;

    printf("Enter a number: ");
 	scanf("%d", &a);
    printf("Enter a number: ");
 	scanf("%d", &b);
    min = (a < b) ? a : b;

    printf("Minimum between a and b is %d",min);

}
