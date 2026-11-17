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
// package org.allbinary.graphics.form

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#include "org/allbinary/logic/string/StringUtil.h"

typedef struct FormTypeFactory FormTypeFactory;
struct FormTypeFactory {
    const char* UNK;
    FormType* NULL_FORM_TYPE;
    FormType* TEMP_HORIZONTAL_FORM;
    FormType* HORIZONTAL_FORM;
    FormType* VERTICAL_CENTER_FORM;
};

static FormTypeFactory* FormTypeFactory_instance;

FormTypeFactory* FormTypeFactory_new(void);
FormTypeFactory* FormTypeFactory_getInstance(void);
FormType* FormTypeFactory_getFormType(FormTypeFactory* this);

// Static fields with runtime initializers: call this once at startup
void FormTypeFactory_staticInit(void) {
    FormTypeFactory_instance = FormTypeFactory_new();
}

static void FormTypeFactory_initFields(FormTypeFactory* this) {
    this->UNK = "Unknown FormType";
    this->NULL_FORM_TYPE = FormType_new(StringUtil_getInstance()->NULL_STRING);
    this->TEMP_HORIZONTAL_FORM = FormType_new("TempHorizontal");
    this->HORIZONTAL_FORM = FormType_new("Horizontal");
    this->VERTICAL_CENTER_FORM = FormType_new("Vertical");
}

void FormTypeFactory_init(FormTypeFactory* this) {
    FormTypeFactory_initFields(this);
}

FormTypeFactory* FormTypeFactory_new(void) {
    FormTypeFactory* this = calloc(1, sizeof(FormTypeFactory));
    FormTypeFactory_init(this);
    return this;
}


FormTypeFactory* FormTypeFactory_getInstance(void) {
        return FormTypeFactory_instance;
}


FormType* FormTypeFactory_getFormType(FormTypeFactory* this) {
        DisplayInfoSingleton* displayInfo = DisplayInfoSingleton_getInstance();
        FormType* formType = nullptr;
        if (DisplayInfoSingleton_isPortrait(displayInfo)) {
            formType = this->VERTICAL_CENTER_FORM;
        } else {
            formType = this->HORIZONTAL_FORM;
        }
        return formType;
}

