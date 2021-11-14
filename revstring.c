

#include<stdio.h>
#include<string.h>
int main()
{
    int i,r;
    char str[20];
    printf("enter the string = ");
    scanf("%s",str);
    printf("string reverse =");
    r=strlen(str);
    for(i=r-1;i>=0;i--)
	    {
		    printf("%c",str[i]);
            }

     printf("\n");

    return 0;
}
