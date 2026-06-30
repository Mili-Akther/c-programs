#include<stdio.h>
int main()
{
    int quantity;
    float price, Bonus, Commission, Gross_salary;
    printf("Enter Quantity = ");
    scanf("%d",&quantity);

    printf("Enter Price = ");
    scanf("%f",&price);

    Bonus = 200 * quantity;
    Commission = 0.02 * quantity * price;
    Gross_salary = 1500 + Bonus + Commission;
    printf("Bonus = %.2f\n",Bonus);
    printf("Commission = %.2f\n",Commission);
    printf("Gross_salary = %.2f\n",Gross_salary);
    return 0 ;

}
