#include<stdio.h>
int main()
{
int N;
printf("enter Number:");
scanf("%d",&N);

if(N%2==0)
{
    printf("even Number\n");
    printf("even no. square is:%d",N*N);

}
else{
    printf("odd Number");
}

    return 0;
}