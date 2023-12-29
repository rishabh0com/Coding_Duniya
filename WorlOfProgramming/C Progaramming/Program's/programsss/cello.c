#include<stdio.h>
int main()
{
int a,b,c;

printf("a\nb\nc\n");
scanf("%d %d %d",&a ,&b, &c);
if(a>b&&a>c)
{
    printf("a is largest no");
}
else if(b>a&&b>c)
{
    printf("b is largest no");
}
else if (c>a&&c>b){
    printf("c is largest no");
}
else{
    printf("\n thankyou");
}
                                           
    return 0;
}