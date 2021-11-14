//3. Write a program to perform the addition of 2-D arrays.

#include<stdio.h>
int main() 
{
  int a[100][100], b[100][100], s[100][100], i, j,r,c;
  printf("Enter the no. of rows: ");
  scanf("%d", &r);
  printf("Enter the no. of columns: ");
  scanf("%d", &c);

  printf("Enter elements of 1st array:\n");		//read the first array element
  for (i = 0; i <r; i++)
    for (j = 0; j < c; j++) 
    {
      printf("Enter element a[%d%d]: ", i , j );
      scanf("%d", &a[i][j]);
    }

  printf("Enter elements of 2nd array:\n");		//read the second array element
  for (i = 0; i <r; i++)
    for (j = 0; j < c; j++) 
    {
      printf("Enter element b[%d%d]: ", i , j );
      scanf("%d", &b[i][j]);
    }

  
  for (i = 0; i < r; i++)			//add the two array
    for (j = 0; j < c; j++) 
    {
      s[i][j] = a[i][j] + b[i][j];
    }
  printf("\nSum of two array: \n");
  for (i = 0; i <r; i++)			//print the result
    for (j = 0; j <c; j++) 
    {
      printf("%d	", s[i][j]);
     
       if (j == c - 1) 
       {
        printf("\n\n");
      }
    }
  return 0;
}
