#include<stdio.h>
int main()
{
char name;
printf("Enter name frist letter:");
scanf("%c",&name);

switch(name)
{
    case 'r' :printf("Rishabh\n");
    break;
    case 's' :printf("Sapna\n");
    break;
    case 'j' :printf("jagdish\n");
    break;

    defult:printf("not a valid character");    
    
    }

    return 0;
}
