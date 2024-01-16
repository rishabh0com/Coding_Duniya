#include<stdio.h>
long int multiplyNumbers(int n);
int main() {
  multiplyNumbers(3);
    return 0;
}

long int multiplyNumbers(int n) {
    if (n>=1)
        return n*multiplyNumbers(n-1);
    else
        return 1;
}
