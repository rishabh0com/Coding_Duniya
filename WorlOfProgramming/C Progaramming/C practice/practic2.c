#include<stdio.h>
int main(){
int num,i,sum=0;
printf("Enter Number");
scanf("%d",&num);

for(i=1;i<=num;i++){
    printf("%d\n",i);
    sum=sum+i;
}
printf("sum is: %d",sum);
    return 0;
}