//Any integer is input through the keyboard. Write a program to find out whether it is an odd number or even number.

#include<stdio.h>
int main()

{

	int x;
	printf("enter the number\n");
	scanf("%d",&x);
	if(x%2!=0)
	{
	printf( "%d is odd number\n",x);
	}
	else
	{
		printf("%d is even number\n",x);
	}
	return 0;
}
