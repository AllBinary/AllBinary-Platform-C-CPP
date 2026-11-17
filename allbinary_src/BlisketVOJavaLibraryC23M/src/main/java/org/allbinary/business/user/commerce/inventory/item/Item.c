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
// package org.allbinary.business.user.commerce.inventory.item

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/business/entry/EntryData.h"
#include "org/allbinary/business/user/address/ShippingAddressData.h"
#include "org/allbinary/business/user/address/StreetAddress.h"
#include "org/allbinary/business/user/address/StreetAddressData.h"
#include "org/allbinary/business/user/commerce/inventory/order/OrderHistoryData.h"
#include "org/allbinary/business/user/commerce/money/MoneyException.h"
#include "org/allbinary/business/user/commerce/shipping/ShippingMethodData.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/business/user/commerce/inventory/item/BasicItem.h"
#include "org/allbinary/business/user/commerce/inventory/item/OrderItemInterface.h"

typedef struct Item Item;
struct Item {
    BasicItem base;
    OrderItemInterface OrderItemInterface_interface;
    const char* group;
    const char* tax;
    const char* shippingType;
    const char* shippingCost;
    const char* shippedDate;
    StreetAddress* shippingAddress;
    const char* special;
};


Item* Item_new(HashMap* itemHashMap);

void Item_init(Item* this, HashMap* itemHashMap);

Item* Item_new0();
void Item_init0(Item* this);
static void Item_setData(Item* this, HashMap* itemHashMap);
void Item_setGroup(Item* this, const char* value);
void Item_setTax(Item* this, const char* value);
void Item_setShippingType(Item* this, const char* value);
void Item_setShippingCost(Item* this, const char* value);
void Item_setShippingAddress(Item* this, StreetAddress* value);
void Item_setSpecial(Item* this, const char* value);
const char* Item_getGroup(Item* this);
const char* Item_getTax(Item* this);
const char* Item_getShippingType(Item* this);
const char* Item_getShippingCost(Item* this);
StreetAddress* Item_getShippingAddress(Item* this);
const char* Item_getSpecial(Item* this);
HashMap* Item_toHashMap(Item* this);

static void Item_initFields(Item* this) {
    
    
    
    
    this->shippedDate = nullptr;
    
    this->special = nullptr;
}


void Item_init(Item* this, HashMap* itemHashMap) {
        BasicItem_init(&this->base, itemHashMap);
        Item_initFields(this);
        Item_setData(this, itemHashMap);
}

Item* Item_new(HashMap* itemHashMap) {
    Item* this = calloc(1, sizeof(Item));
    Item_init(this, itemHashMap);
    return this;
}


void Item_init0(Item* this) {
    BasicItem_init(&this->base);
    Item_initFields(this);
        const char* EMPTY = StringUtil_getInstance()->EMPTY_STRING;
        this->group = EMPTY;
        this->tax = EMPTY;
        this->shippingType = EMPTY;
        this->shippingCost = EMPTY;
        this->shippingAddress = StreetAddress_new();
}

Item* Item_new0(void) {
    Item* this = calloc(1, sizeof(Item));
    Item_init0(this);
    return this;
}


static void Item_setData(Item* this, HashMap* itemHashMap) {
        this->group = ((const char*) HashMap_get(itemHashMap, ShippingMethodData_GROUP));
        this->tax = ((const char*) HashMap_get(itemHashMap, OrderHistoryData_TAX));
        this->shippingType = ((const char*) HashMap_get(itemHashMap, ShippingMethodData_NAME));
        this->shippingCost = ((const char*) HashMap_get(itemHashMap, ShippingMethodData_COST));
        this->shippedDate = ((const char*) HashMap_get(itemHashMap, OrderHistoryData_SHIPPEDDATE));
        HashMap_put(itemHashMap, StreetAddressData_NAME, HashMap_get(itemHashMap, ShippingAddressData_NAME));
        HashMap_put(itemHashMap, StreetAddressData_STREET, HashMap_get(itemHashMap, ShippingAddressData_STREET));
        HashMap_put(itemHashMap, StreetAddressData_CITY, HashMap_get(itemHashMap, ShippingAddressData_CITY));
        HashMap_put(itemHashMap, StreetAddressData_STATE, HashMap_get(itemHashMap, ShippingAddressData_STATE));
        HashMap_put(itemHashMap, StreetAddressData_CODE, HashMap_get(itemHashMap, ShippingAddressData_CODE));
        HashMap_put(itemHashMap, StreetAddressData_COUNTRY, HashMap_get(itemHashMap, ShippingAddressData_COUNTRY));
        this->shippingAddress = StreetAddress_new(itemHashMap);
}


void Item_setGroup(Item* this, const char* value) {
        this->group = value;
}


void Item_setTax(Item* this, const char* value) {
        this->tax = value;
}


void Item_setShippingType(Item* this, const char* value) {
        this->shippingType = value;
}


void Item_setShippingCost(Item* this, const char* value) {
        this->shippingCost = value;
}


void Item_setShippingAddress(Item* this, StreetAddress* value) {
        this->shippingAddress = value;
}


void Item_setSpecial(Item* this, const char* value) {
        this->special = value;
}


const char* Item_getGroup(Item* this) {
        return this->group;
}


const char* Item_getTax(Item* this) {
        return this->tax;
}


const char* Item_getShippingType(Item* this) {
        return this->shippingType;
}


const char* Item_getShippingCost(Item* this) {
        return this->shippingCost;
}


StreetAddress* Item_getShippingAddress(Item* this) {
        return this->shippingAddress;
}


const char* Item_getSpecial(Item* this) {
        return this->special;
}


HashMap* Item_toHashMap(Item* this) {
        HashMap* hashMap = BasicItem_toHashMap((&this->base));
        HashMap_put(hashMap, ShippingMethodData_GROUP, this->group);
        HashMap_put(hashMap, OrderHistoryData_TAX, this->tax);
        HashMap_put(hashMap, ShippingMethodData_NAME, this->shippingType);
        HashMap_put(hashMap, ShippingMethodData_COST, this->shippingCost);
        HashMap_put(hashMap, OrderHistoryData_SHIPPEDDATE, this->shippedDate);
        HashMap_put(hashMap, EntryData_getInstance()->SPECIAL, this->special);
        return hashMap;
}

