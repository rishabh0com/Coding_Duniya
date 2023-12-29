#include<stdio.h>
int main()
{
int P,C,M,H,E,total,average,per;

printf("Enter Marks five subject:");
scanf("%d %d %d %d %d",&P,&C,&M,&H,&E);

total=P+C+M+H+E;
printf(" Total is:%d\n",total);
average=total/5;
printf("Average is:%d\n ",average);

per=(total / 500.0) * 100;
printf("persentage is:%d",per);

    return 0;
}