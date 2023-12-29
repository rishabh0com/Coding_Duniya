#include<stdio.h>
int main()
{
int num;
printf("Enter number:");
scanf("%d",&num);

if(num>0)
{
    printf("posttive'+'\n");
if(num%2==0)
{
    printf("even number\n");
   
}else{
    printf("num is odd\n");
     if(num>=2)
    {
        printf("%d",num*num);
    }else{
        printf("no square is possible\n");
    }
}
}else{
    printf("Negetive'-'\n");
}

    return 0;
}