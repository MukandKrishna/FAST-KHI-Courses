#include <stdio.h>
main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=8;j++)
		{
		if(j>=5-i&&j<=3+i)
		printf("*");
		else
		printf(" "); 
		}
		printf("\n");
	}
		
}
