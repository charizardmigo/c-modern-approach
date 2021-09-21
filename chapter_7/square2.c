//NAME: PRIESTLEY FOMECHE
//AIM: PRINTS ALL SQUARES BETWEEN 1 AND n
//DATE: 6TH AUGUST, 2021

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, n;
    char ch;

    printf("Enter limit of squares: ");
    scanf("%d", &n);
    ch = getchar();

    for (i = 1; i <= n; i++){
        printf("%10d%10d\n", i, i * i);

        if (i % 24 == 0){
            printf("\nPress Enter to continue...");
            ch = getchar();
    }
  }

    return 0;
}
