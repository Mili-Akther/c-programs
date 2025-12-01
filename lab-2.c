#include <stdio.h>

int main() {
    int quantity;
    float price, bonus, commission, gross_salary;

    printf("Enter your quantity:\n");
    scanf("%d", &quantity);

    printf("Enter your price:\n");
    scanf("%f", &price);

    bonus = 200 * quantity;
    commission = 0.02 * price * quantity;
    gross_salary = 1500 + bonus + commission;

    printf("Bonus = %.2f\n", bonus);
    printf("Commission = %.2f\n", commission);
    printf("Gross Salary = %.2f\n", gross_salary);

    return 0;
}
