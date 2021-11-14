/*2. A record contains name of cricketer, his age, number of test matches that he has played and
the average runs that he has scored in each test match. Create an array of structure to hold
records of 20 such cricketer and then write a program to read these records */


#include<stdio.h>
#include<stdlib.h>
struct cricketers
{
	int avrun;
	char name[20];
	int age;
	int notm;
}crick[20] = {
	110, "Sachin Tendulkar", 20, 67,
	97, "Virendra Sehwag", 45, 36,
	65, "Irfan Pathan", 35, 40,
	143, "Yusuf Pathan", 40, 21,
	120, "Yuvaraj Singh", 32, 45,
	110,"Virat kohli",23,46,
	110, "Rohit sharma", 20, 67,
        97, "kapil dev", 45, 36,
        65, "Ravindra jadeja", 35, 40,
        143, "KL Rahul", 40, 21,
        120, "shikhar dhawan", 32, 45,
        110,"anil kumble",23,46,
        110, "jasprit bumrah", 20, 67,
        97, "sourav gangully", 45, 36,
        65, "sunil gavaskar", 35, 40,
        143, "cheteshwar pujara", 40, 21,
        120, "ishant sharma", 32, 45,
        110,"rishab pant",23,46,
	120, "ishant sharma", 32, 45,
        110,"krishnapa gowtham",23,46,
};

int main()
{
	int i;
    for (i = 0; i <= 20; i++)
	{
		printf("Name : %s", crick[i].name);
		printf("\nAge : %d", crick[i].age);
		printf("\nTotal Test Matches played : %d", crick[i].notm);
		printf("\nAverage Run : %d\n\n", crick[i].avrun);
	}
return 0;
}


