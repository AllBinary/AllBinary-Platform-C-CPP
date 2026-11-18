#ifndef ORG_ALLBINARY_ANIMATION_RESOURCE_FEATURERESOURCEANIMATIONINTERFACEFACTORYINTERFACE_H
#define ORG_ALLBINARY_ANIMATION_RESOURCE_FEATURERESOURCEANIMATIONINTERFACEFACTORYINTERFACE_H
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
// package org.allbinary.animation.resource

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct ResourceAnimationInterfaceFactoryInterface ResourceAnimationInterfaceFactoryInterface;
typedef struct GameFeatureControlledInterface GameFeatureControlledInterface;
typedef struct RectangleResourceFactoryInterface RectangleResourceFactoryInterface;
typedef struct ABHashtable ABHashtable;
#include "org/allbinary/game/configuration/feature/GameFeatureControlledInterface.h"
#include "org/allbinary/game/resource/RectangleResourceFactoryInterface.h"
#include "org/allbinary/animation/resource/ResourceAnimationInterfaceFactoryInterface.h"

typedef struct FeatureResourceAnimationInterfaceFactoryInterface FeatureResourceAnimationInterfaceFactoryInterface;
struct FeatureResourceAnimationInterfaceFactoryInterface {
    ABHashtable* (*getHashtable)(void* this);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void FeatureResourceAnimationInterfaceFactoryInterface_staticInit(void);

static inline ABHashtable* FeatureResourceAnimationInterfaceFactoryInterface_getHashtable(void* this) {
    return ((__typeof__(((FeatureResourceAnimationInterfaceFactoryInterface*) nullptr)->getHashtable)) java_method_of(this, "getHashtable"))(this);
}
#define FeatureResourceAnimationInterfaceFactoryInterface_getBasicAnimationInterfaceFactoryInstance ResourceAnimationInterfaceFactoryInterface_getBasicAnimationInterfaceFactoryInstance
#define FeatureResourceAnimationInterfaceFactoryInterface_getRectangle RectangleResourceFactoryInterface_getRectangle
#define FeatureResourceAnimationInterfaceFactoryInterface_getRectangleArrayOfArrays RectangleResourceFactoryInterface_getRectangleArrayOfArrays
#define FeatureResourceAnimationInterfaceFactoryInterface_initMethod GameFeatureControlledInterface_initMethod
#define FeatureResourceAnimationInterfaceFactoryInterface_isFeature GameFeatureControlledInterface_isFeature
#define FeatureResourceAnimationInterfaceFactoryInterface_isLoadingLevel GameFeatureControlledInterface_isLoadingLevel

#if __has_include("org/allbinary/util/ABHashtable.h")
#include "org/allbinary/util/ABHashtable.h"
#endif

#endif // ORG_ALLBINARY_ANIMATION_RESOURCE_FEATURERESOURCEANIMATIONINTERFACEFACTORYINTERFACE_H
