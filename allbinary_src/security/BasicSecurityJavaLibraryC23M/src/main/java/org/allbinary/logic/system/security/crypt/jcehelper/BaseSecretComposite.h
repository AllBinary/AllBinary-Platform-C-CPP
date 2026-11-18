#ifndef ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_CRYPT_JCEHELPER_BASESECRETCOMPOSITE_H
#define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_CRYPT_JCEHELPER_BASESECRETCOMPOSITE_H
/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2025 AllBinary 
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
typedef struct NullUtil NullUtil;

typedef struct BaseSecretComposite BaseSecretComposite;
struct BaseSecretComposite {
    char unused;
};

extern BaseSecretComposite* BaseSecretComposite_NULL_SECRET_COMPOSITE;

BaseSecretComposite* BaseSecretComposite_new(void);
void BaseSecretComposite_init(BaseSecretComposite* this);

int8_t* BaseSecretComposite_encrypt(BaseSecretComposite* this, int8_t* array);

int8_t* BaseSecretComposite_decrypt(BaseSecretComposite* this, int8_t* array);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void BaseSecretComposite_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void BaseSecretComposite_register(void);


#endif // ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_CRYPT_JCEHELPER_BASESECRETCOMPOSITE_H
