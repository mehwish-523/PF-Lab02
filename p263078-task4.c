#include<stdio.h>
int main()
{
char letter ='M';
int number =42;
float decimal =3.141490;
double bigDecimal =98.765432;
 printf("--------------------------------------------------\n");
 printf("Type Name Variable Value      Size in Memory\n");
 printf("---------------------------------------------------\n");
 printf("%-13s %-19d %d byte(s)\n","char","M",(int)sizeof(letter ));
 printf("%-13s %-19d %d byte(s)\n","int",number,(int)sizeof(number));
 printf("%-13s %-19.6f %d byte(s)\n","float",decimal,(int)sizeof(decimal));
 printf("%-13s %-19.6f %d byte(s)\n","double",bigDecimal,(int)sizeof(bigDecimal));
 printf("---------------------------------------------------\n");
 return 0;
}