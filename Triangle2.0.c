#include<stdio.h>
#include<math.h>
int main()
{
   float A, B , C ,S,area;
   printf("Enter the Three for tiangle = ");
   scanf("%f %f %f",&A,&B,&C);

   S =(float) (A+B+C)/2;
   area=sqrt(S*(S-A)*(S-B)*(S-C));
   printf("Area = %.2f\n", area);

    return 0 ;

}
