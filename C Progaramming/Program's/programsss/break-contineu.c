#include <stdio.h>
void con()
{
    int i;
    for (i = 0; i <= 6; i++)
    {if(i==5){
        continue;}
        
        printf("%d",i);
    }
        
    }

void bre()
{
    int i;
    for (i = 0; i <= 10; i++)
    {
        printf("%d\n", i);

        if (i == 5)
            break;
    }
}

int main()
    {

    bre();
    con();
    return 0;
}
