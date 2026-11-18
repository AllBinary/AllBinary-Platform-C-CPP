#ifndef ORG_ALLBINARY_GRAPHICS_FORM_ITEM_VALIDATION_PASSWORDVALIDATOR_H
#define ORG_ALLBINARY_GRAPHICS_FORM_ITEM_VALIDATION_PASSWORDVALIDATOR_H
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

typedef struct PasswordValidator PasswordValidator;
struct PasswordValidator {
    TextFieldItemValidator base;
};


PasswordValidator* PasswordValidator_new(ABTextFieldItem* textFieldItem, int32_t min, int32_t max, bool allowOnEmpty);

void PasswordValidator_init(PasswordValidator* this, ABTextFieldItem* textFieldItem, int32_t min, int32_t max, bool allowOnEmpty);
#define PasswordValidator_new4 PasswordValidator_new
#define PasswordValidator_init4 PasswordValidator_init
#ifndef PasswordValidator_isValid
#define PasswordValidator_isValid TextFieldItemValidator_isValid
#endif
#ifndef PasswordValidator_toList
#define PasswordValidator_toList TextFieldItemValidator_toList
#endif
#ifndef PasswordValidator_getInstance
#define PasswordValidator_getInstance ValidatorBase_getInstance
#endif
#ifndef PasswordValidator_isValid
#define PasswordValidator_isValid ValidatorBase_isValid
#endif
#ifndef PasswordValidator_validationInfo
#define PasswordValidator_validationInfo ValidatorBase_validationInfo
#endif
#ifndef PasswordValidator_toHashtable
#define PasswordValidator_toHashtable ValidatorBase_toHashtable
#endif
#ifndef PasswordValidator_toList
#define PasswordValidator_toList ValidatorBase_toList
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void PasswordValidator_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void PasswordValidator_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_FORM_ITEM_VALIDATION_PASSWORDVALIDATOR_H
