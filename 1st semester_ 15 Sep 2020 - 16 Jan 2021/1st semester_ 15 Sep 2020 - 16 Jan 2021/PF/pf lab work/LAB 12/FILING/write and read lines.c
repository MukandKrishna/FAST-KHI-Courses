#include <stdio.h>
int main ()
{
  	FILE *fptr;
  	int i,n;
  	char str[100],str1;
	char fname[20]= "vip.txt";
	
	/*printf(" Input the number of lines to be written : ");
	scanf("%d",&n);
	
	printf("\n The lines are :\n");
	fptr = fopen (fname,"r"); 
	for(i = 1; i <=n;i++)
	{
		fgets(str, sizeof str, stdin);
		fputs(str, fptr);
	}
  		fclose (fptr);
  		return 0;*/
  		
  		
  	fptr = fopen (fname, "r");  
	printf("\n The content of the file %s is  :\n",fname);
	str1 = fgetc(fptr);
	while (str1 != EOF)
		{
			printf ("%c", str1);
			str1 = fgetc(fptr);
		}    fclose (fptr); return 0;
}
