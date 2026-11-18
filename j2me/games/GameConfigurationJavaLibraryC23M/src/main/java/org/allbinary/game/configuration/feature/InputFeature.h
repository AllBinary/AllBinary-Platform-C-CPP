#ifndef ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_INPUTFEATURE_H
#define ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_INPUTFEATURE_H
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

typedef struct InputFeature InputFeature;
struct InputFeature {
    Feature base;
};


InputFeature* InputFeature_new(const char* name);

void InputFeature_init(InputFeature* this, const char* name);
#define InputFeature_new1 InputFeature_new
#define InputFeature_init1 InputFeature_init
#ifndef InputFeature_getInstance
#define InputFeature_getInstance Feature_getInstance
#endif
#ifndef InputFeature_add
#define InputFeature_add Feature_add
#endif
#ifndef InputFeature_toString
#define InputFeature_toString Feature_toString
#endif
#ifndef InputFeature_getName
#define InputFeature_getName Feature_getName
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void InputFeature_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void InputFeature_register(void);


#endif // ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_INPUTFEATURE_H
