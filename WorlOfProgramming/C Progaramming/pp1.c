#include<stdio.h>
void print(int n);
int main(){
print(10);

return 0;
}
void print(int n){
if(n==0){
    return;
}printf("Hello\n");
    print(n-1);
}