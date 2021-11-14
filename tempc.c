//Write a program to convert Celsius to Fahrenheit.


#include<stdio.h>
int main()
{
        float celsius,fahrenheit;
        printf("enter the temperature in celsius=");
        scanf("%f",&celsius);
        fahrenheit = ((celsius*9)/5)+32;
        printf("fahrenheit equivalents is =%f\n",fahrenheit);
        return 0;
}


