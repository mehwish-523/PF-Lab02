#include <stdio.h>

int main()
{
    int Tea_Quan = 3;
    int Samosa_Quan = 4;
    int Roll_Quan = 2;

    float Tea_Price = 60.00;
    float Samosa_Price = 40.50;
    float Roll_Price = 120.00;

    float Tea_Sub_total;
    float Samosa_Sub_Total;
    float Roll_Sub_Total;
    float Bill_Sub_Total;
    float gst;
    float Grand_Total;

   
    printf("================= FAST CAFETERIA RECEIPT =================\n");
    printf("Item\t\tQty\tUnit Price (PKR)\tSubtotal (PKR)\n");
    printf("-----------------------------------------------------------\n");

    printf("Tea\t\t%d\t%.2f\t\t\t%.2f\n",
    Tea_Quan,Tea_Price, Tea_Sub_total);

    printf("Samosa\t\t%d\t%.2f\t\t\t%.2f\n",
   Samosa_Quan, Samosa_Price, Samosa_Sub_Total);

    printf("Chicken Roll\t%d\t%.2f\t\t\t%.2f\n",
    Roll_Quan, Roll_Price, Roll_Sub_Total);

    printf("-----------------------------------------------------------\n");
    printf("Subtotal:\t\t\t\tPKR %.2f\n", Bill_Sub_Total);
    printf("GST (16%%):\t\t\t\tPKR %.2f\n", gst);
    printf("-----------------------------------------------------------\n");
    printf("Grand Total:\t\t\t\tPKR %.2f\n", Grand_Total);
    printf("================= THANK YOU FOR YOUR VISIT =================\n");

    return 0;
}