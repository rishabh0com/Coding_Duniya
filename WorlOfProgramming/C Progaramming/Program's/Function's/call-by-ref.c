                        //call by address / call by refrence

#include<stdio.h>

void swap(int *m, int *n); //in call by refrence we take pointer vairable

int main(){

int a,b;
printf("Enter Two number:");
scanf("%d %d",&a,&b);

swap(&a,&b);   //calling  //calling time a,b are atual parameter...
printf("main function\n");
printf("a=%d b=%d\n",a,b);

    return 0;
}      
void swap (int *m, int *n)   //defenation //m,n are Formal parameter....
{

int temp;
temp=*m;
*m=*n;
*n=temp;
printf("calling function\n");
printf("m=%d n=%d\n",*m,*n);

}                  