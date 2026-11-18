#ifndef ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_FEATURE_H
#define ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_FEATURE_H
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
// package org.allbinary.game.configuration.feature

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct ChangedGameFeatureListener ChangedGameFeatureListener;
typedef struct StdUtil StdUtil;
typedef struct ABHashtable ABHashtable;
#if __has_include("org/allbinary/util/ABHashtable.h")
#include "org/allbinary/util/ABHashtable.h"
#endif

typedef struct Feature Feature;
struct Feature {
    const char* name;
};


Feature* Feature_new(const char* name);

void Feature_init(Feature* this, const char* name);

Feature* Feature_getInstance(const char* name);


const char* Feature_toString(Feature* this);

const char* Feature_getName(Feature* this);
#define Feature_new1 Feature_new
#define Feature_init1 Feature_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void Feature_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void Feature_register(void);


#endif // ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_FEATURE_H
