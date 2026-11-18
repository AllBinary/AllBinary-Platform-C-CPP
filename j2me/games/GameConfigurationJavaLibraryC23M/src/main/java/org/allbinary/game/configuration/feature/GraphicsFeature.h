#ifndef ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_GRAPHICSFEATURE_H
#define ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_GRAPHICSFEATURE_H
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

typedef struct GraphicsFeature GraphicsFeature;
struct GraphicsFeature {
    Feature base;
};


GraphicsFeature* GraphicsFeature_new(const char* name);

void GraphicsFeature_init(GraphicsFeature* this, const char* name);
#define GraphicsFeature_new1 GraphicsFeature_new
#define GraphicsFeature_init1 GraphicsFeature_init
#ifndef GraphicsFeature_getInstance
#define GraphicsFeature_getInstance Feature_getInstance
#endif
#ifndef GraphicsFeature_add
#define GraphicsFeature_add Feature_add
#endif
#ifndef GraphicsFeature_toString
#define GraphicsFeature_toString Feature_toString
#endif
#ifndef GraphicsFeature_getName
#define GraphicsFeature_getName Feature_getName
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GraphicsFeature_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GraphicsFeature_register(void);


#endif // ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_GRAPHICSFEATURE_H
