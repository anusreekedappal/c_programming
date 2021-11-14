//4. Write a program to find factorial using function


#include<stdio.h>
int fact(int n);
int main()
{
	int n;
	printf("enter the value=");
	scanf("%d",&n);
	printf("factorial=%d\n",fact(n));
	return 0;
}
int fact(int n)
{
	if(n>1)
	{
		return n*fact(n-1);
	}
	else
	{
		return n;
	}
}
