#include<stdio.h>
#include<conio.h>
#include<time.h>

int main()
{
	int num , arr[10] , i ;
	srand(time(0));
	for( i = 0 ; i <= 9 ; i++)
	{
	 arr[i] = rand() % 10 ;
	}
	
	printf("Enter the number in the range of 10 ");
	
	for(i = 0 ; i < 10 ; i++)
	{
		scanf("%d",&num);
		if (arr[i] == num )
	 {
		printf("The number is %d and it is located at %d location",num,arr[i]);
		break;
	 }
	}
}
