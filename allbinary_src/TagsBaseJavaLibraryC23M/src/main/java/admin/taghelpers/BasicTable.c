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
#include "admin/taghelpers/BasicTableInterface.h"

typedef struct BasicTable BasicTable;
struct BasicTable {
    BasicTableInterface BasicTableInterface_interface;
    CommonStrings* commonStrings;
};


BasicTable* BasicTable_new(void);
const char* BasicTable_drop(BasicTable* this);
const char* BasicTable_create(BasicTable* this);
const char* BasicTable_restore(BasicTable* this);
const char* BasicTable_backup(BasicTable* this);

static void BasicTable_initFields(BasicTable* this) {
    this->commonStrings = CommonStrings_getInstance();
}

void BasicTable_init(BasicTable* this) {
    BasicTable_initFields(this);
}

BasicTable* BasicTable_new(void) {
    BasicTable* this = calloc(1, sizeof(BasicTable));
    BasicTable_init(this);
    return this;
}


// throws Exception
const char* BasicTable_drop(BasicTable* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


// throws Exception
const char* BasicTable_create(BasicTable* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


// throws Exception
const char* BasicTable_restore(BasicTable* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


// throws Exception
const char* BasicTable_backup(BasicTable* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}

