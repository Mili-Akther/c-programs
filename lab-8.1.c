#include <stdio.h>

int main()
{
    int x, y, *z;
    x = 44;
    y = 10;
    z = &x;

    printf("x=%d\t y=%d\t z=%u\n", x, y, z);

    *z = 10;
    y = *z;

    printf("x=%d\t y=%d\t z=%u\n", x, y, z);

    return 0;
}
