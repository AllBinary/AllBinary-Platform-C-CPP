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
// package org.allbinary.logic.string

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/io/path/AbPathData.h"
#include "org/allbinary/logic/math/MathData.h"
#include "org/allbinary/string/CommonPhoneStrings.h"
#include "org/allbinary/string/CommonSeps.h"

typedef struct SpecialCharacterUtil SpecialCharacterUtil;
struct SpecialCharacterUtil {
    char unused;
};


SpecialCharacterUtil* SpecialCharacterUtil_new(void);
HashMap* SpecialCharacterUtil_getHashMap(void);

void SpecialCharacterUtil_init(SpecialCharacterUtil* this) {
}

SpecialCharacterUtil* SpecialCharacterUtil_new(void) {
    SpecialCharacterUtil* this = calloc(1, sizeof(SpecialCharacterUtil));
    SpecialCharacterUtil_init(this);
    return this;
}


HashMap* SpecialCharacterUtil_getHashMap(void) {
        CommonSeps* commonSeps = CommonSeps_getInstance();
        CommonPhoneStrings* commonPhoneStrings = CommonPhoneStrings_getInstance();
        StringUtil* stringUtil = StringUtil_getInstance();
        HashMap* hashMap = StdUtil_createHashMap(StdUtil_getInstance());
        HashMap_put(hashMap, "!", stringUtil->EMPTY_STRING);
        HashMap_put(hashMap, "@", stringUtil->EMPTY_STRING);
        HashMap_put(hashMap, commonPhoneStrings->POUND, stringUtil->EMPTY_STRING);
        HashMap_put(hashMap, "$", stringUtil->EMPTY_STRING);
        HashMap_put(hashMap, "%", stringUtil->EMPTY_STRING);
        HashMap_put(hashMap, "^", stringUtil->EMPTY_STRING);
        HashMap_put(hashMap, commonSeps->AMPERSAND, stringUtil->EMPTY_STRING);
        HashMap_put(hashMap, commonPhoneStrings->STAR, stringUtil->EMPTY_STRING);
        HashMap_put(hashMap, commonSeps->PARENTHESIS_OPEN, stringUtil->EMPTY_STRING);
        HashMap_put(hashMap, commonSeps->PARENTHESIS_CLOSE, stringUtil->EMPTY_STRING);
        HashMap_put(hashMap, commonSeps->DASH, stringUtil->EMPTY_STRING);
        HashMap_put(hashMap, commonSeps->UNDERSCORE, stringUtil->EMPTY_STRING);
        HashMap_put(hashMap, MathData_getInstance()->PLUS, stringUtil->EMPTY_STRING);
        HashMap_put(hashMap, commonSeps->EQUALS, stringUtil->EMPTY_STRING);
        HashMap_put(hashMap, "\\", stringUtil->EMPTY_STRING);
        HashMap_put(hashMap, "|", stringUtil->EMPTY_STRING);
        HashMap_put(hashMap, AbPathData_getInstance()->EXTENSION_SEP, stringUtil->EMPTY_STRING);
        HashMap_put(hashMap, ",", stringUtil->EMPTY_STRING);
        HashMap_put(hashMap, "<", stringUtil->EMPTY_STRING);
        HashMap_put(hashMap, ">", stringUtil->EMPTY_STRING);
        HashMap_put(hashMap, "?", stringUtil->EMPTY_STRING);
        HashMap_put(hashMap, AbPathData_getInstance()->SEPARATOR, stringUtil->EMPTY_STRING);
        HashMap_put(hashMap, "~", stringUtil->EMPTY_STRING);
        HashMap_put(hashMap, "`", stringUtil->EMPTY_STRING);
        return hashMap;
}

