/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2025 AllBinary 
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
// package admin.taghelpers

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/string/CommonStrings.h"
#include "tags/TagStrings.h"
#include "admin/taghelpers/ModifyTableInterface.h"

typedef struct ModifyTable ModifyTable;
struct ModifyTable {
    ModifyTableInterface ModifyTableInterface_interface;
    CommonStrings* commonStrings;
    TagStrings* tagStrings;
};


ModifyTable* ModifyTable_new(void);
const char* ModifyTable_insert(ModifyTable* this);
const char* ModifyTable_delete(ModifyTable* this);
const char* ModifyTable_update(ModifyTable* this);

static void ModifyTable_initFields(ModifyTable* this) {
    this->commonStrings = CommonStrings_getInstance();
    this->tagStrings = TagStrings_getInstance();
}

void ModifyTable_init(ModifyTable* this) {
    ModifyTable_initFields(this);
}

ModifyTable* ModifyTable_new(void) {
    ModifyTable* this = calloc(1, sizeof(ModifyTable));
    ModifyTable_init(this);
    return this;
}


// throws Exception
const char* ModifyTable_insert(ModifyTable* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


// throws Exception
const char* ModifyTable_delete(ModifyTable* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


// throws Exception
const char* ModifyTable_update(ModifyTable* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}

