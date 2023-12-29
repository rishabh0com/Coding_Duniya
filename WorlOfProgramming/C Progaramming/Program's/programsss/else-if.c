#include<stdio.h>
#include<conio.h>
int main()
{
 int age;
 printf("enter age:");
 scanf("%d",&age);

if(age>=18)
{
    printf("you are adult\n");
    printf("you can vote\n");
    printf("you can drive\n");
}
else if(age>=13)
{
printf("teenager");
}
else if(age>=5){
    printf("you are child");
}
else{
    printf("you are baby");
}
 return 0;
}

