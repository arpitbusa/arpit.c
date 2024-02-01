#include<stdio.h>
#include<string.h>
struct student
{
	int rollnumber;
	char name[15];
};

int main()
{
	struct student s1;
	s1.rollnumber=10;
	strcpy(s1.name,"parth");
	printf("Rollnumber:- %d\n",s1.rollnumber);
	printf("Name:- %s\n",s1.name);
	return 0;
}