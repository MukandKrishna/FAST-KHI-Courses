#include<conio.h>
int main(){
	int i;
	for (i = 100 ; i > 0 ; i--)
	{
		printf("var : %d \n",i);
		if(i == 88){
			printf("out of the loop");
			break ;
		}
	}
	return 0;
}
