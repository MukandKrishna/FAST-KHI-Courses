#include <stdio.h>
 
int main()
{
	int arr[10], i, j, k, size;
	
	printf("\n Enter number of elements in an array  :  ");
	scanf("%d", &size);
	
	printf("\n enter %d elements of an Array \n", size);
	for (i = 0; i < size; i++)
	{
    	scanf("%d", &arr[i]);
   	}     
 
	for (i = 0; i < size; i++)
	{
		for(j = i + 1; j < size; j++)
		{
    		if(arr[i] == arr[j])
    		{
    			for(k = j; k < size; k++)
    			{
    				arr[k] = arr[k + 1];
				}
				size--;
				j--;
			}
		}
	}

 	printf("\n Array after Deleteing Duplicate Array Elements is: \n");
 	for (i = 0; i < size; i++)
  	{
 		printf("%d\t", arr[i]);
  	}	     
 	return 0;
}
