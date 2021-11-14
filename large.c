//2. Write a program to compute the largest element in an array and display along with its position.


#include<stdio.h>

int main()
{
	int a[100],n,i,ind=0;			//declare the variable
	printf("enter the number of element:");
	scanf("%d",&n);				//read the number of element
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);		//read the element
	}
	for(i=0;i<=n;i++)
	{
	if(a[ind]<a[i])				//check the first element is less then second
	{
	a[ind]=a[i];	
	ind=i;
	}

	}
	printf("largest= %d at index %d\n",a[ind],ind);		//print the largest value
	
	return 0;
}
