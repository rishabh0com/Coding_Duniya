#include<stdio.h>
#include<math.h>
int main()
{
   int a,b;
   printf("Enter number:\n");
   scanf("%d",&a);
   printf("Enter Power\n");
   scanf("%d",&b);
   int power=pow(a,b);
   printf("power ans:%d",power);
   


    return 0;

}