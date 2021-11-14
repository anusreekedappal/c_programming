//Write a program to display the number (1-10) entered through the keyboard using switch statement.

#include<stdio.h>
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
switch(n)
{
    case 1: printf(" 1\n");
            break;
    case 2: printf("2\n");
            break;
    case 3: printf("3\n");
            break;
    case 4: printf("4\n");
            break;
    case 5: printf("5\n");
            break;
    case 6: printf("6\n");
            break;
    case 7: printf("7\n");
            break;
    case 8: printf("8\n");
            break;
    case 9: printf("9\n");
            break;
    case 10: printf("10\n");
            break;
    default:printf("invalid\n");
            break;
                  
}
    return 0;
}

