#include<stdio.h>
void main(){
    int i,j,c=1;
    for(i=1;i<=3;i++){
        for(j=1;j<=i;j++)
        {
            printf(" %d ",c);
            c++;
        }
        printf("\n");
    }
}