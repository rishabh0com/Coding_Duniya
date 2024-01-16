#include <stdio.h>
int main()
{
    int A[5], i, largest;

    printf("Enter five element of array:");

    for (i = 0; i < 5; i++)
    {

        scanf("%d", &A[i]);
    }
    largest = A[0];

    for (i = 0; i < 5; i++)
    {

        if (A[i] > largest) // if (A[i]>largest) "print largest number"
        {                   // if (A[i]<smaller) "print smallest number"
            largest = A[i];
        }
    }
    printf("largest element of array is %d", largest);
    return 0;
}