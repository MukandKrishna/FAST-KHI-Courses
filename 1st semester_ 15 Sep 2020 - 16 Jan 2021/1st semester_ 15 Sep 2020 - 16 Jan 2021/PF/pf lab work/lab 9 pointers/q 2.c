#include<stdio.h>
main()
{
	int n, i, a[10];
	int *p;
	
	printf(" Input the number of elements to store in the array : ");
   scanf("%d",&n);
   p= &a[0];  // pt stores the address of base array arr1 
   printf(" Input %d number of elements in the array : \n",n);
   for(i=0;i<n;i++)
      {
		printf(" element - %d : ",i+1);
		scanf("%d",p);//accept the address of the value
		p++;
	  }	
	
   p = &a[n - 1];

   printf("\n The elements of array in reverse order are :");

   for (i = n; i > 0; i--) 
   {
	printf("\n element-%d : %d  ",i,*p);
	p--;
   }
}
