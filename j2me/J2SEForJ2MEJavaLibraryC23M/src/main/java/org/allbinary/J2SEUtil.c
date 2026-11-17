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
// #include "java/util/HashMap.h"
// #include "java/util/Map.h"
// #include "java/util/Set.h"

//J2SEForJ2ME
typedef struct J2SEUtil J2SEUtil;
struct J2SEUtil {
    char unused;
};

static J2SEUtil* J2SEUtil_instance;

J2SEUtil* J2SEUtil_new(void);
J2SEUtil* J2SEUtil_getInstance(void);
Any** J2SEUtil_getHashMapAsArray(J2SEUtil* this, HashMap* hashMap);
Any** J2SEUtil_getMapAsArray(J2SEUtil* this, Map* map);
Any** J2SEUtil_getSetAsArray(J2SEUtil* this, Set* set);

// Static fields with runtime initializers: call this once at startup
void J2SEUtil_staticInit(void) {
    J2SEUtil_instance = J2SEUtil_new();
}

void J2SEUtil_init(J2SEUtil* this) {
}

J2SEUtil* J2SEUtil_new(void) {
    J2SEUtil* this = calloc(1, sizeof(J2SEUtil));
    J2SEUtil_init(this);
    return this;
}


J2SEUtil* J2SEUtil_getInstance(void) {
        return J2SEUtil_instance;
}


Any** J2SEUtil_getHashMapAsArray(J2SEUtil* this, HashMap* hashMap) {
        Any** objectArray = JAVA_CALL(HashMap_keySet(hashMap), toArray);
        return objectArray;
}


Any** J2SEUtil_getMapAsArray(J2SEUtil* this, Map* map) {
        Any** objectArray = JAVA_CALL(Map_keySet(map), toArray);
        return objectArray;
}


Any** J2SEUtil_getSetAsArray(J2SEUtil* this, Set* set) {
        Any** objectArray = Set_toArray(set);
        return objectArray;
}

