#include<stdio.h>

#include<string.h>
void remov(char * str, char string);
int main()
{
         char str[100],ch,c;
         int i,j,len;
         printf("enter the string :");
         scanf("%[^\n]%c",str,&c);
         printf("enter a char you want to remove : ");
         scanf("%c",&ch);
         remov(str,ch);
         printf("String after removing '%c': %s\n", ch, str);
         return 0;
}
    
    void remov(char * str, char string)
    {
    int i, j;
    int len = strlen(str);
    for(i=0; i<len; i++)
    {
        if(str[i] == string)
        {
            for(j=i; j<len; j++)
            {
                str[j] = str[j+1];
            }
            len--;
            i--;
        }
    }

}
     
