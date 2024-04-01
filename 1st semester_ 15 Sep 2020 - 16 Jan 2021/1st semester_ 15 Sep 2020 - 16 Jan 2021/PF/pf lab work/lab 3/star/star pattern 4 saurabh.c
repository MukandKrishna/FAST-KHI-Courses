#include<stdio.h>
main()
{
	int i , j ;
	for(i=0;i<=6 ;i++)
	{
		for(j=0;j<=6;j++)
		{
			if(j <= 6-i)
			printf("*");
			else
			printf(" ");
		}
			printf("\n");
	}
	
}
