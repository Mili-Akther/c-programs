#include <stdio.h>

int main()
{
    int count;
    float value, high, low, sum, average, range;
    sum = 0;
    count = 0;

    printf("Enter numbers in a line : input a NEGATIVE number to end\n");

input:
    scanf("%f", &value);
    if (value < 0) goto output;
    count = count + 1;
    if (count == 1)
        high = low = value;
    else if (value < low)
        low = value;
    else if (value > high)
        high = value;

    sum = sum + value;

    goto input;

output:
    if (count > 0)
    {
        average = sum / count;
        range = high - low;
        printf("\n\n");
        printf("Total values : %d\n", count);
        printf("Highest_value: %.2f\nLowest_value : %.2f\n", high, low);
        printf("Range : %.2f\nAverage : %.2f\n", range, average);
    }
    else
    {
        printf("No positive numbers entered.\n");
    }

    return 0;
}
