//NAME: PRIESTLEY FOMECHE
//AIM: BREAKS DOWN AN ISBN VALUE ENTERED BY THE USER
//DATE: 15th JULY, 2021

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int gs1_prefix, group_identifier, publisher_code, item_num, check_digit;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gs1_prefix, &group_identifier, &publisher_code, &item_num, &check_digit);

    printf("GS1 Prefix: %d\n", gs1_prefix);
    printf("Group Identifier: %d\n", group_identifier);
    printf("Publisher Code: %d\n", publisher_code);
    printf("Item Number: %d\n", item_num);
    printf("Check Digit: %d", check_digit);

    return 0;
}
