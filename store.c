#include <stdio.h>
#include <string.h>
#include "store.h"

void customers_details(void)
{
    char customers_name[20];
    printf("Enter customer name: ");
    fgets(customers_name, sizeof(customers_name), stdin);

    // Remove the newline character from the input
    customers_name[strcspn(customers_name, "\n")] = 0;

    int customers_id;
    printf("Enter customer ID: ");
    scanf("%d", &customers_id);

    int customers_phno;
    printf("Enter customer phone number: ");
    scanf("%d", &customers_phno);
}

void menu(void)
{
    printf("1. ITEMS = PEN, POTATO, BANANA, GRAPES, ORANGE, PEAR, MANGO, APPLE, FRUITS, VEGETABLES\n");
    printf("2. ITEMS IN STOCK are PEN, POTATO, BANANA, GRAPES, ORANGE, PEAR, MANGO, APPLE\n");
    printf("3. PRICE FOR EACH ITEM IS PEN = (20), POTATO = (25), BANANA = (30), GRAPES = (35), ORANGE = (20), PEAR = (40), MANGO = (200), APPLE = (150), FRUITS = (180), VEGETABLES = (250)\n");
}

void bill(void)
{
    int total_amount = 0;
    int choice = 1;
    while (choice != 0 && choice >= 1 && choice < 9) {
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("TO BUY PEN\n");
                total_amount += 20;
                break;
            case 2:printf("TO BUY POTATO\n");
                total_amount += 25;
                break;
            case 3:
                printf("TO BUY BANANA\n");
                total_amount += 30;
                break;
            case 4:
                printf("TO BUY GRAPES\n");
                total_amount += 35;
                break;
            case 5:
                printf("TO BUY ORANGE\n");
                total_amount += 20;
                break;
            case 6:
                printf("TO BUY PEAR\n");
                total_amount += 40;
                break;
            case 7:
                printf("TO BUY MANGO\n");
                total_amount += 200;
                break;
            case 8:
                printf("TO BUY APPLE\n");
                total_amount += 150;
                break;
            default:
                printf("EXIT\n");
                break;
        }
    }
    printf("Total is = %d\n", total_amount);
}