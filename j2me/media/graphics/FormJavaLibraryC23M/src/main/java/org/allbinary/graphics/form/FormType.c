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

typedef struct FormType FormType;
struct FormType {
    const char* name;
};


FormType* FormType_new(const char* name);

void FormType_init(FormType* this, const char* name);
const char* FormType_toString(FormType* this);

static void FormType_initFields(FormType* this) {
    
}


void FormType_init(FormType* this, const char* name) {
    FormType_initFields(this);
        this->name = name;
}

FormType* FormType_new(const char* name) {
    FormType* this = calloc(1, sizeof(FormType));
    FormType_init(this, name);
    return this;
}


const char* FormType_toString(FormType* this) {
        return this->name;
}

