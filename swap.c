#include <stdio.h>
void swap(int *x,int *y,int *z,int *u)
{
    int t;
     t   = *x;
    *x   = *y;
    *y   =  *z;
    *z   =  *u;
    *u   = t;
}
int main()
{
    int num1,num2,num3,num4;
    printf("Enter value of num1: ");
    scanf("%d",&num1);
    printf("Enter value of num2: ");
    scanf("%d",&num2); 
    printf("Enter value of num3: ");
    scanf("%d",&num3);
    printf("Enter value of num4: ");
    scanf("%d",&num4);

    //displaying numbers before swapping
   // printf("Before Swapping:\n num1 is: %d\n num2 is: %d\n num3 is: %d\n num4 is: %d\n",num1,num2,num3,num4);

    //calling the user defined function swap()
    swap(&num1,&num2,&num3,&num4);

    //displaying numbers after swapping
    printf("After  Swapping:\n num1 is: %d\n num2 is: %d\n num3 is: %d\n num4 is: %d\n",num1,num2,num3,num4);

    return 0;
}
