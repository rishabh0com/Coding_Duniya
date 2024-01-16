#include<stdio.h>
#include<string.h>
int main(){

char S1[10],S2[10],n;
gets(S1);
gets(S2);

n=strcmp(S1,S2);

if(n==0){
    printf("S1 S2 are same");
}else{
    printf("Diff");
}

    return 0;
}