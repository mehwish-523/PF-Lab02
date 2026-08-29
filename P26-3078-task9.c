#include <stdio.h>

int main()
{
    double Basicsalary = 85000.00;
    double hra;
    double Medical;
    double Grosssalary;
    double Tax;
    double Netsalary;

    hra = 0.20 * Basicsalary;
    Medical = 0.10 * Basicsalary;

    Grosssalary = Basicsalary + hra + Medical;

    Tax = 0.05 * Grosssalary;

    Netsalary = Grosssalary - Tax;

    printf("================ MONTHLY SALARY SLIP =================\n");

    printf("Basic Salary:              PKR %.2f\n", Basicsalary);
    printf("House Rent Allowance (20%%): PKR %.2f\n", hra);
    printf("Medical Allowance (10%%):    PKR %.2f\n", Medical);

    printf("------------------------------------------------------\n");

    printf("Gross Salary:              PKR %.2f\n", Grosssalary);
    printf("Tax Deduction (5%%):         PKR %.2f\n", Tax);

    printf("------------------------------------------------------\n");

    printf("Net Payable Salary:        PKR %.2f\n", Netsalary);

    printf("======================================================\n");

    return 0;
}