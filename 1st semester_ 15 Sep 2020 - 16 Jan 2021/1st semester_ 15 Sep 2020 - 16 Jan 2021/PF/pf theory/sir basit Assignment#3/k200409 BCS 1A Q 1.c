#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

struct Article
{
    int Id;
    char Title[30];
    char Journal[30];
    char Author[30];
    int year;
    int startPage;
    int endPage;
};
Check_Author(struct Article *p)
{
  int i,c=0;
  for (i=0;i<100;i++)
  {
    if (strcmp((p+i)->Author,"Robert Tarjan")==0)
     {
        strcpy((p+i)->Author,"Robert Lafore");
        c++;
     }
     
   } 
   if (c==0)
   { 
      printf("NOT FOUND");
   }
}

void Article_Count(struct Article article[])
{
    bool a = true;
    int i;
    for ( i = 0; i < 100; i++)
    {
        if (((article[i].endPage) - (article[i].startPage)) >= 100 && article[i].year >= 2020)
        {
            printf("id = %d\n", article[i].Id);
            printf("Title = %s\n", article[i].Title);
            printf("Journal = %s\n", article[i].Journal);
            printf("Author = %s\n", article[i].Author);
            printf("Year = %d\n", article[i].year);
            printf("Total Pages = %d\n", (article[i].endPage) - (article[i].startPage));
            a = false;
        }
    }
    if (a)
    {
        printf("\nNo record found\n");
    }
}
void Journal_Information(struct Article article[])
{
    //bool a = true;
    int i;
    for (i = 0; i < 100; i++)
    {
        if (strcmp("JAlg", article[i].Journal) == 0)
        {
            //a = false;
            printf("id = %d\n", article[i].Id);
            printf("Title = %s\n", article[i].Title);
            printf("Journal = %s\n", article[i].Journal);
            printf("Author = %s\n", article[i].Author);
            printf("startPage = %d\n", article[i].startPage);
            printf("endpage = %d\n", article[i].endPage);
            printf("year = %d\n\n", article[i].year);
        }
    }
   // if (a)
    //{
      //  printf("\nNo record found\n");
   // }
}
void display(int i, struct Article article[])
{
    printf("\nThe details of journal %d\n", i + 1);
    printf("id = %d\n", article[i].Id);
    printf("Title = %s\n", article[i].Title);
    printf("Journal = %s\n", article[i].Journal);
    printf("Author = %s\n", article[i].Author);
    printf("startPage = %d\n", article[i].startPage);
    printf("endpage = %d\n", article[i].endPage);
    printf("year = %d\n\n", article[i].year);
    i = i + 1;
    if (i < 100)
        display(i, article);
}
int main()
{
    struct Article article[100];
    
    puts("enter titles\n");
    fflush(stdin);
	 gets(article[0].Title);
	 fflush(stdin);
	 gets(article[1].Title);
     fflush(stdin);
     gets(article[2].Title);
     fflush(stdin);
     article[0].Id = 1;
     article[2].Id = 3;
     article[1].Id = 2;
     article[0].startPage = 50;
     article[1].startPage = 54;
     article[2].startPage = 76;
     article[0].endPage = 191;
     article[1].endPage = 222;
     article[2].endPage = 199;
     article[0].year = 2033;
     article[2].year = 2020;
     article[1].year = 2021;

    Check_Author(article);
    Article_Count(article);
    Journal_Information(article);
    display(0, article);
    // Check_Author("second author", article);
    // display(0, article);
}
