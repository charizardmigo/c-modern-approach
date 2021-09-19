//NAME: PRIESTLEY FOMECHE
//AIM: COMPUTES THE VALUE OF A WORD BY SUMMING THE VALUE OF ITS LETTERS
//DATE: 6TH AUGUST, 2021

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    int sum = 0;
    char ch;

    printf("Enter a word: ");

    do {
        scanf("%c", &ch);
        ch = toupper(ch);

            switch (ch) {
                case 'A': case 'E': case 'I': case 'L': case 'N': case 'O': case 'R': case 'S': case 'T': case 'U':
                    sum += 1;
                    break;

                case 'D': case 'G':
                    sum += 2;
                    break;

                case 'B': case 'C': case 'M': case 'P':
                    sum += 3;
                    break;

                case 'F': case 'H': case 'V': case 'W': case 'Y':
                    sum += 4;
                    break;

                case 'K':
                    sum += 5;
                    break;

                case 'J': case 'X':
                    sum += 8;
                    break;

                case 'Q': case 'Z':
                    sum += 10;
                    break;

                default:
                    break;
            }

    } while (ch != '\n');

    printf("Scrabble Value: %d", sum);

    return 0;
}
