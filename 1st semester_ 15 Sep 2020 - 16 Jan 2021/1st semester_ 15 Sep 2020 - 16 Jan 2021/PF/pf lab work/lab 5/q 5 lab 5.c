#include<stdio.h>
#include<conio.h>

int main(){
	int x , y ;
	printf("enter the starting number ");
	scanf("%d",&x);
	printf("enter the ending number ");
	scanf("%d",&y);
	
	for(int i = x ; i <= y ; i ++){
		if(i % 5 == 0 ){
			printf(" %d ", i);
			
		}
	}
	return 0 ;
}
