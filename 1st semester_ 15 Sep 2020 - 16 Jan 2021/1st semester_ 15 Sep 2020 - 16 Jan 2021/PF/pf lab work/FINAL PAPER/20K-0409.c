#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int i;
char read[100];
FILE *fptr;

void func()
{
	char dep;
	int sal_max, sal;
	sal_max=sal=0;
	
	fptr = fopen("20k-0409.txt", "r+");
	
	if(fptr == NULL){
		printf("File does not exist!");
		exit(1);
	}
	
	//finding max salary in department X/
	while(fptr != NULL){
		fseek(fptr, 3, SEEK_CUR);
		fscanf(fptr, "%[^\0]", &dep);
		fseek(fptr, 3, SEEK_CUR);
		
		if(dep == 'X'){
	        fseek(fptr, 3, SEEK_CUR);
	        fscanf(fptr, "%[^\n]", &sal);
	        if(sal>sal_max){
		        sal_max=sal;
	        }
	    }
	}
	
	while(fptr != NULL){
		fseek(fptr, 3, SEEK_CUR);
		fscanf(fptr, "%[^\0]", &dep);
		fseek(fptr, 3, SEEK_CUR);
		
		if(dep == 'Y'){
	        fseek(fptr, 3, SEEK_CUR);
	        fscanf(fptr, "%[^\n]", &sal);
	        if(sal>sal_max){
		        fscanf(fptr, "%[^\n]", &read);
		        puts(read);
	        }
	    }
	}
	fclose(fptr);
}

void Replace(){
	char name[100];
	char m = '-';
	fptr = fopen("20k-0409.txt", "r+");
	
	if(fptr == NULL){
		printf("File does not exist!");
		exit(1);
	}
	
	while(fptr != NULL){
		fseek(fptr, 2, SEEK_CUR);
		fscanf(fptr, "%[^ ]", &name);
		fprintf(fptr, "%c", m);
	}
	
	fclose(fptr);
}

void print(){
	int age;
	char depart;
	fptr = fopen("20k-0409.txt", "r");
	
	if(fptr == NULL){
		printf("File does not exist!");
		exit(1);
	}
	
	while(fptr != NULL){
		fseek(fptr, 4, SEEK_CUR);
	    fscanf(fptr, "%[^\n]", &age);
	
	    fseek(fptr, 6, SEEK_CUR);
	    fscanf(fptr, "%[^\0]", &depart);
		
		if(age > 30 && depart == 'X'){
			fseek(fptr, 1, SEEK_CUR);
			fscanf(fptr, "%[^/n]", read);
			puts(read);
		}	
	}
	fclose(fptr);
}

void Delete(){
	int id, empid;
	char str[100];
	
	printf("Enter id to delete record: ");
	scanf("%d", &id);
	
	fptr = fopen("20k-0409.txt", "r");
	
	if(fptr == NULL){
		printf("File does not exist!");
		exit(1);
	}
	
	fscanf(fptr, "%[^\n]", &empid);
	if(empid==id){
		fseek(fptr, 1, SEEK_CUR);
		fscanf(fptr, "%[^\n]", &str);
		puts(str);
	}
	
	fseek(fptr, 1, SEEK_CUR);
	
	fclose(fptr);
}

void main()
{	
struct department
{
	int depart_id;
	char depart_name[100];
};
	struct Employee{
		int Emp_id;
		char Emp_name[100];
		int salary;
		int age;
		struct department dep;
	}emp;
	
	struct Employee *ptr;
	ptr = &emp;
	
	fptr = fopen("20k-0409.txt", "w");
	
	if(fptr == NULL){
		printf("File does not exist!");
		exit(1);
	}
	
	for(i=0; i<5; i++){
		printf("Enter employee ID: ");
		scanf("%d", &emp.Emp_id);
		fprintf(fptr, "%d\n", &emp.Emp_id);
		fflush(stdin);
		
		printf("Enter employee name: ");
		gets(emp.Emp_name);
		fprintf(fptr ,"%s\n", &emp.Emp_name);
		
		printf("Enter salary: ");
		scanf("%d",&emp.salary);
		fprintf(fptr ,"%d\n",&emp.salary);
		
		printf("Enter age: ");
		scanf("%d",&emp.age);
		fprintf(fptr ,"%d\n", &emp.age);
		
		printf("Enter department id: ");
		scanf("%d",&emp.dep.depart_id);
		fprintf(fptr,"%d\n", &emp.dep.depart_id);
		fflush(stdin);
		
		printf("Enter department name: ");
		gets(emp.dep.depart_name);
		fprintf(fptr ,"%s\n", &emp.dep.depart_name);
		printf("\n");
	}
	
	fclose(fptr);
	
	fptr= fopen("20k-0409.txt", "r");
	
	if(fptr == NULL){
		printf("File does not exist!");
		exit(1);
	}
	
	fscanf(fptr, "%[^\0]", &read);
	puts(read);
	fclose(fptr);
	
	void func();
	void Replace();
	void Delete();
}
