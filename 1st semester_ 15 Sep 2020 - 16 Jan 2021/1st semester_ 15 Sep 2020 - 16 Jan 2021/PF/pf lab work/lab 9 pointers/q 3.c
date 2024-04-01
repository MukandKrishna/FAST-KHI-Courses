#include<stdio.h>
#include<conio.h>
sumEvenIndex(int []);
sumOddIndex(int []);
int main()
{
	int a[10],i,n,s1=0,s2=0;
	printf("Input the size of array : ");
    scanf("%d",&n);
    
    printf("Input %d elements in the array :\n",n);
	for(i=1;i<=n;i++)
    {
		printf("element - %d : ",i);
	    scanf("%d",&a[i]);
	}
	sumEvenIndex(a);
	 
	sumOddIndex(a);
	
	sortarray(n, a);
	
	return 0;
}
sumEvenIndex(int a[])
{
	int i , s1=0;
	for(i=0; i<10 ;i++)
	{
		if(i%2==0)
			s1=s1+a[i];	
	}
	printf("\neven sum = %d\n",s1);
}
sumOddIndex(int a[])
{
	int i , s2=0;
	for(i=0; i<10; i++)
	{
		if(i%2!=0)
			s2=s2+a[i];
	}
	printf("\nodd sum = %d\n",s2);
}
sortarray(int n, int* ptr) 
{ 
    int i, j, t; 
    // Sort the numbers using pointers 
    for (i = 0; i < n; i++) 
	{ 
    	for (j = i + 1; j < n; j++) 
		{ 
        	if (*(ptr + j) < *(ptr + i)) 
			{ 
            	t = *(ptr + i); 
                *(ptr + i) = *(ptr + j); 
                *(ptr + j) = t; 
            } 
        } 
    } 
    // print the numbers 
    printf("\nelements in ascending order are : \n");
    for (i = 0; i < n; i++) 
	printf(" %d ", *(ptr + i)); 
} 

