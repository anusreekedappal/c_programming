//A cashier has currency notes of denominations 10, 50 and 100. If the amount to be withdrawn is input through the keyboard in tens, find the total number of currency notes of each denomination the cashier will have to give to the withdrawer.

#include<stdio.h>
int main()
{
	int r100=0,r50=0,r10=0,amnt;
	printf("enter the amount=");
	scanf("%d",&amnt);
		while(amnt>=100)
		{
			r100=amnt/100;
			amnt=amnt%100;
			printf("total number of 100r notes =%d\n",r100);
			break;
		}
		while(amnt>=50)
		{
			r50=amnt/50;
			amnt=amnt%50;
			printf("total number of 50r notes=%d\n",r50);
			break;
		}
	   	while(amnt>=10)
		{
			r10=amnt/10;
			amnt=amnt%10;
			printf("total number of 10r notes=%d\n",r10);
		}
	return 0;
}	
