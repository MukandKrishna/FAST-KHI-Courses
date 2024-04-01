#include <stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    int no_lines = 0;
    char filename[40], sample_chr;
    
    printf("Enter file name: ");
    
    fgets(filename,sizeof(filename),stdin);
    
    fp = fopen("C:\\Users\\Mukand\\Desktop\\countlines.txt", "r");
    sample_chr = getc(fp);
    while (sample_chr != EOF) 
	{
        if (sample_chr =='\n')
        {    
            no_lines=no_lines+1;
        }
        sample_chr = getc(fp);
    }
    fclose(fp); 
    printf("There are %d lines in %s", no_lines, filename);
    return 0;
}

