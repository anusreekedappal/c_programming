//4. Write a program to display the series "1+3+5+7+....... + n" also find the sum.

#include <stdio.h>
int main()
{
    int n,sum=0,i=1;
    printf("Enter the range of number:");
    scanf("%d",&n);

    while(i<=n)
    {
        printf("%d\t",i);
        sum=sum+i;
        i=i+2;
    }
   
    printf("\nThe sum of the series = %d\n",sum);
    return 0;
}
