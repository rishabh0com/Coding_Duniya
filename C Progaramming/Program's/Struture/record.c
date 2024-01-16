#include<stdio.h>
struct rec
{

    int roll;
    char name[20];
    float marks;
};
int main(){
    struct rec s;
printf("Enter Student roll no.:/name:/Marks:");
scanf("%d %s %f",&s.roll,&s.name,&s.marks);

printf("roll no:%d name:%s marks:%f\n",s.roll,s.name,s.marks);

    return 0;
}