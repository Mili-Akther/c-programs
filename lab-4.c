#include <stdio.h>

int main()
{
    int level, job_number;
    float basic, gross_salary, rent, perks, tax, net_salary;

    printf("Enter level, job number and basic pay:\n");
    scanf("%d %d %f", &level, &job_number, &basic);

    // Decide perks based on level
    switch (level)
    {
    case 1:
        perks = 1000 + 500;
        break;
    case 2:
        perks = 750 + 200;
        break;
    case 3:
        perks = 500 + 100;
        break;
    case 4:
        perks = 250;
        break;
    default:
        printf("Invalid level\n");
        return 0;
    }

    // House rent allowance = 25% of basic
    rent = basic * 0.25;

    // Gross salary
    gross_salary = basic + rent + perks;

    // Income tax calculation (CORRECTED)
    if (gross_salary <= 2000)
        tax = 0;
    else if (gross_salary <= 4000)
        tax = gross_salary * 0.03;   // 3%
    else if (gross_salary <= 5000)
        tax = gross_salary * 0.05;   // 5%
    else
        tax = gross_salary * 0.08;   // 8%

    // Net salary
    net_salary = gross_salary - tax;

    // Final output
    printf("\n--- Salary Details ---\n");
    printf("Level         : %d\n", level);
    printf("Job Number    : %d\n", job_number);
    printf("Basic Pay     : %.2f\n", basic);
    printf("Perks         : %.2f\n", perks);
    printf("House Rent    : %.2f\n", rent);
    printf("Gross Salary  : %.2f\n", gross_salary);
    printf("Income Tax    : %.2f\n", tax);
    printf("Net Salary    : %.2f\n", net_salary);

    return 0;
}
