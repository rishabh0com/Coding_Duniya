#include<stdio.h>
#include<string.h>
int main()
{
char na[30];
printf("Enter you name:  ");
//'gets' replase in array string from 'scanf' function
//use 'gets' in place of 'scanf' for _space
//syntax of gets: "gets(string name);"
gets(na);
printf("your name is=  %s",na);



    return 0;
}