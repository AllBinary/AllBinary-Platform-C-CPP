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
// package views.generic.inventory

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/string/StringMaker.h"

typedef struct InventorySearchLoopInfo InventorySearchLoopInfo;
struct InventorySearchLoopInfo {
    int32_t lastPage;
    int32_t currentPage;
    int32_t numberOfResultsOnCurrentPage;
    int32_t numberOfResults;
    const char* CURRENT;
    const char* NUM;
    const char* LAST;
};


InventorySearchLoopInfo* InventorySearchLoopInfo_new(void);
const char* InventorySearchLoopInfo_toString(InventorySearchLoopInfo* this);

static void InventorySearchLoopInfo_initFields(InventorySearchLoopInfo* this) {
    this->lastPage = -1;
    this->currentPage = -1;
    this->numberOfResultsOnCurrentPage = 0;
    this->numberOfResults = 0;
    this->CURRENT = "current: ";
    this->NUM = " num: ";
    this->LAST = " last: ";
}

void InventorySearchLoopInfo_init(InventorySearchLoopInfo* this) {
    InventorySearchLoopInfo_initFields(this);
}

InventorySearchLoopInfo* InventorySearchLoopInfo_new(void) {
    InventorySearchLoopInfo* this = calloc(1, sizeof(InventorySearchLoopInfo));
    InventorySearchLoopInfo_init(this);
    return this;
}


const char* InventorySearchLoopInfo_toString(InventorySearchLoopInfo* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, this->CURRENT);
        StringMaker_appendint(stringBuffer, this->currentPage);
        StringMaker_append(stringBuffer, this->NUM);
        StringMaker_appendint(stringBuffer, this->numberOfResults);
        StringMaker_append(stringBuffer, this->LAST);
        StringMaker_appendint(stringBuffer, this->lastPage);
        return StringMaker_toString(stringBuffer);
}

