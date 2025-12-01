#include <stdio.h>
#include <math.h>
int main()
{ int X1, X2, Y1, Y2;
float distance;
printf("Enter X1: \n");
scanf("%d",&X1);
printf("Enter Y1: \n");
scanf("%d",&Y1);
printf("Enter X2: \n");
scanf("%d",&X2);
printf("Enter Y2: \n");
scanf("%d",&Y2);
distance = sqrt(pow((X2-X1),2) + pow((Y2-Y1),2));
printf("Total distance = %.2f", distance);
}
