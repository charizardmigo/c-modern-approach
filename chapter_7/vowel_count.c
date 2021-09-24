//NAME: PRIESTLEY FOMECHE
//AIM: COUNTS NUMBER OF VOWELS IN A SENTENCE
//DATE: 6TH AUGUST, 2021

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int sum = 0;
    char ch;

    printf("Enter a sentence: ");

    while ((ch = getchar()) != '\n'){
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        sum++;
    }

    printf("\nYour sentence contains %d vowels", sum);

    return 0;
}
