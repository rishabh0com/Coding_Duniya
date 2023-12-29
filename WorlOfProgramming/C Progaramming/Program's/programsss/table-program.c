#include<stdio.h>
main()
{
    int i=1,n,tab;
    printf("Enter number");
    scanf("%d",&n);
    
    while(n<=10){
        printf("%d*%d=%d\n",i,n,tab=i*n);
        n++;
    }
    return 0;
} 