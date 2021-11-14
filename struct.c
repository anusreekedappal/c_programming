#include <stdio.h>
#include <string.h>
int main ()
{
int i,n;
union student
{
char name[25],dept[25],course[25];
int roll, year_join;
}stud[20];
printf("Enter the number of student=");
scanf("%d",&n);
printf("Enter the record of student \n");
for(i=0;i<n;i++)
{
printf("Enter name :");
//scanf("%[^\n]",stud[i].name);
scanf("%s",stud[i].name);
printf("Enter Department :");
//scanf("%[^\n]",stud[i].dept);
scanf("%s",stud[i].dept);
printf("Enter Roll no:");
scanf("%d",&stud[i].roll);
printf("Enter year of joining:");
scanf("%d", &stud[i].year_join);
printf("Enter course:");
//scanf("%[^\n]",stud[i].course);
scanf("%s",stud[i].course);
}
printf("Data of students are\n");
for(i=0;i<n;i++)
{
printf("Name of student is %s,",stud[i].name);
printf("Departemt of student is %s,",stud[i].dept);
printf("Roll no of student is %d,",stud[i].roll);
printf("Year of joining is %d,",stud[i].year_join);
printf("Course of student is %s\n,",stud[i].course);
}
return 0;
}
         
