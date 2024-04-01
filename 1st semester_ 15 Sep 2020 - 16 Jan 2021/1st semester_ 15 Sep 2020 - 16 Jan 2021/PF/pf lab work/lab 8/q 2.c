#include <stdio.h>
int power(int base, int a) 
{
    if (a != 0)
        return (base * power(base, a - 1));
    else
        return 1;
}
int main() 
{
    int base, a, value;
    printf("Enter base number: \n");
    scanf("%d", &base);
    printf("Enter power number: \n");
    scanf("%d", &a);
    value = power(base, a);
    printf("the value of %d to power of %d is %d \n", base, a, value);
    return 0;
}
