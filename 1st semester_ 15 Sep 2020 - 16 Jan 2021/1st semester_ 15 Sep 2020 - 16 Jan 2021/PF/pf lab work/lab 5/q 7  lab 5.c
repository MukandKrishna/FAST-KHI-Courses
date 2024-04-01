#include<stdio.h>
int main(){
	int x , y , ans = 1;
	printf("Enter a base number ");
	scanf("%d",&x);
	printf("Enter an exponent ");
	scanf("%d",&y);
	
	for(i = 0 ; i < y ; i++){
		ans = ans * x ;
	}
	printf("Answer = %d",ans);
	return 0 ;
}
