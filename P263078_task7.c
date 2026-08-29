#include <stdio.h>

int main()
{
    float Vi = 12.5;
    float a = 3.2;
    float t = 6.0;

    float Vf;
    float S;


    printf("=============== KINEMATICS MOTION REPORT ===============\n");

    printf("Initial Velocity (vi):       %.2f m/s\n", Vi);
    printf("Acceleration (a):             %.2f m/s^2\n", a);
    printf("Time Elapsed (t):      
    Vf = Vi + (a * t);
    S = (Vi * t) + (0.5 * a * t * t);       %.2f s\n", t);

    printf("---------------------------------------------------------\n");

    printf("Calculated Final Velocity (vf):   %.2f m/s\n", Vf);
    printf("Calculated Distance (s):          %.2f m\n", S);

    printf("=========================================================\n");

    return 0;
}