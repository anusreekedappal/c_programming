//Write a program to calculate the sum of its digits. (Hint: Use the modulus operator ‘%’)

#include<stdio.h>
int main()
{
	int sum=0,rem=0,no;
	printf("enter the number=");
	scanf("%d",&no);	//scan the number
	while(no!=0)		//check the number is not equal to zero
	{
		rem=no%10;
		sum=sum+rem;
		no=no/10;
	}
	printf("sum=%d\n",sum); 	//print the sum
	return 0;
}
	
