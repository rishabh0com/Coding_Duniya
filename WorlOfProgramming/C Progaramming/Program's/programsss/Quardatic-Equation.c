#include <stdio.h>
#include <math.h>
int main()
{
    // Quardatic Equetion D= -b (+-)sqrt(b2-4ac)/2a;

    float a, b, c;
    float D, root1, root2;

    printf("Enter a: ");       
    scanf("%f",&a);
    
    printf("enter b: \n");
    scanf(" %f\n ", &b );
    
    printf("enter c: \n");
    scanf(" %f\n ", &c );

    D = (b * b) - 4 * a * c;

    if (D < 0)
    {
        printf("Roots are imagenerey\n");
    }
    else
    {
        root1 = (-b + sqrt(D)) / (2 * a);
        root2 = (-b - sqrt(D)) / (2 * a);

        printf("Root 1st=%f\n", root1);
        printf("Root 2nd=%f\n", root2);
    }

    return 0;
}