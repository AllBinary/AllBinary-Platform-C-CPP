/*
 *
 * AllBinary Open License Version 1
 * Copyright (c) 2011 AllBinary
 * 
 * By agreeing to this license you and any business entity you represent are
 * legally bound to the AllBinary Open License Version 1 legal agreement.
 * 
 * You may obtain the AllBinary Open License Version 1 legal agreement from
 * AllBinary or the root directory of AllBinary's AllBinary Platform repository.
 * 
 * Created By: Travis Berthelot
 *  
 */
// Generated Code Do Not Modify
// package org.allbinary.business.user.commerce.inventory.basket

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/io/Serializable.h"
// #include "java/util/HashMap.h"
// #include "java/util/Set.h"
#include "org/allbinary/business/user/commerce/inventory/item/ItemInterface.h"
#include "org/allbinary/business/user/commerce/money/Money.h"
#include "org/allbinary/business/user/commerce/money/MoneyException.h"
#include "org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntity.h"
#include "org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntityFactory.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/business/user/commerce/inventory/basket/BasketInterface.h"

typedef struct Basket Basket;
struct Basket {
    BasketInterface BasketInterface_interface;
    Serializable Serializable_interface;
    HashMap* items;
};


Basket* Basket_new(void);

void Basket_init(Basket* this);
void Basket_addItem(Basket* this, const char* id, const char* num);
void Basket_removeItem(Basket* this, const char* id);
void Basket_adjustItem(Basket* this, const char* id, const char* num);
const char* Basket_getTotalWeight(Basket* this);
int32_t Basket_getNumberOfItems(Basket* this);
Set* Basket_getIds(Basket* this);
HashMap* Basket_getItems(Basket* this);
int32_t Basket_getNumberOf(Basket* this, const char* product);
Money* Basket_getSubTotal(Basket* this);

static void Basket_initFields(Basket* this) {
    this->items = StdUtil_createHashMap(StdUtil_getInstance());
}


void Basket_init(Basket* this) {
    Basket_initFields(this);
}

Basket* Basket_new(void) {
    Basket* this = calloc(1, sizeof(Basket));
    Basket_init(this);
    return this;
}


void Basket_addItem(Basket* this, const char* id, const char* num) {
        if (HashMap_containsKey(this->items, id)) {
            const char* oldNumStr = java_string_new(((const char*) HashMap_get(this->items, id)));
            int32_t oldNumInt = java_string_of(oldNumStr);
            int32_t numInt = java_string_of(num);
            int32_t newNumInt = Integer_intValue(oldNumInt) + Integer_intValue(numInt);
            HashMap_put(this->items, id, Integer_toString(newNumInt));
        } else {
            HashMap_put(this->items, id, num);
        }
}


void Basket_removeItem(Basket* this, const char* id) {
        HashMap_remove(this->items, id);
}


void Basket_adjustItem(Basket* this, const char* id, const char* num) {
        if (JAVA_CALL(java_string_of(num), intValue) > 0) {
            HashMap_put(this->items, id, num);
        } else {
            HashMap_remove(this->items, id);
        }
}


const char* Basket_getTotalWeight(Basket* this) {
        HashMap* itemsAndNumberInBasket = Basket_getItems(this);
        Money* totalWeight = Money_new();
        if (HashMap_size(itemsAndNumberInBasket) > 0) {
            Set* items = HashMap_keySet(itemsAndNumberInBasket);
            const char* product = nullptr;
            float weightFloat = nullptr;
            Any** itemArray = HashMap_toArray(items);
            int32_t size = java_array_length(itemArray);
            for (int32_t index = 0; index < size; index++) {
                product = java_string_new(((const char*) itemArray[index]));
                weightFloat = InventoryEntity_getWeight(InventoryEntity_new(), product);
                weightFloat = JAVA_CALL(Basket_getNumberOf(this, product), floatValue) * Float_floatValue(weightFloat);
                Money_add(totalWeight, Float_toString(weightFloat));
            }
        }
        return Money_toString(totalWeight);
}


int32_t Basket_getNumberOfItems(Basket* this) {
        return HashMap_size(this->items);
}


Set* Basket_getIds(Basket* this) {
        Set* set = HashMap_keySet(this->items);
        return set;
}


HashMap* Basket_getItems(Basket* this) {
        return this->items;
}


int32_t Basket_getNumberOf(Basket* this, const char* product) {
        const char* numStr = ((const char*) HashMap_get(this->items, product));
        return java_string_of(numStr);
}


// throws MoneyException
Money* Basket_getSubTotal(Basket* this) {
        HashMap* itemsAndNumberInBasket = Basket_getItems(this);
        Money* subTotal = Money_new();
        if (HashMap_size(itemsAndNumberInBasket) > 0) {
            Set* items = HashMap_keySet(itemsAndNumberInBasket);
            InventoryEntityFactory* inventoryEntityFactory = InventoryEntityFactory_getInstance();
            InventoryEntity* inventoryEntity = ((InventoryEntity*) InventoryEntityFactory_getInventoryEntityInstance(inventoryEntityFactory));
            Any** itemArray = HashMap_toArray(items);
            int32_t size = java_array_length(itemArray);
            for (int32_t index = 0; index < size; index++) {
                const char* product = java_string_new(((const char*) itemArray[index]));
                ItemInterface* itemInterface = InventoryEntity_getItem(inventoryEntity, product);
                Money* productTotal = ItemInterface_getPrice(itemInterface);
                Money_multiply(productTotal, JAVA_CALL(Basket_getNumberOf(this, product), intValue));
                Money_add(subTotal, Money_toString(productTotal));
            }
        }
        return subTotal;
}

