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
// package org.allbinary.game.paint.help

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/string/StringUtil.h"

typedef struct UpdateMyFontProperties UpdateMyFontProperties;
struct UpdateMyFontProperties {
    const char** actionStringArray;
    int32_t* keymappingBeginWidthArray;
    int32_t* actionStringDeltaXArray;
    int32_t** inputDeltaXArray;
    const char*** sepArray;
    int32_t** sepWidthArray;
    int32_t charHeight;
};


UpdateMyFontProperties* UpdateMyFontProperties_new(void);

static void UpdateMyFontProperties_initFields(UpdateMyFontProperties* this) {
    this->actionStringArray = StringUtil_getArrayInstance(StringUtil_getInstance());
    this->keymappingBeginWidthArray = NullUtil_getInstance()->NULL_INT_ARRAY;
    this->actionStringDeltaXArray = NullUtil_getInstance()->NULL_INT_ARRAY;
    this->inputDeltaXArray = NullUtil_getInstance()->NULL_INT_ARRAY_ARRAY;
    this->sepArray = StringUtil_getInstance()->ONE_EMPTY_STRING_ARRAY_OF_ARRAYS;
    this->sepWidthArray = NullUtil_getInstance()->NULL_INT_ARRAY_ARRAY;
    this->charHeight = 0;
}

void UpdateMyFontProperties_init(UpdateMyFontProperties* this) {
    UpdateMyFontProperties_initFields(this);
}

UpdateMyFontProperties* UpdateMyFontProperties_new(void) {
    UpdateMyFontProperties* this = calloc(1, sizeof(UpdateMyFontProperties));
    UpdateMyFontProperties_init(this);
    return this;
}

