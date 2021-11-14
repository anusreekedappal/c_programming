#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,r;
    char str[20];
    printf("enter the choice:");
    scanf("%d",&n);
switch(n)
{
    case 1:  printf("enter the string = ");
            scanf("%s",str);
	    printf("enter the length =");
	    for(i=0;str[i]!='\0';i++);
	    {
	    printf("%d\n",i);
	    }
	    break;

    case 2: printf("enter the string = ");
   	    scanf("%s",str);
	    printf("string reverse =");
	    r=strlen(str);
	    for(i=r-1;i>=0;i--)
	    {
		    printf("%c",str[i]);

	    }
	      printf("\n");

	    break;
    case 3:printf("exit\n");
            break;
    
    default:printf("invalid\n");
            break;
                  
}
    return 0;
}

