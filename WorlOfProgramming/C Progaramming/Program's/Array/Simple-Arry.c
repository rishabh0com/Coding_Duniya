// simple program of array

#include <stdio.h>
int main()
{

    int mark[5] = {90, 80, 70, 60, 50}; // array declaration and intilization

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", mark[i]);   // print Array values
    }

    return 0;
}