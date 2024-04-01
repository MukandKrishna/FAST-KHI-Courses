#include<stdio.h>
#include<string.h>
int main()
{
	char string[60];
	int leng, i;
	printf("Reversing A String\n\n");
	printf("input string u want to reverse: \n");
	gets(string );
	leng = strlen(string);
	
	printf("reverse of string is: \n");
	for(i = leng - 1 ; i>= 0 ; i--)
	{
		printf("%c",string[i]);
	}
	return 0;
}
