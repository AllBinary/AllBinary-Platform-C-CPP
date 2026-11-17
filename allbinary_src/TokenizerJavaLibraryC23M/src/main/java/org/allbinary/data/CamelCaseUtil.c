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
// package org.allbinary.data

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/string/StringValidationUtil.h"
#include "org/allbinary/logic/string/tokens/Tokenizer.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"

typedef struct CamelCaseUtil CamelCaseUtil;
struct CamelCaseUtil {
    CommonSeps* commonSeps;
};

static CamelCaseUtil* CamelCaseUtil_instance;

CamelCaseUtil* CamelCaseUtil_new(void);
CamelCaseUtil* CamelCaseUtil_getInstance(void);
const char* CamelCaseUtil_getAsCamelCase(CamelCaseUtil* this, const char* string, StringMaker* stringBuilder);

// Static fields with runtime initializers: call this once at startup
void CamelCaseUtil_staticInit(void) {
    CamelCaseUtil_instance = CamelCaseUtil_new();
}

static void CamelCaseUtil_initFields(CamelCaseUtil* this) {
    this->commonSeps = CommonSeps_getInstance();
}

void CamelCaseUtil_init(CamelCaseUtil* this) {
    CamelCaseUtil_initFields(this);
}

CamelCaseUtil* CamelCaseUtil_new(void) {
    CamelCaseUtil* this = calloc(1, sizeof(CamelCaseUtil));
    CamelCaseUtil_init(this);
    return this;
}


CamelCaseUtil* CamelCaseUtil_getInstance(void) {
        return CamelCaseUtil_instance;
}


// throws Exception
const char* CamelCaseUtil_getAsCamelCase(CamelCaseUtil* this, const char* string, StringMaker* stringBuilder) {
        StringValidationUtil* stringValidationUtil = StringValidationUtil_getInstance();
        StringMaker_delete(stringBuilder, 0, StringMaker_length(stringBuilder));
        BasicArrayList* list = BasicArrayListD_new();
        Tokenizer* tokenizer = Tokenizer_new(this->commonSeps->UNDERSCORE);
        Tokenizer_getTokensFromString(tokenizer, string, list);
        int32_t size = BasicArrayList_size(list);
        const char* word = nullptr;
        for (int32_t i = 0; i < size; i++) {
            word = ((const char*) BasicArrayList_get(list, i));
            word = (StringValidationUtil_isEmpty(stringValidationUtil, word) ? word : JAVA_CALL(JAVA_CALL(StringMaker_appendchar(StringMaker_new(), ((uint16_t) toupper(((uint16_t) word[0])))), append, java_string_toLowerCase(java_substring(word, 1, (int32_t) strlen(word)))), toString));
            StringMaker_append(stringBuilder, word);
        }
        return StringMaker_toString(stringBuilder);
}

