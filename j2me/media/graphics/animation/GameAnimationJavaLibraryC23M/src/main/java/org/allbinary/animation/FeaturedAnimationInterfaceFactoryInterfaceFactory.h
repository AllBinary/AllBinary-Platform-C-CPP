#ifndef ORG_ALLBINARY_ANIMATION_FEATUREDANIMATIONINTERFACEFACTORYINTERFACEFACTORY_H
#define ORG_ALLBINARY_ANIMATION_FEATUREDANIMATIONINTERFACEFACTORYINTERFACEFACTORY_H
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
// package org.allbinary.animation

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct ProceduralAnimationInterfaceFactoryInterface ProceduralAnimationInterfaceFactoryInterface;
typedef struct AnimationInterfaceFactoryInterface AnimationInterfaceFactoryInterface;
typedef struct BasicAnimationInterfaceFactoryInterface BasicAnimationInterfaceFactoryInterface;
typedef struct NullAnimationFactory NullAnimationFactory;
typedef struct FeatureResourceAnimationInterfaceFactoryInterface FeatureResourceAnimationInterfaceFactoryInterface;
typedef struct GameConfigurationCentral GameConfigurationCentral;
typedef struct FeaturedResourceFactory FeaturedResourceFactory;
typedef struct PointFactory PointFactory;
typedef struct Rectangle Rectangle;
typedef struct RectangleFactory RectangleFactory;
typedef struct StringMaker StringMaker;
typedef struct StringUtil StringUtil;
typedef struct CommonSeps CommonSeps;
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListD BasicArrayListD;
#include "org/allbinary/game/resource/FeaturedResourceFactory.h"

typedef struct FeaturedAnimationInterfaceFactoryInterfaceFactory FeaturedAnimationInterfaceFactoryInterfaceFactory;
struct FeaturedAnimationInterfaceFactoryInterfaceFactory {
    FeaturedResourceFactory base;
};


FeaturedAnimationInterfaceFactoryInterfaceFactory* FeaturedAnimationInterfaceFactoryInterfaceFactory_new(void);

void FeaturedAnimationInterfaceFactoryInterfaceFactory_init(FeaturedAnimationInterfaceFactoryInterfaceFactory* this);

FeaturedAnimationInterfaceFactoryInterfaceFactory* FeaturedAnimationInterfaceFactoryInterfaceFactory_getInstance(void);

Rectangle* FeaturedAnimationInterfaceFactoryInterfaceFactory_getRectangle(FeaturedAnimationInterfaceFactoryInterfaceFactory* this, const char* resource);

Rectangle* FeaturedAnimationInterfaceFactoryInterfaceFactory_getRectangleXY(FeaturedAnimationInterfaceFactoryInterfaceFactory* this, const char* resource, int32_t x, int32_t y);

ProceduralAnimationInterfaceFactoryInterface* FeaturedAnimationInterfaceFactoryInterfaceFactory_getProcedural(FeaturedAnimationInterfaceFactoryInterfaceFactory* this, const char* resource);

AnimationInterfaceFactoryInterface* FeaturedAnimationInterfaceFactoryInterfaceFactory_get(FeaturedAnimationInterfaceFactoryInterfaceFactory* this, const char* resource);

#define FeaturedAnimationInterfaceFactoryInterfaceFactory_new0 FeaturedAnimationInterfaceFactoryInterfaceFactory_new
#define FeaturedAnimationInterfaceFactoryInterfaceFactory_init0 FeaturedAnimationInterfaceFactoryInterfaceFactory_init
#ifndef FeaturedAnimationInterfaceFactoryInterfaceFactory_clear
#define FeaturedAnimationInterfaceFactoryInterfaceFactory_clear FeaturedResourceFactory_clear
#endif
#ifndef FeaturedAnimationInterfaceFactoryInterfaceFactory_add
#define FeaturedAnimationInterfaceFactoryInterfaceFactory_add FeaturedResourceFactory_add
#endif
#ifndef FeaturedAnimationInterfaceFactoryInterfaceFactory_getList
#define FeaturedAnimationInterfaceFactoryInterfaceFactory_getList FeaturedResourceFactory_getList
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void FeaturedAnimationInterfaceFactoryInterfaceFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void FeaturedAnimationInterfaceFactoryInterfaceFactory_register(void);

#if __has_include("org/allbinary/graphics/Rectangle.h")
#include "org/allbinary/graphics/Rectangle.h"
#endif

#endif // ORG_ALLBINARY_ANIMATION_FEATUREDANIMATIONINTERFACEFACTORYINTERFACEFACTORY_H
