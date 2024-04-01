#include <stdio.h>
#include <conio.h>
struct student
{
   char name[10];
   int age;
};
int main()
{
    struct student stud1[5], stud2[5];   
    FILE *fptr;
    int i;

    fptr = fopen("C:\\Users\\Mukand\\Desktop\\members.txt","wb");
    for(i = 0; i < 5; ++i)
    {
        fflush(stdin);
        printf("Enter name: ");
        gets(stud1[i].name);

        printf("Enter age: "); 
        scanf("%d", &stud1[i].age); 
    }

    fwrite(stud1, sizeof(stud1), 1, fptr);
    fclose(fptr);

    fptr = fopen("C:\\Users\\Mukand\\Desktop\\members.txt", "rb");
    fread(stud2, sizeof(stud2), 1, fptr);
    for(i = 0; i < 5; ++i)
    {
        printf("Name: %s\tage: %d\n", stud2[i].name, stud2[i].age);
    }
    fclose(fptr);
} 
