#include<stdio.h>
int main ()
{
    char ch;
printf("enter one char");
scanf("%c",&ch);

if(ch>=48 && ch<=57)
{
	printf("its a digit ");
}
else if (ch>=65 && ch<=90 || ch>=97 && ch <=122)
{ 
   printf("its a letter ");
}
else 
{
	printf("its a special");
}

{
	printf("%c\n",ch);
}

}

