#include<stdio.h>
#include<stdlib.h>

int main()
{	
	int a ;
	float b ;
	char c ;
	void *ptr ;
	
	printf(" Enetr the values of integer float and a character respectively  :  ");
	scanf("%d %f %c", &a , &b , &c);
	
	ptr = &a;
	printf("\n The integer value in %d and its addreess is %u ", *(int*)ptr , (int*)ptr);
	
	ptr = &b;
	printf("\n The float value in %.3f and its addreess is %u ", *(float*)ptr , (float*)ptr);
	
	ptr = &c;
	printf("\n The character value in %c and its addreess is %u ", *(char*)ptr , (char*)ptr);
	
	return 0 ;
}
