#include <stdio.h>
#include "store.h"

int main()
{
    int n;
    printf("WELCOME TO PES STORE\n");

    // Prompt the user to enter the number of customers
    printf("Enter the number of customers: ");
    scanf("%d", &n);

    // Iterate for each customer
    for(int i = 1; i <= n; i++) {
        printf("Customer number: %d\n", i);
        customers_details(); // Call to customer details function
        menu(); 
        bill(); 
    }

    return 0;
}