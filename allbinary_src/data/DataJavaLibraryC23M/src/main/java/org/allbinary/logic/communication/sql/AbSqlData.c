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

typedef struct AbSqlData AbSqlData;
struct AbSqlData {
    char unused;
};

const char* AbSqlData_ANYSINGLECHARACTERMATCH = "_";
const char* AbSqlData_ANYMULTICHARACTERMATCH = "%";
constexpr int32_t AbSqlData_MAXNUM = 19;
constexpr int32_t AbSqlData_MINSTRING = 1;
constexpr int32_t AbSqlData_MAXSTRING = 255;
constexpr int32_t AbSqlData_MAXBLOB = 32000;

AbSqlData* AbSqlData_new(void);

void AbSqlData_init(AbSqlData* this);


void AbSqlData_init(AbSqlData* this) {
}

AbSqlData* AbSqlData_new(void) {
    AbSqlData* this = calloc(1, sizeof(AbSqlData));
    AbSqlData_init(this);
    return this;
}

