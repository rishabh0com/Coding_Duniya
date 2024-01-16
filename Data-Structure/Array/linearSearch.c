#include<stdio.h>

int lSearch(int arr[],int N,int item){
    int i;
    for(i = 0; i < N; i++)
    {
       
        if(arr[i] == item){
           
            return i + 1;
          
        }
    }
       
     return -1;
}

int main (){

    int arr[] = {2,4,5,6,3,9,10,45,78,34,12};
    int item = 78;

    int N = sizeof(arr);
  

    int res = lSearch(arr,N,item);
 

    if(res != -1) printf("Position of item : %d in Array is : %d ",item,res);
    else printf("item : %d is not present in Array",item);


    return 0;
}