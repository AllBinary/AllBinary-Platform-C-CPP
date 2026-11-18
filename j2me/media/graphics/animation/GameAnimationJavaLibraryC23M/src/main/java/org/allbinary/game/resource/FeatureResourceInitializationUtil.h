#ifndef ORG_ALLBINARY_GAME_RESOURCE_FEATURERESOURCEINITIALIZATIONUTIL_H
#define ORG_ALLBINARY_GAME_RESOURCE_FEATURERESOURCEINITIALIZATIONUTIL_H
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
// package org.allbinary.game.resource

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct FeaturedResourceFactory FeaturedResourceFactory;
typedef struct FeaturedResourceRelativeRelationshipFactory FeaturedResourceRelativeRelationshipFactory;
typedef struct FeaturedAnimationInterfaceFactoryInterfaceFactory FeaturedAnimationInterfaceFactoryInterfaceFactory;
typedef struct LogUtil LogUtil;
typedef struct CommonStrings CommonStrings;
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif

typedef struct FeatureResourceInitializationUtil FeatureResourceInitializationUtil;
struct FeatureResourceInitializationUtil {
    LogUtil* logUtil;
};


FeatureResourceInitializationUtil* FeatureResourceInitializationUtil_new(void);
void FeatureResourceInitializationUtil_init(FeatureResourceInitializationUtil* this);

FeatureResourceInitializationUtil* FeatureResourceInitializationUtil_getInstance(void);

void FeatureResourceInitializationUtil_initMethod(FeatureResourceInitializationUtil* this, int32_t level);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void FeatureResourceInitializationUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void FeatureResourceInitializationUtil_register(void);


#endif // ORG_ALLBINARY_GAME_RESOURCE_FEATURERESOURCEINITIALIZATIONUTIL_H
