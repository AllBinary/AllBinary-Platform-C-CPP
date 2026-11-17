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
// package org.allbinary.game.layer

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/Enumeration.h"
#include "org/allbinary/layer/Layer.h"
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/util/EnumerationUtil.h"

typedef struct LevelLayersFinder LevelLayersFinder;
struct LevelLayersFinder {
    EnumerationUtil* enumerationUtil;
};

static LevelLayersFinder* LevelLayersFinder_instance;

LevelLayersFinder* LevelLayersFinder_new(void);
LevelLayersFinder* LevelLayersFinder_getInstance(void);
BasicArrayList* LevelLayersFinder_get(LevelLayersFinder* this, ABHashtable* hashtable);

// Static fields with runtime initializers: call this once at startup
void LevelLayersFinder_staticInit(void) {
    LevelLayersFinder_instance = LevelLayersFinder_new();
}

static void LevelLayersFinder_initFields(LevelLayersFinder* this) {
    this->enumerationUtil = EnumerationUtil_getInstance();
}

void LevelLayersFinder_init(LevelLayersFinder* this) {
    LevelLayersFinder_initFields(this);
}

LevelLayersFinder* LevelLayersFinder_new(void) {
    LevelLayersFinder* this = calloc(1, sizeof(LevelLayersFinder));
    LevelLayersFinder_init(this);
    return this;
}


LevelLayersFinder* LevelLayersFinder_getInstance(void) {
        return LevelLayersFinder_instance;
}


BasicArrayList* LevelLayersFinder_get(LevelLayersFinder* this, ABHashtable* hashtable) {
        SmallIntegerSingletonFactory* smallIntegerSingletonFactory = SmallIntegerSingletonFactory_getInstance();
        BasicArrayList* list = BasicArrayListD_new();
        Enumeration* enumeration = ABHashtable_keys(hashtable);
        ABHashtable* layerHashtableCanBeNull = nullptr;
        int32_t integerCanBeNull = nullptr;
        int32_t cachedIntegerCanBeNull = nullptr;
        while (EnumerationUtil_hasMoreElements(this->enumerationUtil, enumeration)) {
            layerHashtableCanBeNull = ((ABHashtable*) ABHashtable_get(hashtable, ((Any*) EnumerationUtil_nextElement(this->enumerationUtil, enumeration))));
            integerCanBeNull = ((int32_t) ABHashtable_get(layerHashtableCanBeNull, ((Any*) Layer_ID)));
            cachedIntegerCanBeNull = SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, Integer_intValue(integerCanBeNull));
            if (!BasicArrayList_contains(list, cachedIntegerCanBeNull)) {
                BasicArrayList_add(list, cachedIntegerCanBeNull);
            }
        }
        return list;
}

