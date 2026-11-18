#ifndef ORG_ALLBINARY_LOGIC_UTIL_CACHE_J2SECACHEINTERFACE_H
#define ORG_ALLBINARY_LOGIC_UTIL_CACHE_J2SECACHEINTERFACE_H
/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2022 AllBinary 
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
// package org.allbinary.logic.util.cache

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct AutomaticCacheInterface AutomaticCacheInterface;
#include "java/util/Set.h"
#include "org/allbinary/logic/util/cache/AutomaticCacheInterface.h"

typedef struct J2SECacheInterface J2SECacheInterface;
struct J2SECacheInterface {
    Set* (*keySet)(void* this);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void J2SECacheInterface_staticInit(void);

static inline Set* J2SECacheInterface_keySet(void* this) {
    return ((__typeof__(((J2SECacheInterface*) nullptr)->keySet)) java_method_of(this, "keySet"))(this);
}
#define J2SECacheInterface_get AutomaticCacheInterface_get


#endif // ORG_ALLBINARY_LOGIC_UTIL_CACHE_J2SECACHEINTERFACE_H
