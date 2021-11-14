//Write a general-purpose function to convert any given year into its roman equivalent. The following table shows the roman equivalents of decimal numbers:

#include<stdio.h>
void roman(int n);
int main()
{
	int year;
	printf("enter the year: ");
	scanf("%d",&year);
	printf("The corresponding romans: ");
	roman(year);
	return 0;
}

void roman(int n)
{
	while(n)
	{

 	if(n>=1000)
	 {
	 printf("m");
	 n=n-1000;
	 }
	 else if(n>=500)
 	{
	 printf("d");
	 n=n-500;
	 }
	 else if(n>=100)
	 {
	 printf("c");
	 n=n-100;
	 }
 	else if(n>=50)
	 {
	 printf("l");
	 n=n-50;
 	}
	 else if(n>=10)
 	{
	 printf("x");
	 n=n-10;
	 }	
	 else if(n>=5)
 	{
         printf("v");
         n=n-5;
 	}
	 else if(n>=1)
 	{
         printf("i");
        n=n-1;
 	}   
}
printf("\n");
}
