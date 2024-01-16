#include <stdio.h>
#include <string.h>
int main()
{
    char name[20];

    printf("Enter String: ");
    gets(name);

    printf("There are %d character", strlen(name));

    return 0;
}