#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
struct date
{
 int day;
 int month;
 int year;
};
main()
{
 struct date s[2];
 int i;

 for (i=0;i<2;i++)
 {
  printf ("\nEnter day : ");
  scanf ("%d",&s[i].day);
  printf ("Enter month : ");
  scanf ("%d",&s[i].month);
  printf ("Enter year : ");
  scanf ("%d",&s[i].year);
 }
if( (s[0].day == s[1].day) && (s[0].month == s[1].month) && (s[0].year == s[1].year) )
	printf ("\ndates are Equal\n");
else	
	printf ("dates are Unequal\n");
	
	
}
