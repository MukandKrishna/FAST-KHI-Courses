#include<conio.h>
#include<stdio.h>
int main()
{
	float bmi , height , weight ;
	printf("enter a weight of the person");
	scanf("f", &weight);
	printf("enter a height of the person");
	scanf("f", &height);
	
	bmi = (weight* 703) / (height*height) ;
	
	if (bmi < 15.0)
	{
		printf("Starvation : less than 15") ;
	}
	else if (bmi>18.5)
	{
		printf("under weight : less than 18.5");
	}
	else if (bmi > 18.5 && bmi< 25)
	{
		printf("ideal : greater than or equal to 18.5 but less than 25");
	}
	else if (bmi >=25 && bmi< 30 )
	{
		printf(" over weight : greater than or equal to 25 but less than 30");
	}
	else
	{
		printf("mordibly obese : greater than or equal to 40");
	}
	return 0;
}
