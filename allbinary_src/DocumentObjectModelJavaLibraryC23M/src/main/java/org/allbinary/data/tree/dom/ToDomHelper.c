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
// package org.allbinary.data.tree.dom

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/string/StringUtil.h"

typedef struct ToDomHelper ToDomHelper;
struct ToDomHelper {
    char unused;
};


ToDomHelper* ToDomHelper_new(void);

void ToDomHelper_init(ToDomHelper* this);
const char* ToDomHelper_convertNull(const char* value);


void ToDomHelper_init(ToDomHelper* this) {
}

ToDomHelper* ToDomHelper_new(void) {
    ToDomHelper* this = calloc(1, sizeof(ToDomHelper));
    ToDomHelper_init(this);
    return this;
}


const char* ToDomHelper_convertNull(const char* value) {
        if (value == nullptr) {
            value = StringUtil_getInstance()->NULL_STRING;
        }
        return value;
}

