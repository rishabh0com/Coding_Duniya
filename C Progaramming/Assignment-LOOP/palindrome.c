#include <stdio.h>
int main()
{
    int number, temp, d, rev = 0;
    // orignal number = reverse number, ex- 989=reverse989
    printf("Enter Number:");
    scanf("%d", &number);
    temp = number;
    while (number > 0)
    {
        d = number % 10;
        number = number / 10;
        rev = (rev * 10) + d;
    }
    printf("reverse number is:%d\n", rev);
    if (rev == temp)
    {
        printf("Number is Palindrome\n");
    }
    else
    {
        printf("Number is not a Palindrome\n");
    }
    return 0;
}