#include<stdio.h>
#include<math.h>
void func(int a , int b , int c , int d , int e , int *sum , float *avg , float *std )
{
	*sum = a+b+c+d+e;
	*avg = *sum / 5;
	*std = sqrt((((a-*avg)*(a-*avg)) + ((b-*avg)*(b-*avg)) + ((c-*avg)*(c-*avg))+ ((d-*avg)*(d-*avg))+ ((e-*avg)*(e-*avg))) / 5);
}
main()
{
	int a , b , c , d , e , sum;
	float std , avg;
	printf("enter 5 numbers\n",a,b,c,d,e);
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	func(a,b,c,d,e,&sum,&avg,&std);
	printf("the sum is %d \n the average is %f \n the standard deviation is %f",sum,avg,std);
	return 0;
}
