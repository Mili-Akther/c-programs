#include <stdio.h>
int main()
{
    int years;
    int result;
    printf("Enter the years: ");
    scanf("%d",&years);

    result = ((years-1)/100)+1;
    printf("%d", result);

    return 0 ;
}
