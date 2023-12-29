#include <stdio.h>
void main()
{
    int num, x, y, z;
    // 0+1=1,1+1=2,1+2=3,2+3=5,8,13,21.............. fabonic series
    printf("Enter max number:");
    scanf("%d", &num);
    x = 0, 
    y = 1, 
    z = 0;
    printf("fabonic series:-");
    while (z <= num)
    {

        printf("\n %d", z);

        x = y;
        y = z;
        z = x + y;
    }
}