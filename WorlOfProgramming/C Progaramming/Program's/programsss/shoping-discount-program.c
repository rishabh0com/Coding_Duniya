#include<stdio.h>
int main()
{
int bill,per,discount,pay;
printf("ENTER BILL");
scanf("%d",&bill);

if(bill>=1000 && bill<=2000){
per=(bill*3)/100;
discount=per+100;
pay=bill-discount;
printf("pay amaount:%d",pay);
}
else if(bill>=2001 && bill<=3000)
{
    per=(bill*5)/100;
    discount=per+200;
    pay=discount-bill;
    printf("pay amount:%d");
}
else if( bill>=3001 && bill<=5000){
per=(bill*10)/100;
discount=per+500;
pay+bill-discount;
printf("pay amount:%d");
}
else{
    printf("you are not elegible");
}

    return 0;
}