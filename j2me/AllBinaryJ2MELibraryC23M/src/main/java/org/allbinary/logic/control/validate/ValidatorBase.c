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
// package org.allbinary.logic.control.validate

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/java/bool/BooleanFactory.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListUtil.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/logic/control/validate/ValidatorBaseInterface.h"

typedef struct ValidatorBase ValidatorBase;
struct ValidatorBase {
    ValidatorBaseInterface ValidatorBaseInterface_interface;
};

static ValidatorBase* ValidatorBase_instance;

ValidatorBase* ValidatorBase_new(void);
ValidatorBase* ValidatorBase_getInstance(void);

void ValidatorBase_init(ValidatorBase* this);
bool ValidatorBase_isValid(ValidatorBase* this);
const char* ValidatorBase_validationInfo(ValidatorBase* this);
ABHashtable* ValidatorBase_toHashtable(ValidatorBase* this);
BasicArrayList* ValidatorBase_toList(ValidatorBase* this);

// Static fields with runtime initializers: call this once at startup
void ValidatorBase_staticInit(void) {
    ValidatorBase_instance = ValidatorBase_new();
}


ValidatorBase* ValidatorBase_getInstance(void) {
        return ValidatorBase_instance;
}


void ValidatorBase_init(ValidatorBase* this) {
}

ValidatorBase* ValidatorBase_new(void) {
    ValidatorBase* this = calloc(1, sizeof(ValidatorBase));
    ValidatorBase_init(this);
    return this;
}


bool ValidatorBase_isValid(ValidatorBase* this) {
        return BooleanFactory_getInstance()->TRUE;
}


const char* ValidatorBase_validationInfo(ValidatorBase* this) {
        return StringUtil_getInstance()->EMPTY_STRING;
}


ABHashtable* ValidatorBase_toHashtable(ValidatorBase* this) {
        return StdUtil_getInstance()->NULL_TABLE;
}


BasicArrayList* ValidatorBase_toList(ValidatorBase* this) {
        return BasicArrayListUtil_getImmutableInstance(BasicArrayListUtil_getInstance());
}

