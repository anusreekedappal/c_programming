/*Write a function power (a, b) to calculate the value of a raised to b.*/


#include<stdio.h>
#include<math.h>
void power();
void main()
{
  power();
}
void power( int a,int b)
{
	int re;
	printf("Enter the number a=");
        scanf("%d", &a);
        printf("enter the number b=");
        scanf("%d",&b);
        re = pow(a,b);
	printf("result=%d\n",re);
}
