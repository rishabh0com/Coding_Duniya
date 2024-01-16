#include<stdio.h>
int main()
{
    int month;
    printf("enter month NO.");
    scanf("%d",&month);
    switch (month)
    {
    case 1 :printf("month 1");
      break;
    case 2:printf("month 2");
    break;
    case 3:printf("month 3");
    break;
    case 4:printf("month 4");
    break;
    
    
   

    
    default:printf("not a valid month");
    }
    
  
    
  return 0;
}
