#include<stdio.h>
int main(){
	int i , j , k ;
	for(i = 1 ; i <= 5 ; i ++){
	
		for(j = 1 ; j <= i ; j++)
			printf("\n %d",j);
			i = j ;
		}
		for(k = i ; k < 5 ; k++){
			printf(" * ");
		printf("\n");
	}
	return 0;
}
