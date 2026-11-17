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
// package org.allbinary.logic.system.security.crypt.jcehelper

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/security/spec/KeySpec.h"
// #include "javax/crypto/spec/DESKeySpec.h"
// #include "javax/crypto/spec/DESedeKeySpec.h"
#include "org/allbinary/TsUtil.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct KeySpecFactory KeySpecFactory;
struct KeySpecFactory {
    const char* DES;
    const char* DESEDE;
    const char* BLOWFISH;
};

static KeySpecFactory* KeySpecFactory_instance;

KeySpecFactory* KeySpecFactory_new(void);
KeySpecFactory* KeySpecFactory_getInstance(void);

void KeySpecFactory_init(KeySpecFactory* this);
KeySpec* KeySpecFactory_getInstance(KeySpecFactory* this, const char* algorithm, int8_t* keyData);

// Static fields with runtime initializers: call this once at startup
void KeySpecFactory_staticInit(void) {
    KeySpecFactory_instance = KeySpecFactory_new();
}

static void KeySpecFactory_initFields(KeySpecFactory* this) {
    this->DES = "DES";
    this->DESEDE = "DESede";
    this->BLOWFISH = "Blowfish";
}


KeySpecFactory* KeySpecFactory_getInstance(void) {
        return KeySpecFactory_instance;
}


void KeySpecFactory_init(KeySpecFactory* this) {
    KeySpecFactory_initFields(this);
}

KeySpecFactory* KeySpecFactory_new(void) {
    KeySpecFactory* this = calloc(1, sizeof(KeySpecFactory));
    KeySpecFactory_init(this);
    return this;
}


// Java overloaded method: C needs a different name
KeySpec* KeySpecFactory_getInstance(KeySpecFactory* this, const char* algorithm, int8_t* keyData) {
        JAVA_TRY {
            TsUtil* tsUtil = TsUtil_getInstance();
            if (TsUtil_compareTo(tsUtil, algorithm, this->DES) == 0) {
                return DESKeySpec_new(keyData);
            } else if (TsUtil_compareTo(tsUtil, algorithm, this->DESEDE) == 0) {
                return DESedeKeySpec_new(keyData);
            } else {
                java_throw(java_exception_new("RuntimeException", ""));
            }
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            PreLogUtil_putOE(commonStrings->EXCEPTION, this, commonStrings->GET_INSTANCE, e);
            java_throw(java_exception_new("RuntimeException", ""));
        } JAVA_END_TRY;
}

