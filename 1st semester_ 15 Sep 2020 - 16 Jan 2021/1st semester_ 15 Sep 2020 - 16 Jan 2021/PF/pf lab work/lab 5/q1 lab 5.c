#include<stdio.h>
int main(){
	int num,sum=0;
	while(1){
		
		printf("ENTER THE NUMBER BETWEEN (200 , 400) : \n");
	scanf(" %d ",&num);
	if(num<=200 || num>=400)
    	{
	break;
     	}
     	sum = sum + num;
	}
	printf("SUM OF TOTAL NUMBERS WHICH YOU ENTERED %d", sum);
}
