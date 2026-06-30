#include<stdio.h>
int main()
{
    float time;
    float liters=0.5;
    int result;
    printf("Enter the time = ");
    scanf("%f",&time);

    result = liters*time;
    printf("Liters = %d", result);

    return 0 ;
}
