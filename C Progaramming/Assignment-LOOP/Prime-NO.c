#include<stdio.h>
int main(){
int i,prime,number;
prime=1;
//जो खुद से और 1 से devide हो |
printf("Enter number:");
scanf("%d",&number);

for(i=2;i<number;i++){
    if(number%2==0){
        prime=0;
    }
}if(prime==1){
    printf("Prime Number");
}else{
    printf("Not a Prime Number");
}
    return 0;
}