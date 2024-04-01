#include<stdio.h>
main()
{
	int a[10][10], b[10][10], c[10][10] , i , j , k , sum;
	printf("enter 4 numbers for first matrix");  
	for(i=0;i<2;i++)
		for(j=0;j<2;j++)
			scanf("%d",&a[i][j]);
	
	printf("enter 4 numbers for second matrix");
	for(i=0;i<2;i++)
		for(j=0;j<2;j++)
			scanf("%d",&b[i][j]);
	for(i=0;i<2;i++)
	
		for(j=0;j<2;j++)
		{
			sum=0;
			for(k=0;k<2;k++)
				sum=sum+a[i][j]+b[i][j];
			c[i][j]	= sum;
		}
	  for(i=0;i<2;i++)
	  {
	  	for(j=0;j<2;j++)
			printf("%d  ",c[i][j]);
			printf("\n");
	  }	  
}
