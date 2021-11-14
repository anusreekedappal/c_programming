/*Write a program to determine whether the entered year is a leap year or not. (Hint: Use the % (modulus) operator)*/

#include<stdio.h>
int main()
{
	int year;
	printf ("enter the year");
	scanf("%d",&year);
	if(year%400 ==0)
	{
		printf("%d is a leap year\n",year);
	}
		else
	{
		printf("%d is not a leap year\n",year);
	}
}
