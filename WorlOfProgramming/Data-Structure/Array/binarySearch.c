#include<stdio.h>

int bSearch(int arr[], int N , int item){

    int mid,start = 0, end = N;

    while(start < end){
        mid = (start + end) / 2;
        printf("mid %d \n",mid);

        if(item == arr[mid]){
            return mid + 1;
        }
        else if (item > arr[mid])
        {
            start = mid + 1;
            /* code */
        }
        else{
            end = mid - 1;
        }
        
    }
    return -1;
}

int main() {

    int arr[] = {10,20,33,47,58,69,73,87,90,103,117};
    int item = 117;

    int N = 11;

    int res = bSearch(arr,N,item);
    
 
    if(res != -1) printf("Position of item : %d in Array is : %d ",item,res);
    else printf("item : %d is not present in Array",item);


return 0;
}