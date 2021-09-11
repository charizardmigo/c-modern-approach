//NAME: PRIESTLEY FOMECHE
//AIM: PRINTS A TABLE OF SQUARES
//DATE: 20th JULY, 2021

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i = 1, n;

    printf("THIS PROGRAM PRINTS A TABLE OF SQUARES:\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    while (i <= n){
        printf("%d\t\t\t%d\n", i, i * i);
        i++;
    }

    return 0;
}
