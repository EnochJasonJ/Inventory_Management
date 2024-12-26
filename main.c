#include <stdio.h>
#include <stdbool.h>
#include "inventory.h"
#include "operation.c"

// struct items
// {
//     int id;
//     char name[201];
//     int quantity;
//     float price;
// };

void printOperations()
{
    printf("1.Add Item\n");
    printf("2.View Inventory\n");
    printf("3.Search Item by ID\n");
    printf("4.Update Item by ID\n");
    printf("5.Delete Item by ID\n");
    printf("6.Calculate Total Inventory Value\n");
    printf("7.Exit\n");
}

int main()
{
    int choice, id, quantity, index;
    float price;
    char name[MAX_NAME_LENGTH];

    Inventory inventory;
    initInventory(&inventory);

    while (1)
    {
        int choice;
        printf("1.Add Item\n");
        printf("2.View Inventory\n");
        printf("3.Search Item by ID\n");
        printf("4.Update Item by ID\n");
        printf("5.Delete Item by ID\n");
        printf("6.Calculate Total Inventory Value\n");
        printf("7.Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Add item here\n");
            break;
        case 2:
            printf("View Inventory\n");
            break;
        case 3:
            printf("Search Item\n");
            break;
        case 4:
            printf("Update Item\n");
            break;
        case 5:
            printf("Delete Item\n");
            break;
        case 6:
            printf("Calculate Inventory\n");
            break;
        case 7:
            printf("Thank you! Visit again :)");
            return 0;
        default:
            printf("Invalid Input!\n");
        }
    }
}