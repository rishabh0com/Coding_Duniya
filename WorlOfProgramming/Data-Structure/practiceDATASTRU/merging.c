#include<stdio.h>
int main() {

int arr1[] = {2,3,4,5};
int arr2[] = {1,6,7,8};
int arr3[8];
int k = 0;

for(int i = 0; i < 8 ; i++){
    for(int j = 0; j < 8; j++){
       if(arr1[i] < arr2[j]){
        arr3[k] = arr1[i];
        i++;
        k++;
      
       }
       else{
        arr3[k] = arr2[j];
        j++;
        k++;
        
       }
    }
   
}

printf("%d",arr3);

return 0;
}