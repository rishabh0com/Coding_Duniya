#include<stdio.h>
void sum();
void printstar(int n){
    for (int i = 0; i<=n; i++)
    {
            printf("*\n");
    }
    
}
int main(){
    printstar(7);
    sum();

return 0;
}
void sum()
    {
    int a,b,c;
    printf("enter two number\n");
    scanf("%d %d",&a,&b);
    c=a+b;
    printf("sum=%d",c);
}
