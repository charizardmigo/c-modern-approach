//NAME: PRIESTLEY FOMECHE
//AIM: DISPLAYS USER'S FIRST AND LAST NAME
//DATE: 6TH AUGUST, 2021

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char ch1, ch2, first_name, last_name;

    printf("Enter a first and last name: ");
    scanf(" %c", &first_name);

    while ((ch1 = getchar()) != ' ')
        ;

    while ((ch2 = getchar()) != '\n'){
        if (ch2 == ' ')
            continue;

        else {
            last_name = ch2;
            putchar(last_name);
        }
    }

    printf(", ");
    printf("%c.", first_name);

    return 0;
}
