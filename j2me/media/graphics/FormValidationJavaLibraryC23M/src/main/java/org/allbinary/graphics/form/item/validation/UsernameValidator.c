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
#include "org/allbinary/graphics/form/item/validation/TextFieldItemValidator.h"

typedef struct UsernameValidator UsernameValidator;
struct UsernameValidator {
    TextFieldItemValidator base;
};


UsernameValidator* UsernameValidator_new(ABTextFieldItem* textFieldItem, int32_t min, int32_t max, bool allowOnEmpty);

void UsernameValidator_init(UsernameValidator* this, ABTextFieldItem* textFieldItem, int32_t min, int32_t max, bool allowOnEmpty);


void UsernameValidator_init(UsernameValidator* this, ABTextFieldItem* textFieldItem, int32_t min, int32_t max, bool allowOnEmpty) {
        TextFieldItemValidator_init(&this->base, textFieldItem, min, max, allowOnEmpty);
}

UsernameValidator* UsernameValidator_new(ABTextFieldItem* textFieldItem, int32_t min, int32_t max, bool allowOnEmpty) {
    UsernameValidator* this = calloc(1, sizeof(UsernameValidator));
    UsernameValidator_init(this, textFieldItem, min, max, allowOnEmpty);
    return this;
}

