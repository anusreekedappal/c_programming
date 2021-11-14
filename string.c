

#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,r;
    char str[20];
    char str1[20];
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

    case 2: printf("enter the 1st string = ");
   	    scanf("%s",str);
	    printf("enter the 2nd string = ");
            scanf("%s",str1);
	    printf("Appending string=");
	    strcat(str,str1);
	    printf("%s\n",str);
	    break;
    case 3: printf("enter the 1st string = ");
            scanf("%s",str);
            printf("enter the 2nd string = ");
            scanf("%s",str1);
            n=strcmp(str,str1);
	    if(n==0)
	    {
		   printf("string are same\n");
	    }
	    else
	    {
		   printf("string are not same\n");
	    }
	    break;
    case 4: printf("enter the 1st string = ");
            scanf("%s",str);
            printf("enter the 2nd string = ");
            scanf("%s",str1);
            strcpy(str,str1);
	    printf("%s\n",str);
	    break;

    default:printf("invalid\n");
            break;

}
    return 0;
}

