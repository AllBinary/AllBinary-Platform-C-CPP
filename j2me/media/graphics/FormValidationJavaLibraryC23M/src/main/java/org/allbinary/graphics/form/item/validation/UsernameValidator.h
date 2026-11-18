#ifndef ORG_ALLBINARY_GRAPHICS_FORM_ITEM_VALIDATION_USERNAMEVALIDATOR_H
#define ORG_ALLBINARY_GRAPHICS_FORM_ITEM_VALIDATION_USERNAMEVALIDATOR_H
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
typedef struct TextFieldItemValidator TextFieldItemValidator;
typedef struct ABTextFieldItem ABTextFieldItem;
#include "org/allbinary/graphics/form/item/validation/TextFieldItemValidator.h"

typedef struct UsernameValidator UsernameValidator;
struct UsernameValidator {
    TextFieldItemValidator base;
};


UsernameValidator* UsernameValidator_new(ABTextFieldItem* textFieldItem, int32_t min, int32_t max, bool allowOnEmpty);

void UsernameValidator_init(UsernameValidator* this, ABTextFieldItem* textFieldItem, int32_t min, int32_t max, bool allowOnEmpty);
#define UsernameValidator_new4 UsernameValidator_new
#define UsernameValidator_init4 UsernameValidator_init
#ifndef UsernameValidator_isValid
#define UsernameValidator_isValid TextFieldItemValidator_isValid
#endif
#ifndef UsernameValidator_toList
#define UsernameValidator_toList TextFieldItemValidator_toList
#endif
#ifndef UsernameValidator_getInstance
#define UsernameValidator_getInstance ValidatorBase_getInstance
#endif
#ifndef UsernameValidator_isValid
#define UsernameValidator_isValid ValidatorBase_isValid
#endif
#ifndef UsernameValidator_validationInfo
#define UsernameValidator_validationInfo ValidatorBase_validationInfo
#endif
#ifndef UsernameValidator_toHashtable
#define UsernameValidator_toHashtable ValidatorBase_toHashtable
#endif
#ifndef UsernameValidator_toList
#define UsernameValidator_toList ValidatorBase_toList
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void UsernameValidator_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void UsernameValidator_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_FORM_ITEM_VALIDATION_USERNAMEVALIDATOR_H
