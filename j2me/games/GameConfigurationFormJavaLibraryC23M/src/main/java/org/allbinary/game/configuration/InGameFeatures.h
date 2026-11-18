#ifndef ORG_ALLBINARY_GAME_CONFIGURATION_INGAMEFEATURES_H
#define ORG_ALLBINARY_GAME_CONFIGURATION_INGAMEFEATURES_H
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
// package org.allbinary.game.configuration

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct Features Features;
typedef struct GameFeatureChoiceGroups GameFeatureChoiceGroups;
typedef struct InGameFeatureChoiceGroups InGameFeatureChoiceGroups;
typedef struct SensorFeatureFactory SensorFeatureFactory;
typedef struct TouchFeatureFactory TouchFeatureFactory;
typedef struct Init Init;
typedef struct OrientationData OrientationData;
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListD BasicArrayListD;
#include "org/allbinary/init/Init.h"

typedef struct InGameFeatures InGameFeatures;
struct InGameFeatures {
    Init base;
};


InGameFeatures* InGameFeatures_new(void);
void InGameFeatures_init(InGameFeatures* this);

void InGameFeatures_initMethod(InGameFeatures* this);


bool InGameFeatures_isAny(InGameFeatures* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void InGameFeatures_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void InGameFeatures_register(void);


#endif // ORG_ALLBINARY_GAME_CONFIGURATION_INGAMEFEATURES_H
