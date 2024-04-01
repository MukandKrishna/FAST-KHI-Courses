
#include <stdio.h>
 
/*structure declaration*/
struct employee
	{
	int number;
    char name[10];
    float salary;
    float average;
	} s[10];
 
int main()
{
	int i;
    printf("Enter information of employees\n");
    
    for(i=0;i<10;i++)
    {
    printf("\nFor employee number: ",s[i].number);
    scanf("%d",&s[i].number);
    printf("Enter Name: ");
	scanf("%s",s[i].name);
	printf("Salary of employee :");
	scanf("%f",&s[i].salary);
	}
	
	for(i=0;i<10;i++)
	{
		s[i].average = s[i].salary++/10;
	}
    
    printf("Displaying Information\n");
    for(i=0;i<10;i++)
    {
   	printf("\nemployee number: %d ",s[i].number);
    printf("\nName: ");
    puts(s[i].name);
    printf("Salary: %f\n",s[i].salary);
    printf("Average salary: %f\n",s[i].average);
	}
	
}
