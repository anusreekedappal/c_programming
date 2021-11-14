/*Write a program to compute the sum of n numbers.*/

#include <stdio.h>	//Header files
int main()		//main method declaration
{
	int n,sum;	//initialize the variable
	printf("enter the number\n");	
	scanf("%d",&n);
	sum=(n*(n+1))/2;	//calculate the sum
	printf("sum=%d\n",sum);	//print the sum
	return 0;
}
