#ifndef ORG_ALLBINARY_GRAPHICS_FORM_ITEM_VALIDATION_TEXTFIELDITEMVALIDATOR_H
#define ORG_ALLBINARY_GRAPHICS_FORM_ITEM_VALIDATION_TEXTFIELDITEMVALIDATOR_H
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
typedef struct ABTextFieldItem ABTextFieldItem;
typedef struct ValidatorBase ValidatorBase;
typedef struct BooleanFactory BooleanFactory;
typedef struct StringMaker StringMaker;
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListD BasicArrayListD;
#if __has_include("org/allbinary/graphics/form/item/ABTextFieldItem.h")
#include "org/allbinary/graphics/form/item/ABTextFieldItem.h"
#endif
#include "org/allbinary/logic/control/validate/ValidatorBase.h"
#include "java/lang/Boolean.h"

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
#define TextFieldItemValidator_new4 TextFieldItemValidator_new
#define TextFieldItemValidator_init4 TextFieldItemValidator_init
#ifndef TextFieldItemValidator_getInstance
#define TextFieldItemValidator_getInstance ValidatorBase_getInstance
#endif
#ifndef TextFieldItemValidator_validationInfo
#define TextFieldItemValidator_validationInfo ValidatorBase_validationInfo
#endif
#ifndef TextFieldItemValidator_toHashtable
#define TextFieldItemValidator_toHashtable ValidatorBase_toHashtable
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void TextFieldItemValidator_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void TextFieldItemValidator_register(void);

#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif

#endif // ORG_ALLBINARY_GRAPHICS_FORM_ITEM_VALIDATION_TEXTFIELDITEMVALIDATOR_H
