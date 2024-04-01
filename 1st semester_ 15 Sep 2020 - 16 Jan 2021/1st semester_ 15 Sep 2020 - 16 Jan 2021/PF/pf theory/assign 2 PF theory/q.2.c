#include<stdio.h>
main()
{
	int size, i, a[9];
 int even_sum = 0, odd_sum = 0;
 
 printf(" Enter the Size of an Array : \n");
 scanf("%d", &size);
 
 printf(" Enter the elements in the array\n");
 
 for(i = 0; i < size; i++)      ///  entering the nine numbers
 {
      scanf("%d", &a[i]);
 }
  
 for(i = 0; i < size; i ++)
 {
   if(a[i] % 2 == 0)
   {
 	even_sum = even_sum + a[i];  /// getting the even sums
   }
   else
   {
 	odd_sum = odd_sum + a[i];  /// getting the odd sums
   }
 }
  	printf("\n The sum of even Numbers in  array = %d \n", even_sum);
 	printf("\n The sum of odd Numbers in  array = %d\n", odd_sum);
 	
 	if (even_sum > odd_sum)
 	{
 		printf("the largest sum is = %d\n", even_sum);
 	}
	 else
	 {
	 	printf("the largest sum is = %d\n", odd_sum);
	 }	
	 
 	return 0;
}
