#include<stdio.h>
int main(){
int number,rev=0,x;
printf("Enter number");
scanf("%d",&number);
x=number;
while(number>0){
    rev=(rev*10)+number%10;
    number=number/10;
}
printf("Number is:%d\n",x);
printf("reverse number is:%d\n",rev);


    return 0;
}