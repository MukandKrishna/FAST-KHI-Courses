#include<stdio.h>
main()
{
	int a[8] , i, positive=0,negative=0,sum=0,zero=0;
	
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
		}
	}
        printf("number of positive numbers are %d \n",positive);
        sum=sum+a[i];
        printf("sum of positives is %d \n",sum);
        
    for(i=0;i<=7;i++)
    {
    	if(a[i]<0)
    	{
    		negative=negative+1;
		}
	}
	    printf("number are negative numbers are %d \n",negative);
	    
	for(i=0;i<=7;i++)
	{
		if(a[i]==0)
		{
			zero=zero+1;
		}
	}
	printf("number of zeros are %d \n",zero);	
}
