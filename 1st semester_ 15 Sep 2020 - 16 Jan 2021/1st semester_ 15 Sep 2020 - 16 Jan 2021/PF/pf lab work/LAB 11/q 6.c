#include <stdio.h>
#include <stdlib.h>
main()
{
	int n;
	char *p;
	printf("enter the size of string\n");
	scanf("%d",&n);
	
	p=(char*)malloc(n*sizeof(char));
	printf("\nenter the string\n");
	
	fflush(stdin); //clear (or flush) the output buffer 
					//and moved the buffered data to console
	gets(p);
	printf("\nentered string :  %s\n",p);
	free(p);
	return 0;
}
