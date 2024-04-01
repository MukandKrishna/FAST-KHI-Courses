#include <stdio.h>
#include <stdlib.h>

int main()
 {
    char sentence[100];
	FILE *fptr;
   fptr = fopen("C:\\Users\\Mukand\\Desktop\\sentence.txt", "w");

    // exiting program 
    if (fptr == NULL)
	{
        printf("Error!");
        exit(1);
    }
    printf("Enter a sentence:\n");
    fgets(sentence, sizeof(sentence), stdin);
    fprintf(fptr, "%s", sentence);
    fclose(fptr);
    return 0;
}
