#include <stdio.h>
int main ()
{
    int level, job_number;
    float basic, gross_salary,rent,perks,tax,net_salary;

    while (1)
    {
        printf("Enter your level,job_number,basic:");
        scanf("%d %d %f",&level,&job_number,& basic);


        switch(level)
        {
        case 1:
            perks = 1500;
            break;
        case 2:
            perks = 950;
            break;
        case 3:
            perks = 600;
            break;
        case 4:
            perks = 250;
            break;
        default:
            printf("Invalid level");

        }
        rent = basic*0.25;
        gross_salary = basic + rent+ perks;
        if(gross_salary <=2000)
        {
            tax = 0;
        }

        else if (2000<gross_salary&& gross_salary<=4000)
        {
            tax = 0;
        }
        else if(2000<gross_salary&&gross_salary<5000)
        {
            tax=gross_salary*0.05;
        }
        else
        {
            tax = gross_salary*0.08;
        }
        net_salary= gross_salary-tax;
        printf("level\t:%d\n",level);
        printf("job_number\t: %d\n",job_number);
        printf("Net_salary\t:%d\n",net_salary);

        return 0 ;
    }
}
