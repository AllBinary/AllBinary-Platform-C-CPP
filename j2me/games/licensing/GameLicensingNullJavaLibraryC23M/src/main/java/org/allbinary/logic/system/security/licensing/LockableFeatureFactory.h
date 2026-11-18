#ifndef ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_LOCKABLEFEATUREFACTORY_H
#define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_LOCKABLEFEATUREFACTORY_H
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
// package org.allbinary.logic.system.security.licensing

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListD BasicArrayListD;
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif

typedef struct LockableFeatureFactory LockableFeatureFactory;
struct LockableFeatureFactory {
    BasicArrayList* list;
};


LockableFeatureFactory* LockableFeatureFactory_new(void);
void LockableFeatureFactory_init(LockableFeatureFactory* this);

LockableFeatureFactory* LockableFeatureFactory_getInstance(void);

BasicArrayList* LockableFeatureFactory_getList(LockableFeatureFactory* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void LockableFeatureFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void LockableFeatureFactory_register(void);

#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif

#endif // ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_LOCKABLEFEATUREFACTORY_H
