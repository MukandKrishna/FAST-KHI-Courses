#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	char i , arr[1000] , ch ; int x = 0;
	printf("enter a string : ");
	gets(arr);
	printf("enter a character to find the frequency : ");
	scanf(" %c",&ch);
	
	for( i = 0 ; i < strlen(arr) ; i++ )
	{
		if (arr[i] == ch)
		{
			x ++;
		}	
	}
	printf("frequency of a = %d",x);
	return 0 ;

}
