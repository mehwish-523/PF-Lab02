#include <stdio.h>

int main()
{
    float C = 37.5;
    float F;
    float K;

    F = (C * 9.0 / 5.0) + 32.0;
    K = C + 273.15;

    printf("=============== TEMPERATURE CONVERSION ================\n");

    printf("Temperature in Celsius:      %.2f C\n", C);
    printf("Temperature in Fahrenheit:   %.2f F\n", F);
    printf("Temperature in Kelvin:       %.2f K\n", K);

    printf("========================================================\n");

    return 0;
}