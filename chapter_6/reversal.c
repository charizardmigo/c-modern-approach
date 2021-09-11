//NAME: PRIESTLEY FOMECHE
//AIM: DISPLAYS ANY NUMBER IN REVERSE
//DATE: 28th JULY, 2021

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    long num, rem;

    printf("Enter a number: ");
    scanf("%ld", &num);

    printf("The reverse is ");

   do {
        rem = num % 10;
        num /= 10;
        printf("%d", rem);

    }  while (num != 0);



    return 0;
}
