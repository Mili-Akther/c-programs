//write a program that calculate the area of a triangle
#include<stdio.h>
int main()
{
    float base , hight , area;
    printf("Base = ");
    scanf("%f",&base);

    printf("Hight = ");
    scanf("%f",&hight);

    area = 0.5 * base * hight;
    printf("Area = %.2f\n", area);

    return 0 ;
}
