
/*Modify the temperature conversion program to convert and print the temperature in  reverse order from 300-0 in steps of 20*/

#include<stdio.h>
int main()
{

       int lower=0;
       int upper=300;
       int step=20;
       float celsius,fahrenheit;
       celsius=upper;
       while(celsius>=lower)
	{
        printf("celuius is =%f\n",celsius);
        fahrenheit = ((celsius*9)/5)+32;
        printf("fahrenheit equivalents is =%f\n",fahrenheit);
	celsius=celsius-step;
	}
       
}


