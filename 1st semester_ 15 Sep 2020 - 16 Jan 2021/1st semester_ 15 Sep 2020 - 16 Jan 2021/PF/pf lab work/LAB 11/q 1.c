#include <stdio.h>
#include <stdlib.h>
 
struct Employee
{
    char name[30][30];
    int id;
    int salary;
    char Address[30][30];
    int age;
    char designation[30][30];
};

int main()
{
	int i, n=10;
 
    struct Employee employees[n];
    
    printf("Enter Employee Details \n \n",n);
	
for(i=0; i<n; i++)
{
        printf("Employee %d: \n",i+1);
     
        printf("Name: ");
        scanf("%s",employees[i].name);
    
        printf("Id: ");
        scanf("%d",&employees[i].id);
    
        printf("Salary: ");
        scanf("%d",&employees[i].salary);
		
		printf("Address: ");
        scanf("%s",&employees[i].Address);
		
		printf("Age: ");
        scanf("%d",&employees[i].age);
        
        printf("designation: ");
        scanf("%s",employees[i].designation);
}
 
//Displaying Employee details
 
printf("Employees Details\n\n");
 
for(i=0; i<n; i++)
{	
	printf("Name: ");
    printf("%s \n",employees[i].name[i]);
 
    printf("Id : ");
    printf("%d \n",employees[i].id);
 
    printf("Salary : ");
    printf("%d \n",employees[i].salary);
       
	printf("Address: ");
	printf("%s\n",&employees[i].Address[i]);
	    
    printf("Age: ");
    printf("%d \n",&employees[i].age);
        
	printf("designation: ");
	printf("%s\n",employees[i].designation[i]);

}
    return 0;
}
