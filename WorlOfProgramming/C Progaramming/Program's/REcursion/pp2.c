#include <stdio.h>
int fact(int n);

int main()
{
    int num;
    printf("enter num");
    scanf("%d", &num);
    printf("fact is %d", fact(num));
    
    return 0;
}
int fact(int n)
{
    if (n == 1 || n == 0)

        return 1;
        
    return (n * fact(n - 1));
}