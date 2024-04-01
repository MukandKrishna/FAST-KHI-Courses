#include<stdio.h>
#include<conio.h>
main()
{ 
	int i , temp[7] , max , x , min , y ;
	printf("Enter the temperature of entire week \n");
	
	for(i = 0 ; i <=6 ; i++)
	{
		scanf("%d",&temp[i]);
	}
	max = temp[0];
	min = max ;
	
	for(i = 0 ; i<=6 ; i++)
	{
		if(max < temp[i])
		{
			max = temp[i];
			x = i+1 ;
		}
		if(min > temp[i])
		{
			min = temp[i];
			y = i+1 ;
		}
    }
	printf("he has max temperature %d on %d day and min temperature at %d on %d day",max ,x,min,y);
}
