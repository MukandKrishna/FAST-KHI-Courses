#include<stdio.h>
int main()
{
	int a[10],*p,i,min;
    p=&a[0];
    printf("enter 5 elements: \n");
	for(i=0;i<5;i++,p++)
    {
		scanf("%d",p);
	}
    	
    p=&a[0];
    min=*p;
    for(i=0;i<5;i++,p++)
    {
    	if(*p<min)
    	{
    		min=*p;
		}
	}
      printf("\nSmallest Element : %d",min);
}

