#include <stdio.h>

int main()
{
    float PF_Marks = 88.0;
    int PF_Credit = 3;

    float Cal_Marks = 76.5;
    int Cal_Credit = 3;

    float Phy_Marks = 82.0;
    int Phy_Credit = 2;

    float Total_Weight_Score;
    int Total_Credit_Hour;
    float Weight_Average;

    Total_Weight_Score = (PF_Marks * PF_Credit)
    + (Cal_Marks * Cal_Credit)
    + (Phy_Marks * Phy_Credit);

   Total_Credit_Hour= PF_Credit + Cal_Credit + Phy_Credit;

    Weight_Average = Total_Weight_Score / Total_Credit_Hour;

    printf("================ SEMESTER ACADEMIC REPORT ================\n");

    printf("Course\t\t\tCredit Hours\tObtained Marks\n");
    printf("----------------------------------------------------------\n");

    printf("Programming Fund.\t%d\t\t%.2f\n", PF_Credit, PF_Marks);
    printf("Calculus\t\t%d\t\t%.2f\n", Cal_Credit, Cal_Marks);
    printf("Applied Physics\t\t%d\t\t%.2f\n", Phy_Credit, Phy_Marks);

    printf("----------------------------------------------------------\n");

    printf("Total Credits:\t%d\tWeighted Average:\t%.2f%%\n",
    Total_Credit_Hour, Weight_Average);

    printf("==========================================================\n");

    return 0;
}