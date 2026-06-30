#include<stdio.h>
int main()
{
 int id;
 float working_hrs, salary_per_hrs, total_salary;
 printf("Enter your ID:\n");
 scanf("%d",&id);

 printf("Enter your working hours: \n");
 scanf("%f",&working_hrs);

 printf("Enter your Salary per hours: \n");
 scanf("%f",&salary_per_hrs);

 total_salary = working_hrs* salary_per_hrs;

 printf("Employees ID = %d\n",id);
 printf("Total salary = $%.2f", total_salary);
}
