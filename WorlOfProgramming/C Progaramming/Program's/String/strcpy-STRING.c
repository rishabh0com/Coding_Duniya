#include <stdio.h>
#include <string.h>
int main()
{
char S1[50],S2[100];
printf("Enter String 1: ");
gets(S1);

printf("Enter string 2: ");
gets(S2);

strcpy(S2,S1);
printf("%s",S2);



    return 0;
}