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
#include "admin/taghelpers/TableInterface.h"

typedef struct Table Table;
struct Table {
    TableInterface TableInterface_interface;
    CommonStrings* commonStrings;
};


Table* Table_new(void);
const char* Table_drop(Table* this);
const char* Table_create(Table* this);
const char* Table_restore(Table* this);
const char* Table_backup(Table* this);
const char* Table_insert(Table* this);
const char* Table_delete(Table* this);
const char* Table_update(Table* this);

static void Table_initFields(Table* this) {
    this->commonStrings = CommonStrings_getInstance();
}

void Table_init(Table* this) {
    Table_initFields(this);
}

Table* Table_new(void) {
    Table* this = calloc(1, sizeof(Table));
    Table_init(this);
    return this;
}


// throws Exception
const char* Table_drop(Table* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


// throws Exception
const char* Table_create(Table* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


// throws Exception
const char* Table_restore(Table* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


// throws Exception
const char* Table_backup(Table* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


// throws Exception
const char* Table_insert(Table* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


// throws Exception
const char* Table_delete(Table* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


// throws Exception
const char* Table_update(Table* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}

