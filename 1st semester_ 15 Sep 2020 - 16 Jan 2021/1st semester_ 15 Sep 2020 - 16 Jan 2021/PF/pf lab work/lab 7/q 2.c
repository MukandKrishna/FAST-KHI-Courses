#include<stdio.h>
#include<string.h>
int main()
{
	char string[20];
	int length, i;
	printf("Reversing A String\n\n");
	printf("input string u want to reverse: \n");
	gets(string );
	length = strlen(string);
	
	printf("reverse of string is: \n");
	
	for(i=0;i < length ;i++)
	{
        if(string[i] != string[length-i-1])
	{
        printf("%s is not a palindrome \n", string);
    }    
    else 
	{
        printf("%s is a palindrome \n", string);
    }
	}
}
