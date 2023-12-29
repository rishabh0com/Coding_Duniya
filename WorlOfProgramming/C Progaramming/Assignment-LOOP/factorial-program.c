#include <stdio.h>
int main()
{
  int i = 1, number, fact = 1;
  printf("Enter number");
  scanf("%d", &number);
  for (i = 1; i <= number; i++)
  {
    fact = fact * i; /*fact = fact * i; i=1 , fact =1 inislize kr do */
  }
  {
    printf("fact is:%d", fact);
  }

  return 0;
}