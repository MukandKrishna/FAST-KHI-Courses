#include <stdio.h>
int countdigits(int num)
{
   static int count=0;
 
    if(num>0)
    {
        count++;
        countdigits(num/10);
    }
    else
    {
        return count;
    }
}
 
int main()
{
    int number;
    int count=0; 
    printf("Enter a number: \n");
    scanf("%d",&number);
 
    count=countdigits(number);

    printf("Total number of digits in %d are: %d\n",number,count);
    return 0;
}
