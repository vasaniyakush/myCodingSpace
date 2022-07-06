#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
struct employee
{
	char name[20];
	char gender;
	char marital_status;
	int employee_id;
};
int main()
{
	struct employee e;
	int i;
	printf("Enter the name of employee :");
	gets(e.name);
	printf("Enter gender of employee(m for male anf f for female) :");
	cin>>e.gender;
	
	printf("Enter marital_status(y for maarried and n for not married) :");
	cin>>e.marital_status;
	printf("Enter employee id :");
	cin>>e.employee_id;
	printf("Employee's Details :\n");
	printf("Name = %s\nGender = %c\nMarital status = %c\nEmployee ID = %d",e.name,e.gender,e.marital_status,e.employee_id);
	return 0;

}
