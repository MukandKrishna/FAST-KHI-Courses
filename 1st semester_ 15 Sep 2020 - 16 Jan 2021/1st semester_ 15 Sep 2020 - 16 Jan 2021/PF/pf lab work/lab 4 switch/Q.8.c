#include<conio.h>
#include<stdio.h>
int main()
{
	int agem , ages ;
	printf("enter your age");
	scanf("%d", &agem);
	printf("enter your sister\'s age");
	scanf("%d", &ages);
	
	if (agem > ages)
	{
		printf("you are older of the two");
	}
	else 
	{
		printf("your sister is older of the two");
	}
	return 0 ;

}
