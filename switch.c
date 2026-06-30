#include<stdio.h>
int main()
{
    int digit;
    printf("Enter a digit = ");
    scanf("%d",&digit);

    switch(digit)
    {
    case 0 :
        printf("zero\n");
        break;
    case 1 :
        printf("one\n");
        break;
    case 2 :
        printf("two\n");
        break;
    case 3 :
        printf("three\n");
        break;
    case 4 :
        printf("Four\n");
        break;
    case 5 :
        printf("Five\n");
        break;
    case 6 :
        printf("six\n");
        break;
    case 7 :
        printf("seven\n");
        break;
    case 8 :
        printf("Eight\n");
        break;
    case 9 :
        printf("Nine\n");
        break;

    default:
        printf("Not a valid digit");
    }


    return 0;
}

