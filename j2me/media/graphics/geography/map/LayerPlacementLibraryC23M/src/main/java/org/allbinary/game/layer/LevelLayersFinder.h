#ifndef ORG_ALLBINARY_GAME_LAYER_LEVELLAYERSFINDER_H
#define ORG_ALLBINARY_GAME_LAYER_LEVELLAYERSFINDER_H
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
typedef struct Layer Layer;
typedef struct SmallIntegerSingletonFactory SmallIntegerSingletonFactory;
typedef struct ABHashtable ABHashtable;
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListD BasicArrayListD;
typedef struct EnumerationUtil EnumerationUtil;
#include "java/util/Enumeration.h"
#if __has_include("org/allbinary/util/EnumerationUtil.h")
#include "org/allbinary/util/EnumerationUtil.h"
#endif
#include "java/lang/Integer.h"

typedef struct LevelLayersFinder LevelLayersFinder;
struct LevelLayersFinder {
    EnumerationUtil* enumerationUtil;
};


LevelLayersFinder* LevelLayersFinder_new(void);
void LevelLayersFinder_init(LevelLayersFinder* this);

LevelLayersFinder* LevelLayersFinder_getInstance(void);

BasicArrayList* LevelLayersFinder_get(LevelLayersFinder* this, ABHashtable* hashtable);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void LevelLayersFinder_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void LevelLayersFinder_register(void);

#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif

#endif // ORG_ALLBINARY_GAME_LAYER_LEVELLAYERSFINDER_H
