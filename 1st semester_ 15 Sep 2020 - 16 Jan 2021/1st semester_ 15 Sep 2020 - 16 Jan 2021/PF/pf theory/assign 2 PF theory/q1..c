#include<stdio.h>
main()
{
	int i , j , n;
	
	for(i=0;i<8;i++)
	{
		for(j=0;j<8;j++)
		{
			if(j>=i)
			{
				printf("*");
			}
			else
			{
				printf("_");
			}
		}
			printf("\n");
	}
		printf("the number of lines are = 7\n", n);
		scanf("%d",&n);	
}
