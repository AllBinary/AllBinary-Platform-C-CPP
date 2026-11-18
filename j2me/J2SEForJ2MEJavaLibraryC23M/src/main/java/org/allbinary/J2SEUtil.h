#ifndef ORG_ALLBINARY_J2SEUTIL_H
#define ORG_ALLBINARY_J2SEUTIL_H
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
// package org.allbinary

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "java/util/HashMap.h"
#include "java/util/Map.h"
#include "java/util/Set.h"

//J2SEForJ2ME
typedef struct J2SEUtil J2SEUtil;
struct J2SEUtil {
    char unused;
};


J2SEUtil* J2SEUtil_new(void);
void J2SEUtil_init(J2SEUtil* this);

J2SEUtil* J2SEUtil_getInstance(void);

void** J2SEUtil_getHashMapAsArray(J2SEUtil* this, HashMap* hashMap);

void** J2SEUtil_getMapAsArray(J2SEUtil* this, Map* map);

void** J2SEUtil_getSetAsArray(J2SEUtil* this, Set* set);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void J2SEUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void J2SEUtil_register(void);


#endif // ORG_ALLBINARY_J2SEUTIL_H
