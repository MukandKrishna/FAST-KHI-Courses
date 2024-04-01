#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int num,i;
    float *data;
    printf("Enter the total number of elements: ");
    scanf("%d", &num);

    // Allocating memory for num elements
    data = (float *)calloc(num, sizeof(float));
    if (data == NULL) {
        printf("Error!!! memory not allocated.");
        exit(0);
    }

    // Storing numbers entered by the user.
    for (i = 0; i < num; ++i) {
        printf("Enter Number %d: ", i + 1);
        scanf("%f", data + i);
    }

    // Finding the largest number
    for (i = 1; i < num; ++i) {
        if (*data > *(data + i))
            *data = *(data + i);
    }
    printf("smallest number = %f", *data);

    return 0;
}
