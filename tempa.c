

/*Modify the above program to compute the centigrade equivalent of Fahrenheit
temperatures of 0-300 in steps of 20 using while loop*/

#include<stdio.h>
int main()
{
        int lower=0;
        int upper=300;
        int step=20;
        float celsius,fahrenheit;
        fahrenheit=lower;
        while(fahrenheit<=300)
        {
		 
	printf("fahrenheit is=%f\n",fahrenheit);
        celsius = (5.0/9) * (fahrenheit-32);
        printf("centigrade equivalents is =%f\n",celsius);
        fahrenheit=fahrenheit+step;
        }

}

