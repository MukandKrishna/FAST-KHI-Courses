#include<stdio.h>
int main ()
{
	char operator;
	int first , second;
	printf("enter an operator (*, -, +, /):");
	scanf("%c", &operator);
	printf("enter two operands: ");
	scanf("%d %d", &first, &second);
	
	switch (operator)
	{ case '+':
		printf("%d + %d = %d", first , second , first + second);
		break;
	  case'-' :
	   	printf("%d - %d = %d", first , second , first - second);
	   	break;
	  case'*' :
	  	printf("%d * %d = %d", first , second , first * second);
	   	break;
	  case'/' :
	  	printf("%d / %d = %d", first , second , first / second);
	   	break;
	  	
	  	//operator doesn't match any case constant
	  default:
	    printf("error! operator is not correct");	
	}
	  
	  return 0;
}
