#include <stdio.h>
struct employee
	{
	int number;
    char name[20];
    float salary;
    float average;
	}  
main()
{
	printf("size of employee : %d\n",sizeof(struct employee)); 
}
