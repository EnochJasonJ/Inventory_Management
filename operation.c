#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
#include "inventory.h"

#define INITIAL_CAPACITY 10

void initInventory(Inventory *inventory){
    inventory ->capacity = INITIAL_CAPACITY;
    inventory->count=0;
    inventory->item = (Item *)malloc(inventory -> capacity * sizeof(Item));
}