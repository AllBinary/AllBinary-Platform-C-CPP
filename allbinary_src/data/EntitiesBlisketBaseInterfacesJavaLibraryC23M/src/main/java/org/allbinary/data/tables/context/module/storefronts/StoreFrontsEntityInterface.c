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
// package org.allbinary.data.tables.context.module.storefronts

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontInterface.h"
#include "org/allbinary/data/tables/BasicDataTableInterface.h"

typedef struct StoreFrontsEntityInterface StoreFrontsEntityInterface;
struct StoreFrontsEntityInterface {
    StoreFrontInterface* (*getStoreFrontInterface)(void* this, const char* name);
    BasicArrayList* (*getStoreFrontNames)(void* this);
    void (*delete)(void* this, const char* value);
    void (*insert)(void* this, BasicArrayList* values);
    void (*update)(void* this, HashMap* updatedValues);
};


