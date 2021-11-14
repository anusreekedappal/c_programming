
//Write a program to convert Fahrenheit temperature to their centigrade equivalents. C= (5/9) * (f -32) where c-centigrade & f-Fahrenheit

#include<stdio.h>
int main()
{
	float celsius,fahrenheit;
	printf("enter the temperature in fahrenheit=");
        scanf("%f",&fahrenheit);
	celsius = (5.0/9) * (fahrenheit-32);
	printf("centigrade equivalents is =%f\n",celsius);
	return 0;
}

