#include <stdio.h>
#include <string.h>
int main()
{

    char S1[100], S2[50];
    printf("Enter String S1: ");
    gets(S1);
    printf("Enter String S2: ");
    gets(S2);

    strcat(S1, S2);

    printf("%s", S1);

    return 0;
}