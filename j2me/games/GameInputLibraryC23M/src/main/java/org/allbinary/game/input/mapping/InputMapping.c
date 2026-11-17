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
#include "org/allbinary/game/input/Input.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/util/ABHashtable.h"

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

static void InputMapping_initFields(InputMapping* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->hashtable = StdUtil_createHashtable(StdUtil_getInstance());
    this->mappedList = BasicArrayListD_new();
}


void InputMapping_init(InputMapping* this) {
    InputMapping_initFields(this);
}

InputMapping* InputMapping_new(void) {
    InputMapping* this = calloc(1, sizeof(InputMapping));
    InputMapping_init(this);
    return this;
}


int32_t InputMapping_getTotalMapped(InputMapping* this) {
        return ABHashtable_size(this->hashtable);
}


bool InputMapping_isDefaultNew(InputMapping* this) {
        return false;
}


InputToGameKeyMapping* InputMapping_getDefault(InputMapping* this) {
        return InputToGameKeyMapping_getNullInstance();
}


void InputMapping_removeAll(InputMapping* this) {
        ABHashtable_clear(this->hashtable);
        BasicArrayList_clear(this->mappedList);
}


void InputMapping_remove(InputMapping* this, Input* input, Input* mappedToInput) {
        StringMaker* stringBuffer = StringMaker_new();
        StringUtil* stringUtil = StringUtil_getInstance();
        StringMaker_append(stringBuffer, CommonLabels_getInstance()->START_LABEL);
        StringMaker_append(stringBuffer, StringUtil_toString(stringUtil, input));
        StringMaker_append(stringBuffer, " == ");
        StringMaker_append(stringBuffer, StringUtil_toString(stringUtil, mappedToInput));
        LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, "InputMapping::remove");
        BasicArrayList* list = InputMapping_getMappedInput(this, input);
        if (BasicArrayList_contains(list, mappedToInput)) {
            BasicArrayList_remove(list, mappedToInput);
            BasicArrayList_remove(this->mappedList, mappedToInput);
            StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
            StringMaker_append(stringBuffer, "Removed: ");
            StringMaker_append(stringBuffer, StringUtil_toString(stringUtil, input));
            StringMaker_append(stringBuffer, " == ");
            StringMaker_append(stringBuffer, StringUtil_toString(stringUtil, mappedToInput));
            LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, "InputMapping::remove");
        } else {
            StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
            StringMaker_append(stringBuffer, "Not Deleted: ");
            StringMaker_append(stringBuffer, StringUtil_toString(stringUtil, input));
            StringMaker_append(stringBuffer, " == ");
            StringMaker_append(stringBuffer, StringUtil_toString(stringUtil, mappedToInput));
            LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, "InputMapping::remove");
        }
}


// throws Exception
void InputMapping_addMapping(InputMapping* this, InputToGameKeyMapping* inputToGameKeyMapping) {
        java_throw(java_exception_new("Exception", this->commonStrings->NOT_IMPLEMENTED));
}


void InputMapping_add(InputMapping* this, Input* input, Input* mappedToInput) {
        BasicArrayList* list = InputMapping_getMappedInput(this, input);
        if (!BasicArrayList_contains(list, mappedToInput)) {
            BasicArrayList_add(list, mappedToInput);
            BasicArrayList_add(this->mappedList, mappedToInput);
        }
}


bool InputMapping_isMapped(InputMapping* this, Input* input) {
        return BasicArrayList_contains(this->mappedList, input);
}


BasicArrayList* InputMapping_getMappedInput(InputMapping* this, Input* id) {
        Any* mappingInputCanBeNullList = ABHashtable_get(this->hashtable, id);
        if (mappingInputCanBeNullList == nullptr) {
            BasicArrayList* list = BasicArrayListD_new();
            ABHashtable_put(this->hashtable, id, list);
            return list;
        }
        return ((BasicArrayList*) mappingInputCanBeNullList);
}


ABHashtable* InputMapping_getHashtable(InputMapping* this) {
        return this->hashtable;
}

