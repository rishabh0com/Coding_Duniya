#include<stdio.h>
int main(){
int mat[2][2],trans[2][2],i,j;
printf("Entert matrix element:\n");
for(i=0;i<2;i++){
    for(j=0;j<2;j++){
        scanf("%d",&mat[i][j]);
    }
    
}
printf("Matrix:\n");
for(i=0;i<2;i++){
    for(j=0;j<2;j++){
        printf("%d",mat[i][j]);
    }
    printf("\n");
}
for(i=0;i<2;i++){
    for(j=0;j<2;j++){
        trans[j][i]=mat[i][j];
    }
}
printf("Transpose Matrix:\n");
for(i=0;i<2;i++){
    for(j=0;j<2;j++){
        printf("%d \t",trans[i][j]);
    }
    printf("\n");
}

    return 0;
}