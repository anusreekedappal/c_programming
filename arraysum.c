// Write a program to compute the sum of elements in an array


#include<stdio.h>
int main()
{
	int sum=0,i,n, a[100];		//declare the variable
	printf("enter the element:");
	scanf("%d",&n);			//find  the number of element stored in an array
	for(i=0;i<n;i++)
	{
        scanf("%d",&a[i]);		//input element in an array
	}
	for(i=0;i<n;i++)
	{
	sum=sum+a[i];			//calculate sum
	}	
	printf("sum=%d\n",sum);		//print the sum
	return 0;
}
