#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
typedef struct rec //typedef name to rec
{
    int id, issue, year, sp, ep;
    char title[36], journal[15], author[30];
} rec;
void Check_Author();        //cheking author name "Robert Tarjan"
void Article_Count();       // printing all data of artical having more than 49 pgs or published after1999
void Journal_Information(); //printing information of journal "JAIg"
void display();             //displaing all datas
int main()
{
    int n, i;
    printf("how many records do you want to add? : ");
    scanf("%d", &n);
    rec A;
    FILE *ptr;
    ptr = fopen("Journals record.txt", "a");

    for (i = 0; i < n; i++)
   {
        printf("\nENTER THE RECORD NO# : %d\n", i + 1);
        printf("enter the ID : ");
        fflush(stdin);
        scanf("%d", &A.id);
        printf("enter the title : ");
        fflush(stdin);
        gets(A.title);
        printf("enter the journal : ");
        fflush(stdin);
        gets(A.journal);
        printf("enter the issue : ");
        fflush(stdin);
        scanf("%d", &A.issue);
        printf("enter the year : ");
        fflush(stdin);
        scanf("%d", &A.year);
        printf("enter the start page : ");
        fflush(stdin);
        scanf("%d", &A.sp);
        printf("enter the end page : ");
        fflush(stdin);
        scanf("%d", &A.ep);
        printf("enter the arthor name : ");
        fflush(stdin);
        gets(A.author);
        fprintf(ptr,"%-10d %-20s %-5d %-15s  %-4d  %-3d %-3d %-25s\n", A.id , A.title,A.issue , A.journal , A.year , A.sp , A.ep, A.author);
    }
    fclose(ptr);
    //system("cls");
    printf("\n\n\n***searches the data for all the articles authored by Robert Tarjan and updating their name***\n");
   //Check_Author(); //sending address of A and number of recordes
    printf("\n\n\n***Displays all the records for which the totals pages are 50 or above and year 2000 or above***\n");
  //  Article_Count(); //sending address of A and number of recordes
    printf("\n\n\n***displaying all the information of journals JAIg***\n");
   Journal_Information(); //sending address of A and number of recordes
    printf("\n\n\n***printing all the information of each journal stored in a structure array***\n");
   // display(); //sending address of A and number of recordes
    return 0;
}
/*Write a function named Check_Author(...)ù. This function searches the data for all the articles
authored by Robert Tarjanù and changes the author to Robert Laforeù. If no such articles exist
the function must display Not Foundù.*/
void Check_Author()
{
    FILE *ifp, *ofp; 
    char word[]="Robert Tarjan", ch, read[100], replace[]="Robert Lafore"; 
    int word_len, i, p = 0; 
  
    ifp = fopen("Journals record.txt", "r"); 
    ofp = fopen("file_replace_output.txt", "w+"); 
    if (ifp == NULL || ofp == NULL) { 
        printf("Can't open file."); 
        exit(0); 
    } 
    puts("THE CONTENTS OF THE FILE ARE SHOWN BELOW :\n"); 
  
    // displaying file contents 
    while (1) { 
        ch = fgetc(ifp); 
        if (ch == EOF) 
		{ 
            break; 
        } 
        printf("%c", ch); 
    } 
  
   
  //  fprintf(ofp, "%s - %s\n", word, replace); 
  
    // comparing word with file 
    rewind(ifp); 
    //int i=0;
    while (!feof(ifp)) 
	{ 
  
    fscanf(ifp, "%s", read); i++;
  
    if (strcmp(read, word) == 0) 
	{ 
        // for deleting the word 
        strcpy(read, replace); 
    } 
        fprintf(ofp, "%s ", read); 
        if(i==8)
       { // In last loop it runs twice 
        
        fprintf(ofp,"\n");
        i=0;
       }
    } 
  
    // Printing the content of the Output file 
  /*  rewind(ofp); 
    while (1) { 
        ch = fgetc(ofp); 
        if (ch == EOF) { 
            break; 
        } 
        printf("%c", ch); 
    } */
  
    fclose(ifp); 
    fclose(ofp); 
    remove("Journals record.txt");
    rename("file_replace_output.txt","record.txt");
}
/*Write a function named Article_Count(...)ù. This function displays all the records for which the
totals pages are 50 or above and year 2000 or above.*/
void Article_Count()
{
    rec A;
	FILE *ptr;
    int id, issue, year, sp, ep;
    char title[36], journal[15], author[30];

    ptr = fopen("Journals record.txt", "r");
    if (ptr == NULL)
    {
        ptr = fopen("Journals record.txt", "w");
        printf(" error in opening \n new file is just created \n");
        exit(1);
    }
    while (fscanf(ptr,"%d %s", id,title)!=EOF)
    {
        if ((A.ep - A.sp >= 50) || (A.year >= 2000)) //if any record have released after 1999
        {                                                                          // or have more than 49 pg then print
            printf("%-10d %-20s %-15s %-5d %-4d %-3d %-3d %-25s\n", A.id , A.title , A.journal , A.issue, A.year , A.sp , A.ep, A.author);
        }
    }
    fclose(ptr);
}
/*Write a function named Journal_Information(...). This function will display all the information of
journals JAIgù.*/
void Journal_Information()
{
        FILE *fp;
        char line[200],search_string[]="JAIg";
        fp=fopen("record.txt","r");
        if(!fp)
        {
            perror("could not find the file");

            exit(0);
        }

        while ( fgets ( line, 200, fp ) != NULL ) /* read a line */
        {
            if(strstr(line,search_string))
            fputs ( line, stdout ); /* write the line */
        }
        fclose ( fp );
}
/*Write a recursive function named ‚Äúdisplay(...)‚Äù that will print all the information of each journal
stored in a structure array.*/
void display()
{
    FILE *ptr;
    ptr = fopen("Journals record.txt", "r");
    if(ptr==NULL)
    {
        printf("error");
        exit (1);
    }
    char c=getc(ptr);
    while(c != EOF)
    {
        printf("%c",c);
        c=getc(ptr);
    }
}
