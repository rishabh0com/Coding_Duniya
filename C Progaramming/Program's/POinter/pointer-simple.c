#include<stdio.h>
int main(){

    int a,b,*p,**x;
    a=10;
    p=&a;
    x=&p;

    printf("print 'a' %d\n",a); //a value 10
    printf(" print add a %x\n",&a);// add a...
    printf("print 'p' %p\n",p);// add a...
    printf("print *p : %d\n",*p);// value of a..10
    printf("print x %p\n ",x);// add p...
    printf("print **x %d\n",**x);// value of p to a 10
}