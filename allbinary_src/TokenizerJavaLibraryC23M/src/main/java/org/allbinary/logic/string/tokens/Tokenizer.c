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
// package org.allbinary.logic.string.tokens

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/TsUtil.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"

typedef struct Tokenizer Tokenizer;
struct Tokenizer {
    const char* sep;
    const char* endSep;
};


Tokenizer* Tokenizer_new(const char* sep);

void Tokenizer_init(Tokenizer* this, const char* sep);
void Tokenizer_setSep(Tokenizer* this, const char* sep);
void Tokenizer_setEndSep(Tokenizer* this, const char* endSep);
BasicArrayList* Tokenizer_getInsideSep(Tokenizer* this, const char* string);
BasicArrayList* Tokenizer_getTokensFromString(Tokenizer* this, const char* string, BasicArrayList* tokenVector);
ABHashtable* Tokenizer_getTokens(Tokenizer* this, BasicArrayList* stringVector);

static void Tokenizer_initFields(Tokenizer* this) {
    
    this->endSep = StringUtil_getInstance()->EMPTY_STRING;
}


void Tokenizer_init(Tokenizer* this, const char* sep) {
    Tokenizer_initFields(this);
        if (TsUtil_compareTo(TsUtil_getInstance(), sep, StringUtil_getInstance()->EMPTY_STRING) == 0) {
            java_throw(java_exception_new("Exception", "Sep provided is not valid"));
        }
        this->sep = sep;
}

Tokenizer* Tokenizer_new(const char* sep) {
    Tokenizer* this = calloc(1, sizeof(Tokenizer));
    Tokenizer_init(this, sep);
    return this;
}


void Tokenizer_setSep(Tokenizer* this, const char* sep) {
        this->sep = sep;
}


void Tokenizer_setEndSep(Tokenizer* this, const char* endSep) {
        this->endSep = endSep;
}


BasicArrayList* Tokenizer_getInsideSep(Tokenizer* this, const char* string) {
        BasicArrayList* tokenList = BasicArrayListD_new();
        int32_t index = 0;
        int32_t size = ((int32_t) strlen(string));
        while (index < size) {
            index = java_string_indexOf(string, this->sep, index);
            if (index != -1) {
                int32_t end = java_string_indexOf(string, this->endSep, index + ((int32_t) strlen(this->sep)));
                if (end != -1) {
                    BasicArrayList_add(tokenList, java_substring(string, index + ((int32_t) strlen(this->sep)), end - (((int32_t) strlen(this->endSep)) - 1)));
                    index = end + ((int32_t) strlen(this->endSep));
                } else {
                }
            } else {
                break;
            }
        }
        return tokenList;
}


BasicArrayList* Tokenizer_getTokensFromString(Tokenizer* this, const char* string, BasicArrayList* tokenVector) {
        int32_t index = 0;
        int32_t end = 0;
        while (index < ((int32_t) strlen(string))) {
            end = java_string_indexOf(string, this->sep, index);
            if (end != -1) {
                BasicArrayList_add(tokenVector, java_substring(string, index, end));
                index = end + ((int32_t) strlen(this->sep));
            } else {
                BasicArrayList_add(tokenVector, java_substring(string, index, ((int32_t) strlen(string))));
                break;
            }
        }
        return tokenVector;
}


ABHashtable* Tokenizer_getTokens(Tokenizer* this, BasicArrayList* stringVector) {
        ABHashtable* tokenHashtable = StdUtil_createHashtable(StdUtil_getInstance());
        const char* string = StringUtil_getInstance()->EMPTY_STRING;
        int32_t end = 0;
        int32_t size = BasicArrayList_size(stringVector);
        for (int32_t index = 0; index < size; index++) {
            string = ((const char*) stringVector->objectArray[index]);
            end = java_string_indexOf(string, this->sep);
            if (end >= 0) {
                ABHashtable_put(tokenHashtable, java_substring(string, 0, end), java_substring(string, end + 1, ((int32_t) strlen(string))));
            }
        }
        return tokenHashtable;
}

