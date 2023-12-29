#include<stdio.h>
#include<conio.h>
void main()
{
//rem=remnder
//वह number जिसके factorials का sum , वही number हो |
int num,strong,fact,rem,sum=0,temp;

printf("Enter Number:");
scanf("%d",&num);
temp=num;

while(num>0){
    strong=1,fact=1;
    rem=num%10;
    while(strong<=rem){
        fact=fact*strong;
        strong++;

    }
    sum=sum+fact;
    num=num/10;
}
if(sum==temp)
{
    printf("Strong Number");
}else{
    printf("Not a Strong Number");
}

}
