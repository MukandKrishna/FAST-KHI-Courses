#include<stdio.h>
#include<stdlib.h>

struct student
{
	int age , roll_n ;
	char name[100]  , address[100];
};

void n_std (struct student *ptr){
	int i ;
	
	printf("\n\nStudents whose age is 14 ");
	
	for( i = 0 ; i < 10 ; i ++){
		
	if(ptr->age  == 14 ){ 
	
		printf("Name  : %s \n Roll number  : %d \n Age  : %d \n ",ptr->name , ptr->roll_n , ptr->age);
		
	}
	ptr++ ;
	}
}

void even_r (struct student *ptr){
	int i ;
	
	printf("\nName of the student whose roll number is even \n");
	for( i = 0 ; i < 10 ; i++){
		
	if( ptr->roll_n % 2 == 0 ){
		
		printf("Name  : %s \n" ,ptr->name);
	}
	ptr++ ;
	}
}

void detail (struct student *ptr){
	
	int roll  , i , opt ;
	
	for( i = 0 ; i < 10 ; i++){
	printf("Enter the roll number to search the student ");
	scanf("%d",&roll);
	
	if(ptr->roll_n == roll){
		
		printf("Name  : %s \n Roll number  : %d \n Age  : %d \n Address  : %s \n " , ptr->name , ptr->roll_n , ptr->age ,ptr->address);
		
	}
	ptr++ ;
	printf("\n Do you want to search another one \n 1. YES\t 2. NO ");
	scanf("%d",&opt);
	if(opt == 1 ){
		continue ;
	}
	else{
		break ;
	}
	}
}

int main()
{
	int i ;
	struct student std[10] ;
	struct student *ptr = &std[0];
	
	for(i = 0 ; i < 10 ; i++){
	
	printf("Enter the name of the student ");
	scanf(" %[^\n]s",&ptr->name);
	printf("Enter the roll number of the student ");
	scanf("%d",&ptr->roll_n);
	printf("Enter the address of the student ");
	scanf(" %[^\n]s",&ptr->address);
	printf("Enter the age of the student  : ");
	scanf("%d",&ptr->age);
	
	ptr++ ;
	}
	
	n_std(&std[0]);
	even_r(&std[0]);
	detail(&std[0]);
	
	return 0 ;
}
