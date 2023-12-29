#include <stdio.h>
int main()
{
    int i, sum = 0;
    printf("Odd numbers:-\n");
    for (i = 1; i <= 15; i = i + 2)
    {
        printf("%d\n", i);
        sum = sum + i;
    }
    printf("sum is: %d", sum);

    return 0;
}