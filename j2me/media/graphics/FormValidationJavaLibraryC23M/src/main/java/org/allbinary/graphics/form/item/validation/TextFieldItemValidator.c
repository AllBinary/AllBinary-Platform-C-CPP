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
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"

typedef struct TextFieldItemValidator TextFieldItemValidator;
struct TextFieldItemValidator {
    ValidatorBase base;
    ABTextFieldItem* textFieldItem;
    int32_t min;
    int32_t max;
    bool allowOnEmpty;
};


TextFieldItemValidator* TextFieldItemValidator_new(ABTextFieldItem* textFieldItem, int32_t min, int32_t max, bool allowOnEmpty);

void TextFieldItemValidator_init(TextFieldItemValidator* this, ABTextFieldItem* textFieldItem, int32_t min, int32_t max, bool allowOnEmpty);
bool TextFieldItemValidator_isValid(TextFieldItemValidator* this);
BasicArrayList* TextFieldItemValidator_toList(TextFieldItemValidator* this);

static void TextFieldItemValidator_initFields(TextFieldItemValidator* this) {
    
    
    
    
}


void TextFieldItemValidator_init(TextFieldItemValidator* this, ABTextFieldItem* textFieldItem, int32_t min, int32_t max, bool allowOnEmpty) {
    ValidatorBase_init(&this->base);
    TextFieldItemValidator_initFields(this);
        this->textFieldItem = textFieldItem;
        this->min = min;
        this->max = max;
        this->allowOnEmpty = allowOnEmpty;
}

TextFieldItemValidator* TextFieldItemValidator_new(ABTextFieldItem* textFieldItem, int32_t min, int32_t max, bool allowOnEmpty) {
    TextFieldItemValidator* this = calloc(1, sizeof(TextFieldItemValidator));
    TextFieldItemValidator_init(this, textFieldItem, min, max, allowOnEmpty);
    return this;
}


bool TextFieldItemValidator_isValid(TextFieldItemValidator* this) {
        BooleanFactory* booleanFactory = BooleanFactory_getInstance();
        bool result = booleanFactory->TRUE;
        const char* string = ABTextFieldItem_getString(this->textFieldItem);
        int32_t textLength = ((int32_t) strlen(string));
        if ((textLength == 0 && this->allowOnEmpty) || textLength > this->min && textLength < this->max) {
        } else {
            if (textLength < this->min) {
                result = booleanFactory->FALSE;
            } else if (textLength > this->max) {
                result = booleanFactory->FALSE;
            }
        }
        return result;
}


BasicArrayList* TextFieldItemValidator_toList(TextFieldItemValidator* this) {
        BasicArrayList* list = BasicArrayListD_new();
        const char* string = ABTextFieldItem_getString(this->textFieldItem);
        int32_t textLength = ((int32_t) strlen(string));
        if (textLength > this->min && textLength < this->max) {
        } else {
            const char* label = ABTextFieldItem_getLabel(this->textFieldItem);
            const char* name = java_substring(label, 0, ((int32_t) strlen(label)) - 2);
            if (textLength < this->min) {
                BasicArrayList_add(list, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), name), append, " is to short"), toString));
            } else if (textLength > this->max) {
                BasicArrayList_add(list, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), name), append, " is to long"), toString));
            }
        }
        return list;
}

