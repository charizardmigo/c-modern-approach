//NAME: PRIESTLEY FOMECHE
//AIM: FINDS THE LARGEST AND SMALLEST INTEGER
//DATE: 18th JULY, 2021

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a, b, c, d;

    printf("Enter four integers (separated with spaces): ");
    scanf("%d%d%d%d", &a, &b, &c, &d);

    if (a > b && a > c && a > d)
        printf("Largest number is %d\n", a);
            if (a < b && a < c && a < d)
                printf("Smallest number is %d\n", a);
    else if (b > a && b > c && b > d)
        printf("Largest number is %d\n", b);
             if (b < a && b < c && b < d)
                printf("Smallest number is %d\n", b);
    else if (c > a && c > b && c > d)
        printf("Largest number is %d\n", c);
             if (c < a && c < b && c < d)
                printf("Smallest number is %d\n", c);
    else if (d > a && d > b && d > c)
        printf("Largest number is %d\n", d);
             if (d < a && d < b && d < c)
                printf("Smallest number is %d\n", d);

    return 0;
}
