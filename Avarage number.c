//write a program that takes two integer and display sum and the average number
#include<stdio.h>
int main()
{
    int num1, num2, sum ;
    float avg;
    printf("Enter two numbers: ");
    scanf("%d %d",&num1,&num2);

    sum = num1 + num2;
    printf("The sum is = %d\n", sum);

    avg = (float)sum/2; //type custing
    printf("The Average is: %.2f\n",avg);
    return 0;
}

