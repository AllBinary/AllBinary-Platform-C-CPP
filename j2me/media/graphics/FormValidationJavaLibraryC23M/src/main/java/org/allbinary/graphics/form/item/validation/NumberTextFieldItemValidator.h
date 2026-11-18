#ifndef ORG_ALLBINARY_GRAPHICS_FORM_ITEM_VALIDATION_NUMBERTEXTFIELDITEMVALIDATOR_H
#define ORG_ALLBINARY_GRAPHICS_FORM_ITEM_VALIDATION_NUMBERTEXTFIELDITEMVALIDATOR_H
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
typedef struct SmallIntegerSingletonFactory SmallIntegerSingletonFactory;
typedef struct StringMaker StringMaker;
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListD BasicArrayListD;
#if __has_include("org/allbinary/graphics/form/item/ABTextFieldItem.h")
#include "org/allbinary/graphics/form/item/ABTextFieldItem.h"
#endif
#include "org/allbinary/logic/control/validate/ValidatorBase.h"
#include "java/lang/Integer.h"
#include "java/lang/Boolean.h"

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
#define NumberTextFieldItemValidator_new4 NumberTextFieldItemValidator_new
#define NumberTextFieldItemValidator_init4 NumberTextFieldItemValidator_init
#ifndef NumberTextFieldItemValidator_getInstance
#define NumberTextFieldItemValidator_getInstance ValidatorBase_getInstance
#endif
#ifndef NumberTextFieldItemValidator_validationInfo
#define NumberTextFieldItemValidator_validationInfo ValidatorBase_validationInfo
#endif
#ifndef NumberTextFieldItemValidator_toHashtable
#define NumberTextFieldItemValidator_toHashtable ValidatorBase_toHashtable
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void NumberTextFieldItemValidator_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void NumberTextFieldItemValidator_register(void);

#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif

#endif // ORG_ALLBINARY_GRAPHICS_FORM_ITEM_VALIDATION_NUMBERTEXTFIELDITEMVALIDATOR_H
