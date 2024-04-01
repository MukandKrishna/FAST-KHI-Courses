#include<conio.h>
#include<stdio.h>
int main(){
	char c;
    int count = 0 , k = 1;
	
	do{
		printf("Enter a character other than z or Z ");
			scanf(" %c",&c);
		if(c!= 'z' && c!= 'Z'){
		   count ++;
		}else 
		k = 0 ; 
	}while(k);
	printf("the total characters entered %d",count);
	return 0 ;
	
}
