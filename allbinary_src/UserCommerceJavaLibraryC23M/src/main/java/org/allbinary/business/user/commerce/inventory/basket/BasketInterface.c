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
// #include "java/util/HashMap.h"
// #include "java/util/Set.h"
#include "org/allbinary/business/user/commerce/money/Money.h"
#include "org/allbinary/business/user/commerce/money/MoneyException.h"

typedef struct BasketInterface BasketInterface;
struct BasketInterface {
    void (*addItem)(void* this, const char* id, const char* num);
    void (*removeItem)(void* this, const char* id);
    void (*adjustItem)(void* this, const char* id, const char* num);
    const char* (*getTotalWeight)(void* this);
    int32_t (*getNumberOfItems)(void* this);
    Set* (*getIds)(void* this);
    HashMap* (*getItems)(void* this);
    int32_t (*getNumberOf)(void* this, const char* product);
    Money* (*getSubTotal)(void* this);
};


