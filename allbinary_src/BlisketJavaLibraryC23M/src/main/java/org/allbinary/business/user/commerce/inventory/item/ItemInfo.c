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

typedef struct ItemInfo ItemInfo;
struct ItemInfo {
    const char** type;
    const char** view;
    const char** data;
    const char** creationDate;
    const char** lastModified;
};


ItemInfo* ItemInfo_new(void);

void ItemInfo_init(ItemInfo* this);

static void ItemInfo_initFields(ItemInfo* this) {
    this->type = nullptr;
    this->view = nullptr;
    this->data = nullptr;
    this->creationDate = nullptr;
    this->lastModified = nullptr;
}


void ItemInfo_init(ItemInfo* this) {
    ItemInfo_initFields(this);
}

ItemInfo* ItemInfo_new(void) {
    ItemInfo* this = calloc(1, sizeof(ItemInfo));
    ItemInfo_init(this);
    return this;
}

