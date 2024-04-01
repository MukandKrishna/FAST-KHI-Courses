#include<stdio.h>
#include<stdlib.h>
struct student {
	
	int test1 , test2 , test3  ;
	char name[100] , r_num[100] ;
	
};

int main()
{
	int i ;
	struct student stds[2];
	struct student *ptr = &stds[0];

	for(i = 0 ; i < 2 ; i++){
		printf("enter the name of the %d student  :  " , i + 1 );
		scanf(" %[^\n]s" , &ptr->name);
		printf("Enter the roll number of the student  : ");
		scanf(" %[^\n]s",&ptr->r_num);
		printf("Enter the marks of test1  :  ");
		scanf("%d",&ptr->test1);
		printf("Enter the marks of test2  :  ");
		scanf("%d",&ptr->test2);
		printf("Enter the marks of test3  :  ");
		scanf("%d",&ptr->test3);
		ptr ++ ;
	}  
	
	ptr = &stds[0];
	for(i = 0 ; i < 2 ; i++){
		
		ptr->test1 = ptr->test1 + 3 ;
		ptr->test2 = ptr->test2 + 10 ;
		ptr->test3 = ptr->test3 + 8 ;
		ptr++ ;
	}
	ptr = &stds[0];
	for(i = 0 ; i < 2 ; i++){
		printf("\nName : %s \n Roll Number : %s \n Marks in Test1 : %d \n Marks in Test2 : %d \n Marks in Test3 : %d \n\n",ptr->name , ptr->r_num , ptr->test1 , ptr->test2 ,ptr->test3);
		ptr++ ;
		
	}
	
	return 0 ;
}
