#include<stdio.h>

int main()
{
 int arr1[2][2],arr2[2][2],arr3[2][2]={0},i,j,k;

 printf("Type a matrix of 2 rows & 2 colomns :\n");
 for(i=0;i<2;i++){
  for(j=0;j<2;j++){
   scanf("%d",&arr1[i][j]);}
 } 
 printf("Type another matrix of 2 rows & 2 colomns :\n");
 for(i=0;i<2;i++){
  for(j=0;j<2;j++){
   scanf("%d",&arr2[i][j]);}
 }
 
 for(i=0;i<2;i++)
 {
  for(j=0;j<2;j++)
  {
   for(k=0;k<2;k++)
    arr3[i][j]=arr3[i][j]+arr1[i][k]*arr2[k][j];
  }

 }
 
 printf("\n\nOutput:\n");
 for(i=0;i<2;i++)
 {
  for(j=0;j<2;j++)
   printf("%5d",arr3[i][j]);
  printf("\n\n");
 }

 return 0;
}