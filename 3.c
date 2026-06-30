

#include <stdio.h>

void main()
{
    char *name;
    int length;
    name = "GOOD";
    char *cptr = name;

    printf("%s\n", name);

    while(*cptr != '\0')
    {
        printf(" %c stored in address %u\n", *cptr, cptr);
        cptr++;
    }

    length = cptr - name;
    printf("Length=%d\n", length);
}
