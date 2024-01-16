#include<stdio.h>

int main(){
    
    int a[3][3],i,j;

    printf("Enter 3x3 matrix : \n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("(%d,%d) : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    printf("Matrix is : \n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d \t",a[i][j]);
        }
        printf("\n");
    }

    printf("Upper Triangular Matrix is : \n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(i < j || i == j){
                printf("%d \t",a[i][j]);
            }
            else{
                printf("%d \t",0);
            }
        }
        printf("\n");
    }


    return 0;
}