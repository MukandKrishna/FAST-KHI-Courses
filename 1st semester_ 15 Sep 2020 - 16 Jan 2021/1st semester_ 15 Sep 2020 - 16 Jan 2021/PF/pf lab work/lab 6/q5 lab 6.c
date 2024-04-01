#include<stdio.h>
#include<conio.h>

int main()
{
	int i , j , tmp , salary[6] = {50 , 70 , 55 , 66 , 67 , 72 }, ascending[6] , sum =0;
	float avg;
	
	for( i = 0 ; i <= 5 ; i++)
	{
		sum = sum + salary[i];
	}
	printf("Sum of Salary of six months :%dk \n",sum);
	
	avg = sum / 6;
	printf("the avarage of salary of six months : %fk \n",avg);
	
	for(i=0; i<=5; i++)
	{
		for(j=i+1;j<=5;j++)
		{
			if(salary[j] > salary[i])
			{
				tmp = salary[i];
				salary[i] = salary[j];
				salary[j] = tmp;
			}
		}
	}
	printf("the amount of salary in ascending order is %d\n");
}
