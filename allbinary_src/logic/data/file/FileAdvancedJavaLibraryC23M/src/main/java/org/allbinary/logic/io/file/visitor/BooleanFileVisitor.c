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
// package org.allbinary.logic.io.file.visitor

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/logic/io/file/AbFile.h"
#include "org/allbinary/logic/util/visitor/VisitorInterface.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/BasicArrayList.h"

typedef struct BooleanFileVisitor BooleanFileVisitor;
struct BooleanFileVisitor {
    VisitorInterface VisitorInterface_interface;
    CommonStrings* commonStrings;
    BasicArrayList* filterStringBasicArrayList;
};


BooleanFileVisitor* BooleanFileVisitor_new(BasicArrayList* filterStringBasicArrayList);

void BooleanFileVisitor_init(BooleanFileVisitor* this, BasicArrayList* filterStringBasicArrayList);
Any* BooleanFileVisitor_visit(BooleanFileVisitor* this, Any* anyType);
bool BooleanFileVisitor_visit(BooleanFileVisitor* this, AbFile* file);
BasicArrayList* BooleanFileVisitor_getFilterStringBasicArrayList(BooleanFileVisitor* this);
void BooleanFileVisitor_setFilterStringBasicArrayList(BooleanFileVisitor* this, BasicArrayList* filterStringBasicArrayList);
bool BooleanFileVisitor_visit(BooleanFileVisitor* this, AbFile* file, const char* fileNameString);

static void BooleanFileVisitor_initFields(BooleanFileVisitor* this) {
    this->commonStrings = CommonStrings_getInstance();
    this->filterStringBasicArrayList = nullptr;
}


void BooleanFileVisitor_init(BooleanFileVisitor* this, BasicArrayList* filterStringBasicArrayList) {
    BooleanFileVisitor_initFields(this);
        BooleanFileVisitor_setFilterStringBasicArrayList(this, filterStringBasicArrayList);
        PreLogUtil_put(java_concat("Filter BasicArrayList: ", JAVA_CALL(BooleanFileVisitor_getFilterStringBasicArrayList(this), toString)), this, this->commonStrings->CONSTRUCTOR);
}

BooleanFileVisitor* BooleanFileVisitor_new(BasicArrayList* filterStringBasicArrayList) {
    BooleanFileVisitor* this = calloc(1, sizeof(BooleanFileVisitor));
    BooleanFileVisitor_init(this, filterStringBasicArrayList);
    return this;
}


Any* BooleanFileVisitor_visit(BooleanFileVisitor* this, Any* anyType) {
        return ((Any*) BooleanFileVisitor_visit(this, ((AbFile*) anyType)));
}


// Java overloaded method: C needs a different name
bool BooleanFileVisitor_visit(BooleanFileVisitor* this, AbFile* file) {
        BasicArrayList* list = BooleanFileVisitor_getFilterStringBasicArrayList(this);
        int32_t size = BasicArrayList_size(list);
        const char* nextFileFilterString = nullptr;
        for (int32_t index = 0; index < size; index++) {
            nextFileFilterString = ((const char*) BasicArrayList_get(list, index));
            if (JAVA_CALL(BooleanFileVisitor_visit(this, file, nextFileFilterString), booleanValue)) {
                return true;
            }
        }
        return false;
}


BasicArrayList* BooleanFileVisitor_getFilterStringBasicArrayList(BooleanFileVisitor* this) {
        return this->filterStringBasicArrayList;
}


void BooleanFileVisitor_setFilterStringBasicArrayList(BooleanFileVisitor* this, BasicArrayList* filterStringBasicArrayList) {
        this->filterStringBasicArrayList = filterStringBasicArrayList;
}


// Java overloaded method: C needs a different name
bool BooleanFileVisitor_visit(BooleanFileVisitor* this, AbFile* file, const char* fileNameString) {
        return false;
}

