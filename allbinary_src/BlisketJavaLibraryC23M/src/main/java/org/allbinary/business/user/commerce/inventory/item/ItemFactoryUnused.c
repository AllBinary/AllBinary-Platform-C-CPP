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
// #include "javax/servlet/http/HttpServletRequest.h"
#include "org/allbinary/business/user/commerce/money/MoneyException.h"
#include "org/allbinary/data/tables/TableMappingInterface.h"
#include "org/allbinary/logic/communication/http/request/RequestParams.h"

typedef struct ItemFactoryUnused ItemFactoryUnused;
struct ItemFactoryUnused {
    char unused;
};


ItemFactoryUnused* ItemFactoryUnused_new(void);

void ItemFactoryUnused_init(ItemFactoryUnused* this);
TableMappingInterface* ItemFactoryUnused_getInstance(HashMap* hashMap);
TableMappingInterface* ItemFactoryUnused_getInstance(HttpServletRequest* request);


void ItemFactoryUnused_init(ItemFactoryUnused* this) {
}

ItemFactoryUnused* ItemFactoryUnused_new(void) {
    ItemFactoryUnused* this = calloc(1, sizeof(ItemFactoryUnused));
    ItemFactoryUnused_init(this);
    return this;
}


// throws MoneyException
TableMappingInterface* ItemFactoryUnused_getInstance(HashMap* hashMap) {
        return ((TableMappingInterface*) Item_new(hashMap));
}


// throws Exception, MoneyException
// Java overloaded method: C needs a different name
TableMappingInterface* ItemFactoryUnused_getInstance(HttpServletRequest* request) {
        return ((TableMappingInterface*) Item_new(RequestParams_toHashMap(RequestParams_new(request))));
}

