#ifndef ORG_ALLBINARY_LOGIC_STRING_TOKENS_TOKENIZER_H
#define ORG_ALLBINARY_LOGIC_STRING_TOKENS_TOKENIZER_H
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
typedef struct TsUtil TsUtil;
typedef struct StdUtil StdUtil;
typedef struct StringUtil StringUtil;
typedef struct ABHashtable ABHashtable;
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListD BasicArrayListD;

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
#define Tokenizer_new1 Tokenizer_new
#define Tokenizer_init1 Tokenizer_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void Tokenizer_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void Tokenizer_register(void);

#if __has_include("org/allbinary/util/ABHashtable.h")
#include "org/allbinary/util/ABHashtable.h"
#endif
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif

#endif // ORG_ALLBINARY_LOGIC_STRING_TOKENS_TOKENIZER_H
