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
// package org.allbinary.input.automation.module

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/logic/StdUtil.h"

typedef struct DefaultListModelHelper DefaultListModelHelper;
struct DefaultListModelHelper {
    DefaultListModel* defaultListModel;
    BasicArrayList* vector;
};


DefaultListModelHelper* DefaultListModelHelper_new(void);

void DefaultListModelHelper_init(DefaultListModelHelper* this);
void DefaultListModelHelper_initDefaultModelList(DefaultListModelHelper* this);
ListModel* DefaultListModelHelper_getListModel(DefaultListModelHelper* this);
void DefaultListModelHelper_add(DefaultListModelHelper* this, const char* string);
void DefaultListModelHelper_remove(DefaultListModelHelper* this, const char* string);

static void DefaultListModelHelper_initFields(DefaultListModelHelper* this) {
    
    
}


void DefaultListModelHelper_init(DefaultListModelHelper* this) {
    DefaultListModelHelper_initFields(this);
        this->vector = BasicArrayListD_new();
        this->defaultListModel = DefaultListModel_new();
}

DefaultListModelHelper* DefaultListModelHelper_new(void) {
    DefaultListModelHelper* this = calloc(1, sizeof(DefaultListModelHelper));
    DefaultListModelHelper_init(this);
    return this;
}


void DefaultListModelHelper_initDefaultModelList(DefaultListModelHelper* this) {
        this->defaultListModel = DefaultListModel_new();
        int32_t size = BasicArrayList_size(this->vector);
        for (int32_t index = 0; index < size; index++) {
            const char* moduleName = ((const char*) BasicArrayList_get(this->vector, index));
            DefaultListModel_addElement(this->defaultListModel, moduleName);
        }
}


ListModel* DefaultListModelHelper_getListModel(DefaultListModelHelper* this) {
        return ((ListModel*) this->defaultListModel);
}


void DefaultListModelHelper_add(DefaultListModelHelper* this, const char* string) {
        BasicArrayList_add(this->vector, string);
}


void DefaultListModelHelper_remove(DefaultListModelHelper* this, const char* string) {
        BasicArrayList_remove(this->vector, string);
}

