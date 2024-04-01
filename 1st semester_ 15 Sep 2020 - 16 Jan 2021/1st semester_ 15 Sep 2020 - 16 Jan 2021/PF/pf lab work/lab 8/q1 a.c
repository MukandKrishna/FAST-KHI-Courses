#include<stdio.h>
int fact(int n)
{
	 if(n>0)
	 {
	 	return (n*fact(n-1));
	 }
	 else
	 {
	 	return (1);
	 }
}
main()
{
	int n ;
	printf("enter number \n");
	scanf("%d",&n);
	int fact(int n);
	fact(n);
	printf("factorial of %d is %d",n , fact(n));
}
