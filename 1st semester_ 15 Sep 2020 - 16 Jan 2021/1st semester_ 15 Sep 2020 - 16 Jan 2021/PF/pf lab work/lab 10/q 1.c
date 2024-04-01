#include <stdio.h>
struct student
{
    char Name[50];
    int rollNo;
    float totalmarks;
    float test1,test2,test3;
} s[10];

int main() 
{
    int i;
    printf("Enter information of students:\n");

    // storing information
    for (i = 0; i < 2; i++)
	{
        printf("For roll number: ", s[i].rollNo);
        scanf("%d",&s[i].rollNo);
        printf("Enter Name: ");
        scanf("%s", s[i].Name);
        
        printf("\nEnter marks of test 1 ,test 2 and test 3 : ");
    	scanf("%f %f %f", &s[i].test1,&s[i].test2,&s[i].test3);
        
		s[i].totalmarks = s[i].test1 + s[i].test2 + s[i].test3;
	
	}
    printf("Displaying Information:\n\n");

    // displaying information
    for (i = 0; i < 2; i++)
	{
        printf("\nRoll number: %d\n",s[i].rollNo);
        printf("Name: ");
        puts(s[i].Name);
        printf("Total sessional Marks: %f\n", s[i].totalmarks);
    }
}
