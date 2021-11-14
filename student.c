//Write a function that receives marks of 3 students in 3 different subjects and return theaverage and percentage of these marks. Call this function from the main () and print the value in main ().

#include<stdio.h>
#include<math.h>
int mark(int m1,int m2,int m3,float *avg,float *per);
int main()
{
	int m1,m2,m3,i;
	float avg,per;
	 for(i=1;i<=3;i++)
			{
	printf("enter the mark of 1st subject:");
	scanf("%d",&m1);
	printf("enter the mark of 2nd subject:");
	scanf("%d",&m2);
	printf("enter the mark of 3rd subject:");
	scanf("%d",&m3);
        mark(m1,m2,m3,&avg,&per);
	printf("Average= %f\n",avg);
	printf("percentage =%f\n",per);
	}
	return 0;
}
int mark(int m1,int m2,int m3,float *avg,float *per)
{
	int tot;
	tot=m1+m2+m3;
	*avg=tot/3.0;
	*per=(tot/300.0)*100.0;
	return 0;
}
