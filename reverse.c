//Write a program to reverse the number.

#include<stdio.h>
int main()

{
	int rev=0,no;
	printf("enter the number=");
	scanf("%d",&no);
	while(no>0)	//check the enter number is greater than 0
	{
		rev=(rev*10)+(no%10);
		no=no/10;
	}
	printf("reverse =%d\n",rev);	//print the reverse of the number enter
	return 0;
}
