#include <stdio.h>

int main()
{
    double P = 250000.00;
    float R  = 8.5;
    int T = 3;

    double I;
    double TA;
    double MI;

    I = (P * R * T) / 100; 
	TA= P + I;
    MI = TA / (T * 12.0);

    printf("=============== BANK LOAN INTEREST SUMMARY ===============\n");

    printf("Principal Amount:          PKR %.2f\n", P);
    printf("Annual Interest Rate:      %.2f%%\n", R);
    printf("Loan Duration:             %d Years (%d Months)\n",
         T, T* 12);

    printf("----------------------------------------------------------\n");

    printf("Total Accrued Interest:    PKR %.2f\n", I);
    printf("Total Payable Amount:      PKR %.2f\n", TA);
    printf("Monthly Installment:       PKR %.2f\n", MI);

    printf("==========================================================\n");

    return 0;
}