#include <stdio.h>
int swap(int a, int b);            // call by value;
                                     /* variable valve change in user defaind function
                                        value not change in main function*/

void main()
{
    int a, b;
    printf("Enter Two Number:");
    scanf("%d %d ", &a, &b);

    printf("a=%d\n b=%d\n", a, b);

    swap(a, b);
}
int swap(int a, int b)        //function defenation
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("a=%d\n b=%d\n", a, b);
    return a, b;
}