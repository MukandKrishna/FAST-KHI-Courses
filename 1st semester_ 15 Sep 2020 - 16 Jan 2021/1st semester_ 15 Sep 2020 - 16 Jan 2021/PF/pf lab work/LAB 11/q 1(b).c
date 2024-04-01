#include<stdio.h>
#include<conio.h>
main()
{
	int i,a=4;
	float b=45;
	char c[10][10];
	
	void *ptr;
	
	ptr=&c;
	printf("enter the element in c\n");
	for(i=0;i<1;i++)
	{
		scanf("%s",&c[i]);
	}
	for(i=0;i<1;i++)
	{
		printf("the name of c : %s\n",((char*)ptr));
	}
	
	ptr=&b;
	printf("the value of b is %f\n",*((float*)ptr));
	printf("the value of b is %f\n",((float*)ptr));
	ptr=&a;
	printf("the value of a is %d\n",*((int*)ptr));
	printf("the value of a is %d\n",((int*)ptr));
}


