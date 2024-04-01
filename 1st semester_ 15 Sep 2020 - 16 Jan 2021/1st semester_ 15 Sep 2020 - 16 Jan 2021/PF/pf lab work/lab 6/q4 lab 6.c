#include<stdio.h>
main()
{
	int a[8];
	int i=0,x=0;
	int positive=0,negative=0,sum=0,zero=0;
	
	for(i=0;i<=7;i++)
	{
		printf("enter 8 numbers ");
	scanf("%d",&a[i]);
	}
	for(i=0;i<=7;i++)
    {
    	if(a[i]>0)
    	{
    		positive=positive+1;
			sum=sum+a[i];
		}
			
	}
	 printf("%d",sum);
        printf("number of positive numbers are %d \n",positive);
    for(i=0;i<=7;i++)
    {
    	if(a[i]<0)
    	{
    	negative=negative+1;
		}
		else
		zero=zero+1;
}
  printf("number are negative numbers are %d \n",negative);
		printf("number of zeros are %d \n",zero);	 
}
