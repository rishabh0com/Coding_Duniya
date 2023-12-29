#include<stdio.h>
int main(){
int num,sum=0,temp;
//which number जिसके हर digit का cube (3) का sum वही नंबर आ जाए |ex- 153 = 1+27+125 
printf("Enter Number: ");
scanf("%d",&num);
temp=num;
while(num>0){
    sum=sum+(num%10)*(num%10)*(num%10);
    num=num/10;

}
if(sum==temp){
    printf("%d is a Armstrong Number",temp);
}else{
    printf("%d is not a Armstrong Number",temp);
}
    return 0;
}