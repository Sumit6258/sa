//
// Created by Sumit on 04/01/23.
//


#include <stdio.h>
#include <math.h>

int main()
{
    int size;
    printf(" Enter size of array: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter elements in array: ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    float sum;
    float mean;
    float variance;
    float deviation;

    int i = 0;

    for (i = 0; i < 5; i++)
        sum = sum + arr[i];

    mean = sum / 5;

    sum = 0;
    for (i = 0; i < 5; i++) {
        sum = sum + pow((arr[i] - mean), 2);
    }
    variance = sum / 5;

    deviation = sqrt(variance);

    printf("Mean of elements    : %.2f\n", mean);
    printf("variance of elements: %.2f\n", variance);
    printf("Standard deviation  : %.2f\n", deviation);

    return 0;
}
