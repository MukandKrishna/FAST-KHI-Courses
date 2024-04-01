#include<stdio.h>
main()
{
	int a;
	char b='d';
	float c;
	
	void *p;
	
	p=&a;
	printf("enter integer: \n",a);
	scanf("%d",&a);
	printf("the value of integer variable is = %d\n",*(int*)p);
	
	p=&b;
	printf("the value of character variable is = %c\n",*(char*)p);
	
	p=&c;
	printf("enter float: \n",c);
	scanf("%f",&c);
	printf("the value of float variable is = %f\n",*(float*)p);
}
