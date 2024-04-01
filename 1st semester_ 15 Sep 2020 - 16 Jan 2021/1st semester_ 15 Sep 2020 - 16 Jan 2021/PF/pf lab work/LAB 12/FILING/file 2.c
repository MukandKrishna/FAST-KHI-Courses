/*#include<stdio.h>
main()
{
	int i;
	char s[100];
	FILE *fp;
	fp=fopen("word.txt","w");
	printf("enter sentence\n");
	for(i=1;i<10;i++)
	{
		fgets(s,sizeof(s),stdin);
		fprintf(fp,"%s",s);
	}	
	fclose(fp);
	return 0;
}

*/
#include<stdio.h>
main()
{
	int i;
	char s[100];
	FILE *fp;
	fp=fopen("word.txt","r");
	printf("sentences are: \n");
/* this is not working in this c.file but this is correct as it is working on other file	*/
	for(i=1;i<10;i++)
	{
		fscanf(fp,"%s",s);
		printf("%s\n",s);
	}		
		fclose(fp);
		return 0;
}
/*
#include <stdio.h>
#include <stdlib.h>
main() 
{ 
    FILE *fptr; 
    char ch; 
    int wrd=1,charctr=1;
	
    fptr=fopen("word.txt","r");  
          ch=fgetc(fptr); 
          printf(" The content of the file  are : \n"); 
          while(ch!=EOF) 
            {
                printf("%c",ch); 
                if(ch==' '||ch=='\n')
                    { 
                        wrd++; 
                    }
                    else
                    {
                        charctr++; 
                    }
                ch=fgetc(fptr); 
            }
        printf("\n The number of words in the  file  are : %d\n",wrd-2); 
        printf(" The number of characters in the  file  are : %d\n",charctr-1);         
         
    fclose(fptr); 
}*/
