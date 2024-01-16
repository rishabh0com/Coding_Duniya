#include<stdio.h>
int main(){

    int i,prime=1,number=17;
   

   for(i=2;i<number;i++)
   {
    if(number%i==0){
        prime=0;
       }
   }
   if(prime==1){
    printf(" prime number");
   }else{
    printf(" not prime number");
   }
    
    return 0;
}