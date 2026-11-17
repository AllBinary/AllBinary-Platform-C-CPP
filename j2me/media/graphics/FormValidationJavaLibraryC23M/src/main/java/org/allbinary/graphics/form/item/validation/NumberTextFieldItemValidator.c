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
// package org.allbinary.graphics.form.item.validation

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/graphics/form/item/ABTextFieldItem.h"
#include "org/allbinary/logic/control/validate/ValidatorBase.h"
#include "org/allbinary/logic/java/bool/BooleanFactory.h"
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"

typedef struct NumberTextFieldItemValidator NumberTextFieldItemValidator;
struct NumberTextFieldItemValidator {
    ValidatorBase base;
    ABTextFieldItem* textFieldItem;
    int32_t min;
    int32_t max;
    int32_t maxChars;
};


NumberTextFieldItemValidator* NumberTextFieldItemValidator_new(ABTextFieldItem* textFieldItem, int32_t maxChars, int32_t min, int32_t max);

void NumberTextFieldItemValidator_init(NumberTextFieldItemValidator* this, ABTextFieldItem* textFieldItem, int32_t maxChars, int32_t min, int32_t max);
bool NumberTextFieldItemValidator_isNumberValid(NumberTextFieldItemValidator* this, int32_t value);
BasicArrayList* NumberTextFieldItemValidator_toNumberVector(NumberTextFieldItemValidator* this, int32_t value);
bool NumberTextFieldItemValidator_isValid(NumberTextFieldItemValidator* this);
BasicArrayList* NumberTextFieldItemValidator_toList(NumberTextFieldItemValidator* this);

static void NumberTextFieldItemValidator_initFields(NumberTextFieldItemValidator* this) {
    
    
    
    
}


void NumberTextFieldItemValidator_init(NumberTextFieldItemValidator* this, ABTextFieldItem* textFieldItem, int32_t maxChars, int32_t min, int32_t max) {
    ValidatorBase_init(&this->base);
    NumberTextFieldItemValidator_initFields(this);
        this->textFieldItem = textFieldItem;
        this->min = min;
        this->max = max;
        this->maxChars = maxChars;
}

NumberTextFieldItemValidator* NumberTextFieldItemValidator_new(ABTextFieldItem* textFieldItem, int32_t maxChars, int32_t min, int32_t max) {
    NumberTextFieldItemValidator* this = calloc(1, sizeof(NumberTextFieldItemValidator));
    NumberTextFieldItemValidator_init(this, textFieldItem, maxChars, min, max);
    return this;
}


bool NumberTextFieldItemValidator_isNumberValid(NumberTextFieldItemValidator* this, int32_t value) {
        return BooleanFactory_getInstance()->TRUE;
}


BasicArrayList* NumberTextFieldItemValidator_toNumberVector(NumberTextFieldItemValidator* this, int32_t value) {
        return BasicArrayListD_new();
}


bool NumberTextFieldItemValidator_isValid(NumberTextFieldItemValidator* this) {
        bool result = BooleanFactory_getInstance()->TRUE;
        const char* string = ABTextFieldItem_getString(this->textFieldItem);
        int32_t textLength = ((int32_t) strlen(string));
        if (textLength > 0 && textLength < this->maxChars) {
            JAVA_TRY {
                ((int32_t) strtol(ABTextFieldItem_getString(this->textFieldItem), nullptr, 10));
            } JAVA_CATCH(NumberFormatException, e) {
                result = BooleanFactory_getInstance()->FALSE;
            } JAVA_END_TRY;
        } else {
            if (textLength < 1) {
                result = BooleanFactory_getInstance()->FALSE;
            } else if (textLength > this->maxChars) {
                result = BooleanFactory_getInstance()->FALSE;
            }
        }
        return result;
}


BasicArrayList* NumberTextFieldItemValidator_toList(NumberTextFieldItemValidator* this) {
        BasicArrayList* list = BasicArrayListD_new();
        const char* string = ABTextFieldItem_getString(this->textFieldItem);
        int32_t textLength = ((int32_t) strlen(string));
        const char* label = ABTextFieldItem_getLabel(this->textFieldItem);
        const char* name = java_substring(label, 0, ((int32_t) strlen(label)) - 2);
        SmallIntegerSingletonFactory* smallIntegerSingletonFactory = SmallIntegerSingletonFactory_getInstance();
        StringMaker* stringMaker = StringMaker_new();
        if (textLength > 0 && textLength < this->maxChars) {
            JAVA_TRY {
                int32_t number = SmallIntegerSingletonFactory_createInstance(smallIntegerSingletonFactory, ((int32_t) strtol(ABTextFieldItem_getString(this->textFieldItem), nullptr, 10)));
                if (Integer_intValue(number) > this->min) {
                    StringMaker_delete(stringMaker, 0, StringMaker_length(stringMaker));
                    BasicArrayList_add(list, JAVA_CALL(JAVA_CALL(StringMaker_append(stringMaker, name), append, " is to small"), toString));
                } else if (Integer_intValue(number) > this->max) {
                    StringMaker_delete(stringMaker, 0, StringMaker_length(stringMaker));
                    BasicArrayList_add(list, JAVA_CALL(JAVA_CALL(StringMaker_append(stringMaker, name), append, " is to large"), toString));
                }
            } JAVA_CATCH(NumberFormatException, e) {
                StringMaker_delete(stringMaker, 0, StringMaker_length(stringMaker));
                BasicArrayList_add(list, JAVA_CALL(JAVA_CALL(StringMaker_append(stringMaker, name), append, " is not a number"), toString));
            } JAVA_END_TRY;
        } else {
            if (textLength < 1) {
                StringMaker_delete(stringMaker, 0, StringMaker_length(stringMaker));
                BasicArrayList_add(list, JAVA_CALL(JAVA_CALL(StringMaker_append(stringMaker, name), append, " is to short"), toString));
            } else if (textLength > this->maxChars) {
                StringMaker_delete(stringMaker, 0, StringMaker_length(stringMaker));
                BasicArrayList_add(list, JAVA_CALL(JAVA_CALL(StringMaker_append(stringMaker, name), append, " is to long"), toString));
            }
        }
        return list;
}

