#include<stdio.h>
#include<string.h>

struct studentdata

{
	int roll;
	char name[50];
	char depart[50];
	char course[20];
	int yoj;
}nos[450] = { 03, "anandu", "cs", "B.tech", 2019,
04, "amritha vs", "Computer Science", "B.Tech", 2018,
05, "akhil", "Computer Applications", "BCA", 2020,
13, "abhi", "Mechanical", "B.tech", 2019,
1, "Aslam", "electonics and communication", "Diploma", 2020,
2, "arun", "civil engineering", "B.tech", 2018
};
void student_joining(int year)
{
	int i;
	printf("Year of joining :%d", year);
	for (i = 0; i <= 450; i++)
	{
		if (nos[i].yoj == year)
		{

			printf("\nRoll Number : %d", nos[i].roll);
			printf("\nName : %s", nos[i].name);
			printf("\nDepartment : %s", nos[i].depart);
			printf("\nCourse : %s\n", nos[i].course);
		}
	}
}
void student_rollno(int enroll)
{
	int i;
	printf("\nRoll number : %d", enroll);
	for (i = 0; i <= 450; i++)
	{
		if (nos[i].roll == enroll)
		{
			printf("\nName : %s", nos[i].name);
			printf("\nDepartment : %s", nos[i].depart);
			printf("\nCourse : %s\n", nos[i].course);
			printf("\nYear of joining : %d\n", nos[i].yoj);
		}
	}
}
int main()
{
	int yoj, roll;
	printf("\nEnter year of joining of the students : ");
	scanf("%d", &yoj);
    student_joining	(yoj);
	
	printf("\nEnter the roll number of the studnet you want data : ");
	scanf("%d", &roll);
    student_rollno	(roll);

	return 0;
}
