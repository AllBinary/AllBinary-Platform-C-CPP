#ifndef ORG_ALLBINARY_GAME_INPUT_MAPPING_INPUTMAPPING_H
#define ORG_ALLBINARY_GAME_INPUT_MAPPING_INPUTMAPPING_H
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
// package org.allbinary.game.input.mapping

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct InputToGameKeyMapping InputToGameKeyMapping;
typedef struct Input Input;
typedef struct LogUtil LogUtil;
typedef struct StringMaker StringMaker;
typedef struct StringUtil StringUtil;
typedef struct CommonLabels CommonLabels;
typedef struct CommonStrings CommonStrings;
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListD BasicArrayListD;
typedef struct StdUtil StdUtil;
typedef struct ABHashtable ABHashtable;
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#if __has_include("org/allbinary/string/CommonStrings.h")
#include "org/allbinary/string/CommonStrings.h"
#endif
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif
#if __has_include("org/allbinary/util/ABHashtable.h")
#include "org/allbinary/util/ABHashtable.h"
#endif

typedef struct InputMapping InputMapping;
struct InputMapping {
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    ABHashtable* hashtable;
    BasicArrayList* mappedList;
};


InputMapping* InputMapping_new(void);

void InputMapping_init(InputMapping* this);

int32_t InputMapping_getTotalMapped(InputMapping* this);

bool InputMapping_isDefaultNew(InputMapping* this);

InputToGameKeyMapping* InputMapping_getDefault(InputMapping* this);

void InputMapping_removeAll(InputMapping* this);

void InputMapping_remove(InputMapping* this, Input* input, Input* mappedToInput);

void InputMapping_addMapping(InputMapping* this, InputToGameKeyMapping* inputToGameKeyMapping);

void InputMapping_add(InputMapping* this, Input* input, Input* mappedToInput);

bool InputMapping_isMapped(InputMapping* this, Input* input);

BasicArrayList* InputMapping_getMappedInput(InputMapping* this, Input* id);

ABHashtable* InputMapping_getHashtable(InputMapping* this);
#define InputMapping_new0 InputMapping_new
#define InputMapping_init0 InputMapping_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void InputMapping_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void InputMapping_register(void);

#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif
#if __has_include("org/allbinary/util/ABHashtable.h")
#include "org/allbinary/util/ABHashtable.h"
#endif

#endif // ORG_ALLBINARY_GAME_INPUT_MAPPING_INPUTMAPPING_H
