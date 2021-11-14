#include <stdio.h>

int main()
{
   int x, y, *p, *q, sum;

   printf("Enter x=");
   scanf("%d", &x);
   printf("Enter y=");
   scanf("%d", &y);


   p = &x;
   q = &y;

   sum = *p + *q;

   printf("Sum of the numbers = %d\n", sum);

   return 0;
}
