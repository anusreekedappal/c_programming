#include <stdio.h>
int main()
{
    int a, b,c,d, temp;
    printf("enter the 4 number\n");
    scanf("%d%d%d%d", &a, &b ,&c,&d);
    printf("current values are:\n a=%d\n b=%d\n c=%d\n d=%d\n", a, b,c ,d);
    temp=a;
    a=b;
    b=c;
    c=d;
    d=temp;
    printf("After swapping:\n a=%d\n b=%d\n c=%d\n d=%d\n", a, b ,c, d);
}
