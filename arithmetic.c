//5.Write a program to do arithmetic operations using switch case (Hint: do a+b, a-b, a*b, a/b).

#include<stdio.h>
int main()
{
     int a,b,r;
     int ch;
        printf("enter the number:\n");
        scanf("%d %d",&a,&b);
        printf("enter the operation=");
        printf("\n 1.+\n 2.-\n 3.*\n 4./\n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1 :
                printf("Sum of %d and %d = %d\n",a,b,a+b);
               break;
        case 2 :
                printf("Subtraction of %d and %d= %d\n",a,b,a-b);
               break;
        case 3 :
               printf("multiplication of %d and %d= %d\n",a,b,a*b);
               break;
        case 4 :
                 printf("division of %d and %d= %d\n",a,b,a/b);
               break;
        default:
                printf("invalid");
                break;
        }
         return 0;
}




