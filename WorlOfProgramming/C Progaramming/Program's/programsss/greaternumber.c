#include<stdio.h>
#include<conio.h>
void main()
{
    int N,M,S;
    printf("Enter 3 No:");
    scanf("%d %d %d",&N,&M,&S);

    if(N>M&&N>S)
    {
        printf("%d is greater Number",N);
    }
else if(M>N&&M>S)
{
    printf("%d is greater number",M);
}
else{
    printf("%d is greater no",S);
}

getch();
}