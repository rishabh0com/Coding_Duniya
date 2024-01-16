#include<stdio.h>
void main(){

int num,sum=0,i;
/*वह number जिससे भी वह divide हो सकता है , और उन सारे numbers का sum 
sum वही number आ जाए | ex- 6, 6%1=0 , 6%2=0, 6%3=0 ,,, 1+2+3=6
6 is a prefect number...*/
printf("Enter Number: ");
scanf("%d",&num);

for(i=1;i<=(num/2);i++){

    sum=sum+i;
}

if(num==sum){
    printf("%d is a prefect number\n",num);

}else{
    printf("%d is not a prefect number\n",num);
}
}