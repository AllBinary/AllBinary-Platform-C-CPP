/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2003 AllBinary 
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
// package org.allbinary.game.layer

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/math/PositionStrings.h"
#include "org/allbinary/util/ABHashtable.h"

typedef struct LayerUtil LayerUtil;
struct LayerUtil {
    char unused;
};

static const char* LayerUtil_HASHTABLE = "Hashtable: ";

LayerUtil* LayerUtil_new(void);
const char* LayerUtil_toString(ABHashtable* hashtable, int32_t x, int32_t y, int32_t z);

void LayerUtil_init(LayerUtil* this) {
}

LayerUtil* LayerUtil_new(void) {
    LayerUtil* this = calloc(1, sizeof(LayerUtil));
    LayerUtil_init(this);
    return this;
}


const char* LayerUtil_toString(ABHashtable* hashtable, int32_t x, int32_t y, int32_t z) {
        CommonSeps* commonSeps = CommonSeps_getInstance();
        PositionStrings* positionStrings = PositionStrings_getInstance();
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, LayerUtil_HASHTABLE);
        StringMaker_append(stringBuffer, StringUtil_toString(StringUtil_getInstance(), hashtable));
        StringMaker_append(stringBuffer, commonSeps->SPACE);
        StringMaker_append(stringBuffer, positionStrings->X_LABEL);
        StringMaker_appendint(stringBuffer, x);
        StringMaker_append(stringBuffer, commonSeps->SPACE);
        StringMaker_append(stringBuffer, positionStrings->Y_LABEL);
        StringMaker_appendint(stringBuffer, y);
        StringMaker_append(stringBuffer, commonSeps->SPACE);
        StringMaker_append(stringBuffer, positionStrings->Z_LABEL);
        StringMaker_appendint(stringBuffer, z);
        return StringMaker_toString(stringBuffer);
}

