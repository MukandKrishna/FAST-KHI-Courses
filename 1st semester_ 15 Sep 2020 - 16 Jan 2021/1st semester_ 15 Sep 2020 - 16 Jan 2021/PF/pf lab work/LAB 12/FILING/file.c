/*#include <stdio.h>

struct student
{
   char name[50];
   int height;
};

int main()
{
    struct student stud1[5];   
    FILE *fptr;
    int i;

    fptr = fopen("vip.bin","wb");
    for(i = 0; i < 2; ++i)
    {
        fflush(stdin);
        printf("Enter name: ");
        gets(stud1[i].name);

        printf("Enter height: "); 
        scanf("%d", &stud1[i].height); 
    }

    fwrite(stud1, sizeof(stud1), 1, fptr);
    //stud1[0] //stud1[1] //stud1[2]
    fclose(fptr);
}*/

/*
#include <stdio.h>
struct student
{
   char name[50];
   int height;
};

int main()
{
struct student stud2[5];
FILE *fptr;
    fptr = fopen("vip.txt", "rb");
    fread(stud2, sizeof(stud2), 1, fptr);
    //stud2[0]
    //stud2[1]
    //..
    int i;
    for(i = 0; i < 5; ++i)
    {
        printf("Name: %s\nHeight: %d", stud2[i].name, stud2[i].height);
        printf("\n");
    }
    fclose(fptr);
}*/



/*

#include <stdio.h>

int main () 
{
   FILE *fp;

   fp = fopen("customer.txt","a+");
   fputs("My name is Ali", fp);
  
   fseek( fp, 5, SEEK_SET );
   
   //fp++;
   //fp--;
   //fseek seekcur
   
   fputs(" Aziz", fp);
   
   fclose(fp);
   
   return(0);
}*/

#include <stdio.h>

int main () 
{
   FILE *fp;
   int c;

   fp = fopen("customer.txt","r");
   while(1) 
   {
      c = fgetc(fp);
      if( feof(fp) ) 
	  {
         break;
      }
      printf("%c", c); 
   }
   fclose(fp);
   return(0);
}
