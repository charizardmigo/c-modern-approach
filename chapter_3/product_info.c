//NAME: PRIESTLEY FOMECHE
//AIM: PROGRAM TO DISPLAY PRODUCT INFO ORDERLY
//DATE: 15th JULY, 2021

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int item_num, dd, mm, yyyy;
    float unit_price;

    printf("Enter item number: ");
    scanf("%d", &item_num);
    printf("Enter unit price: ");
    scanf("%f", &unit_price);
    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &mm, &dd, &yyyy);

    printf("ITEM\t\tUNIT\t\tPURCHASE\n%d\t\t$%.2f\t\t%d/%d/%d", item_num, unit_price, mm, dd, yyyy);

    return 0;
}
