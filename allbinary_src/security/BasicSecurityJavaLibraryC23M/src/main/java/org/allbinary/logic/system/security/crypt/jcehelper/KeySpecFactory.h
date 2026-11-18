#ifndef ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_CRYPT_JCEHELPER_KEYSPECFACTORY_H
#define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_CRYPT_JCEHELPER_KEYSPECFACTORY_H
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
typedef struct TsUtil TsUtil;
typedef struct PreLogUtil PreLogUtil;
typedef struct CommonStrings CommonStrings;
#include "java/security/spec/KeySpec.h"
#include "javax/crypto/spec/DESKeySpec.h"
#include "javax/crypto/spec/DESedeKeySpec.h"

typedef struct KeySpecFactory KeySpecFactory;
struct KeySpecFactory {
    const char* DES;
    const char* DESEDE;
    const char* BLOWFISH;
};


KeySpecFactory* KeySpecFactory_new(void);

KeySpecFactory* KeySpecFactory_getInstance0(void);

void KeySpecFactory_init(KeySpecFactory* this);

KeySpec* KeySpecFactory_getInstance3(KeySpecFactory* this, const char* algorithm, int8_t* keyData);
#define KeySpecFactory_getInstance(...) JAVA_OVERLOADED(KeySpecFactory_getInstance, __VA_ARGS__)
#define KeySpecFactory_new0 KeySpecFactory_new
#define KeySpecFactory_init0 KeySpecFactory_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void KeySpecFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void KeySpecFactory_register(void);


#endif // ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_CRYPT_JCEHELPER_KEYSPECFACTORY_H
