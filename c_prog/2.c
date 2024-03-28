#include<stdio.h>
int main()
{
float f,c,k;
printf("\nEnter the temperature in Fahrenhite(F) ");
scanf("%f",&f);

c=(f-32)*5/9;
k=c+273.15;

printf("Temperature in Celsius is %f and in Kelvin is %f\n",c,k);
return 0;
}
