#include<stdio.h>
#include<stdlib.h>
struct Employee
{
	int Emp_id;
	char Emp_name[100];
	int salary;
	int depart_id;
	char depart_name[100];
};
void EmployeeSalarygreater(struct Employee,int maximumsalaryofdepx)
{
	struct Employee person;
	struct Employee *ptr;
	ptr=&person;
	printf("Names of all the Employee of Department Y whose salary is greater than maximum salary of Dapartment X");
	int i;
	for(i=0;i<5;i++)
	{
		if(*(ptr+i)->depart_name=='Y')
     	{
	    	if((ptr+i)->salary>maximumsalaryofdepx)
	    	printf("%s\n",ptr->Emp_name);
    	}
	}
	
}
void Delete(struct Employee *ptr);
int main()
{
	int j,i;
	FILE *p;
	p=fopen("20k-1075.txt","w");
	if(p==NULL)
	{
		printf("Error");
	}
	struct Employee person;
	struct Employee *ptr;
	ptr=&person;
	for(i=0;i<5;i++)
	{
		printf("Enter Id for Employee %d: ",i+1);
		scanf("%d",&ptr->Emp_id);
		fscanf(p,"%d",&ptr->Emp_id);
		fprintf(p,"ID=%d",ptr->Emp_id);
		
		printf("Enter Name of Employee %d: ",i+1);
		scanf("%s",ptr->Emp_name);
		fscanf(p,"%s",ptr->Emp_name);
		fprintf(p,"Name=%s",ptr->Emp_name);

		printf("Enter Salary of Employee %d: ",i+1);
		scanf("%d",&ptr->salary);
		fscanf(p,"%d",&ptr->salary);
		fprintf(p,"Salary=%d",ptr->salary);

		printf("Enter Deparment Id for Employee %d: ",i+1);
	    scanf("%d",&ptr->depart_id);
		fscanf(p,"%d",&ptr->depart_id);
		fprintf(p,"Department ID=%d",ptr->depart_id);
	
	    printf("Enter Department Name of Employee %d: ",i+1);
		scanf("%s",ptr->depart_name);
		fscanf(p,"%s",ptr->depart_name);
		fprintf(p,"Department Name=%s",ptr->depart_name);
		
		
	}
	fclose(p);
	free(p);
	int max;
	int maximumsalaryofdepx;
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(*(ptr+i)->depart_name=='X')
			{
				if((ptr+i)->salary<(ptr+j)->salary)
				{
					max=(ptr+i)->salary;
					(ptr+i)->salary=(ptr+j)->salary;
					(ptr+i)->salary=max;
					
				}
				
			}
	
		}
	}
	void Delete(Employee *ptr);
}

void Delete(struct Employee *ptr)
{
	int del_id;
	printf("Enter Employee ID to delete information: ");
	if(del_id==ptr->Emp_id)
	{
		ptr->Emp_name==NULL;
		ptr->salary==NULL;
		ptr->depart_id==NULL;
		ptr->depart_name;
		
	}
}
