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
// package org.allbinary.logic.communication.sql

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/business/installer/Portion.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct AbSqlTableUtil AbSqlTableUtil;
struct AbSqlTableUtil {
    const char* TABLE_LABEL;
    StringUtil* stringUtil;
    CommonStrings* commonStrings;
    CommonSeps* commonSeps;
    SqlStrings* sqlStrings;
};

static AbSqlTableUtil* AbSqlTableUtil_instance;

AbSqlTableUtil* AbSqlTableUtil_new(void);
AbSqlTableUtil* AbSqlTableUtil_getInstance(void);
const char* AbSqlTableUtil_backupTable(AbSqlTableUtil* this, AbSqlTable* abSqlTable);
const char* AbSqlTableUtil_restoreTable(AbSqlTableUtil* this, AbSqlTable* abSqlTable, Portion* portion);

// Static fields with runtime initializers: call this once at startup
void AbSqlTableUtil_staticInit(void) {
    AbSqlTableUtil_instance = AbSqlTableUtil_new();
}

static void AbSqlTableUtil_initFields(AbSqlTableUtil* this) {
    this->TABLE_LABEL = "Table: ";
    this->stringUtil = StringUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->commonSeps = CommonSeps_getInstance();
    this->sqlStrings = SqlStrings_getInstance();
}

void AbSqlTableUtil_init(AbSqlTableUtil* this) {
    AbSqlTableUtil_initFields(this);
}

AbSqlTableUtil* AbSqlTableUtil_new(void) {
    AbSqlTableUtil* this = calloc(1, sizeof(AbSqlTableUtil));
    AbSqlTableUtil_init(this);
    return this;
}


AbSqlTableUtil* AbSqlTableUtil_getInstance(void) {
        return AbSqlTableUtil_instance;
}


// synchronized
const char* AbSqlTableUtil_backupTable(AbSqlTableUtil* this, AbSqlTable* abSqlTable) {
        const char* tableName = AbSqlTable_getTableName(abSqlTable);
        return java_concat(java_concat(this->TABLE_LABEL, tableName), " Backup Failed");
}


// synchronized
const char* AbSqlTableUtil_restoreTable(AbSqlTableUtil* this, AbSqlTable* abSqlTable, Portion* portion) {
        const char* tableName = AbSqlTable_getTableName(abSqlTable);
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, this->TABLE_LABEL);
        StringMaker_append(stringBuffer, tableName);
        StringMaker_append(stringBuffer, " Restoration Failed");
        return StringMaker_toString(stringBuffer);
}

