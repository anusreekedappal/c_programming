

#include <string.h>
#include<stdio.h> 
int main()
{
    char str[50];  
    int i;
    printf("Enter  the string in lower case: ");
    scanf("%s",str);
    for(i=0;str[i];i++)  
    {
        if(str[i]>=97 && str[i]<=122)
         str[i]-=32;
    }
 	
     
    printf("string in uppercase ='%s'\n",str);
    return 0;
}
