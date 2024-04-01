#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int max = 0  , n , max2 = 0 , avg = 0 , i , *marks ;
	
	printf("Enter the number of array  : ");
	scanf("%d",&n);
	
	marks = (int*)calloc(n , sizeof(int));
	
	printf("Enter the marks of students ");
	for(i = 0 ; i < n ; i++){
		
		scanf("%d",&marks[i]);
		
	}
	
	for(i = 0 ; i < n ; i++){
		
	if(marks[i] > max ){
		
		max = marks[i] ;
		
	}
	
	}
	for(i= 0 ; i < n ; i++){
		
	if(max2 < marks[i]  ){
		if(marks[i] < max)
			
			max2 = marks[i] ;
		
	}
	
	}
	
	for(i = 0 ;i < n ; i++){
		
		avg = avg + marks[i] ;
		
	}
	avg = avg / n ;
	
	printf("\n The highest marks is  : %d  \n The second highest marks is  : %d \n The average of marks is  : %d " , max , max2 , avg );
	
	return 0 ;
}
