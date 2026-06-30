#include<stdio.h>
int main()
{
    int id;
    float working_hr,salary,total;
    printf("Enter Employees ID : ");
    scanf("%d",&id);

    printf("Enter Working Hr: ");
    scanf("%f",&working_hr);

    printf("Enter salary : ");
    scanf("%f",&salary);

    total= working_hr * salary;

    printf("Employee Id = %d\n",id);
    printf("Employee Salary = %.2f",total);


    return 0;
}
