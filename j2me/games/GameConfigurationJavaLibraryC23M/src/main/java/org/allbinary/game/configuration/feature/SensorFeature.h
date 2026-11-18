#ifndef ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_SENSORFEATURE_H
#define ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_SENSORFEATURE_H
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
typedef struct Feature Feature;
#include "org/allbinary/game/configuration/feature/Feature.h"

typedef struct SensorFeature SensorFeature;
struct SensorFeature {
    Feature base;
};


SensorFeature* SensorFeature_new(const char* name);

void SensorFeature_init(SensorFeature* this, const char* name);
#define SensorFeature_new1 SensorFeature_new
#define SensorFeature_init1 SensorFeature_init
#ifndef SensorFeature_getInstance
#define SensorFeature_getInstance Feature_getInstance
#endif
#ifndef SensorFeature_add
#define SensorFeature_add Feature_add
#endif
#ifndef SensorFeature_toString
#define SensorFeature_toString Feature_toString
#endif
#ifndef SensorFeature_getName
#define SensorFeature_getName Feature_getName
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void SensorFeature_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void SensorFeature_register(void);


#endif // ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_SENSORFEATURE_H
