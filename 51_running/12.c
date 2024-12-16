#include<stdio.h>

int main()
{
    // Declaration
    int hours;
    char id[10];
    double hourSalary,totalSalary;
    // Data input
    printf("Enter the employee ID :");
    scanf("%s",id);
    printf("Enter working time :");
    scanf("%d",&hours);
    printf("Enter salary amount per hour :");
    scanf("%lf",&hourSalary);
    totalSalary=hours*hourSalary;
    printf("Employee ID = %s\nTotal Salary = %.2lf taka",id,totalSalary);
    return 0;
}