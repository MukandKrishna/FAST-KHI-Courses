#include<stdio.h>
int main(){
	int num, i=0, odd = 101;
	printf("Enter the any One Number : \n ");
	scanf("%d",&num);
	while(i < num){
	printf("%d\n",odd);
	odd = odd + 2;
	i++;
	}
}
