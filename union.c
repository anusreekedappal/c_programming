#include<stdio.h>
#include<string.h>
void main() 
{
   struct student 
   {
	    int roll_no;
            char name[20];
            char depart[20];
            char course[20];
            int year_of_joining[20];
   };
 
   union records
   {
      struct student st;
   };
   union records set;
 
   printf("Enter details:");
   
   printf("\nEnter roll no : ");
   scanf("%d", &set.st.roll_no);
   printf("\nEnter name : ");
   scanf("%s", set.st.name);
   printf("\nEnter department : ");
   scanf("%s", set.st.depart);
   printf("\nEnter course : ");
   scanf("%s", set.st.course);
   printf("\nEnter year of joining: ");
   scanf("%d", &set.st.year_of_joining[20]);
 
 
 
     printf("\nThe student details are : \n");
     printf("\nRollno : %d", set.st.roll_no);
     printf("\nname : %s", set.st.name);
     printf("\ndepartment : %s", set.st.depart);
     printf("\ncourse : %s", set.st.course);
   
     printf("\nyear of joining : %d\n", set.st.year_of_joining[20]);
 

}
