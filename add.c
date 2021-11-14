//Write a program to print a new number by adding one to each of its digits. For example if the number that is input is 12391 then the output should be displayed as 23402

#include<stdio.h>
int main()
{
	int count=5,num,no=1,sum,i;
	printf("enter the number=");
	scanf("%d",&num);
	for(i=1;i<count;i++)
	{
		no=no*10;
		no=no+1;
	}
	sum=num+no;
	printf("new number= %d\n",sum);
	return 0;
}
