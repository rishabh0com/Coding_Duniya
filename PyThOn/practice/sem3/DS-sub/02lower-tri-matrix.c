#include<stdio.h>

int main(){

    int a[3][3];
    int i,j;

    printf("Enter elements for 3x3 matrix : \n");

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("(%d,%d) : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    printf("Matix is : \n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d \t",a[i][j]);
        }
        printf("\n");
    }

    printf("Lower triangular matrix is : \n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
           if(i > j || i == j){
             printf("%d \t",a[i][j]);
           }
           else{
            printf(" %d \t",0);
           }
        }
        printf("\n");
    }


    return 0;
}