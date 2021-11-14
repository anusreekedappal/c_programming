//For any character is entered through the keyboard, write a program to determine whether the character entered is a capital letter, a small case letter, a digit or a special symbol. The following table shows the range of ASCII values for various characters.

#include<stdio.h>
int main()
{
	char ch;
	int ascii;
	printf("enter the character:");
		scanf("%c",&ch);	
	if(ch>=65&&ch<=90)
	{
		printf("%c is a capital letter\n",ch);
	}
	else if(ch>=97&&ch<=122)
	{
		printf("%c is a small letter\n",ch);
	}
	else if(ch>48&&ch<57)
	{
		printf("%c is a number\n",ch);
	}
	else if(ch>0&&ch<47||ch>58&&ch<64||ch>91&&ch<96||ch>123&&ch<127)
	{
	printf("%c is a special symbol\n",ch);
	}
	return 0;
}	
