//Write a recursive function to obtain the running sum of first n natural numbers. Obtain the value of n from the user

#include<stdio.h>
int sum(int);
int main()
{
	int n;
        printf("enter the value of n :");
        scanf("%d",&n);
        printf("sum=%d\n",sum(n));
         return 0;
}
int sum(int n)
{
        if(n>0)
        {
        return n+sum(n-1);
        }
        else
        {
        return n;
        }
}


