#include <stdio.h>

int main()
{
    float r = 7.5;
    float pi = 3.14159;

    float d;
    float c;
    float A;

    d = 2 * r;
    c = 2 * pi * r;
    A = pi * r * r;

    printf("=============== CIRCLE GEOMETRY REPORT ================\n");

    printf("Given Radius:             %.3f cm\n", r);
    printf("Calculated Diameter:      %.3f cm\n", d);
    printf("Calculated Circumference:  %.3f cm\n", c);
    printf("Calculated Area:           %.3f sq.cm\n", A);

    printf("========================================================\n");

    return 0;
}