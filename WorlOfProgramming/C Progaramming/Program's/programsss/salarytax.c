#include<stdio.h>
int main()
{
int sal,tax,totalsal,packeg;

printf("Enter salary:");
scanf("%d",&sal);
totalsal=sal*12;
if(sal>=0&&sal<=7000)
{
    tax=(totalsal*3)/100;
    packeg=totalsal-tax;
    printf("packeg is:%d",packeg);

}
else if(sal>=7001&&sal<14000)
{
    tax=(totalsal*5)/100;
    packeg=totalsal-tax;
    printf("%d",packeg);
}
else
{
    tax=(totalsal*7)/100;
    packeg=totalsal-tax;
    printf("%d",packeg);
}

    return 0;
}