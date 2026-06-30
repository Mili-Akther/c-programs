#include <stdio.h>

int main() {
    int count = 0;
    double sum, max, min;
    sum = 0;

    while (1)
    {
        double base;
        scanf("%lf", &base);
        if (base == -1) {
            break;
        }

        if (count == 0) {
            min = base;
            max = base;
        } else if (min >= base) {
            min = base;
        } else if (max <= base) {
            max = base;
        }
        count++;

        sum += base;
    }

    double avarage = sum/count;
    double range = max - min;
    double total_value = sum;

    printf("Total value \t: %d\n", count);
    printf("High-value \t: %lf\n", max);
    printf("Low-vlaue \t: %lf\n", min);
    printf("Range \t\t: %lf\n", range);
    printf("Avarage \t:%lf\n", avarage);

    return 0;


}
