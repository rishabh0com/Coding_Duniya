//print odd element using Array

#include<stdio.h>
int main(){

int x[10]={};
printf("Enter 10 values:");
for(int i=0;i<10;i++){
    scanf("%d",&x[i]);
}
printf("Odd number are:\n");
for(int i=0;i<10;i++){

    if(x[i]%2 !=0){
        printf("%d\n",x[i]);
    }
}


    return 0;
}