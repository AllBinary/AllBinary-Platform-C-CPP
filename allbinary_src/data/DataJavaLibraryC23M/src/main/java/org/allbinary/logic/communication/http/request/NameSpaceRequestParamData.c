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
// package org.allbinary.logic.communication.http.request

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct NameSpaceRequestParamData NameSpaceRequestParamData;
struct NameSpaceRequestParamData {
    char unused;
};

const char* NameSpaceRequestParamData_NAME = "NAMESPACE_REQUESTDATA_NAME";
const char* NameSpaceRequestParamData_VALUE = "INPUT_VALUE";
const char* NameSpaceRequestParamData_PROPERTIES = "_PROPERTIES_";
const char* NameSpaceRequestParamData_SEP = "_DOT_";
const char* NameSpaceRequestParamData_PROPERTIESSEPARATOR = "_PROPDOT_";
const char* NameSpaceRequestParamData_DOCUMENT = "NAMESPACE_REQUESTDATA_DOCUMENT";

NameSpaceRequestParamData* NameSpaceRequestParamData_new(void);

void NameSpaceRequestParamData_init(NameSpaceRequestParamData* this);


void NameSpaceRequestParamData_init(NameSpaceRequestParamData* this) {
}

NameSpaceRequestParamData* NameSpaceRequestParamData_new(void) {
    NameSpaceRequestParamData* this = calloc(1, sizeof(NameSpaceRequestParamData));
    NameSpaceRequestParamData_init(this);
    return this;
}

