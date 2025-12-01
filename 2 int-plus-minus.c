//write a program that takes two integer and display sum plus minus and divition

#include<stdio.h>
int main()
{
    int num1, num2, result;
    printf("Enter two numbers: ");
    scanf("%d %d",&num1,&num2);

    result = num1 + num2;
    printf("sum = %d\n", result);

    result = num1 - num2;
    printf("sub = %d\n", result);

    result = num1 * num2;
    printf("Mul = %d\n", result);

    result = num1 / num2;
    printf("dev = %d\n", result);

    result = num1 % num2;
    printf("Mol = %d\n", result);

    return 0;
}

