#ifndef ORG_ALLBINARY_ANIMATION_RESOURCE_BASERESOURCEANIMATIONINTERFACEFACTORYINTERFACEFACTORY_H
#define ORG_ALLBINARY_ANIMATION_RESOURCE_BASERESOURCEANIMATIONINTERFACEFACTORYINTERFACEFACTORY_H
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
typedef struct FeatureResourceAnimationInterfaceFactoryInterface FeatureResourceAnimationInterfaceFactoryInterface;
typedef struct BasicAnimationInterfaceFactoryInterface BasicAnimationInterfaceFactoryInterface;
typedef struct NullAnimationFactory NullAnimationFactory;
typedef struct ResourceLoadingLevelFactory ResourceLoadingLevelFactory;
typedef struct Rectangle Rectangle;
typedef struct RectangleFactory RectangleFactory;
typedef struct ImageCache ImageCache;
typedef struct LogUtil LogUtil;
typedef struct StringMaker StringMaker;
typedef struct CommonSeps CommonSeps;
typedef struct CommonStrings CommonStrings;
typedef struct ABHashtable ABHashtable;
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#if __has_include("org/allbinary/string/CommonStrings.h")
#include "org/allbinary/string/CommonStrings.h"
#endif
#if __has_include("org/allbinary/util/ABHashtable.h")
#include "org/allbinary/util/ABHashtable.h"
#endif
#include "org/allbinary/animation/resource/FeatureResourceAnimationInterfaceFactoryInterface.h"

typedef struct BaseResourceAnimationInterfaceFactoryInterfaceFactory BaseResourceAnimationInterfaceFactoryInterfaceFactory;
struct BaseResourceAnimationInterfaceFactoryInterfaceFactory {
    FeatureResourceAnimationInterfaceFactoryInterface FeatureResourceAnimationInterfaceFactoryInterface_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    ABHashtable* hashtable;
    ABHashtable* rectangleHashtable;
    ABHashtable* rectangleArrayOfArraysHashtable;
    const char* name;
    bool initialized;
};


BaseResourceAnimationInterfaceFactoryInterfaceFactory* BaseResourceAnimationInterfaceFactoryInterfaceFactory_new(const char* name, ABHashtable* hashtable, ABHashtable* rectangleHashtable, ABHashtable* rectangleArrayHashtable);

void BaseResourceAnimationInterfaceFactoryInterfaceFactory_init(BaseResourceAnimationInterfaceFactoryInterfaceFactory* this, const char* name, ABHashtable* hashtable, ABHashtable* rectangleHashtable, ABHashtable* rectangleArrayHashtable);

const char* BaseResourceAnimationInterfaceFactoryInterfaceFactory_getName(BaseResourceAnimationInterfaceFactoryInterfaceFactory* this);

void BaseResourceAnimationInterfaceFactoryInterfaceFactory_initMethod(BaseResourceAnimationInterfaceFactoryInterfaceFactory* this, int32_t level);

void BaseResourceAnimationInterfaceFactoryInterfaceFactory_initImageCache(BaseResourceAnimationInterfaceFactoryInterfaceFactory* this, ImageCache* imageCache, int32_t level);

void BaseResourceAnimationInterfaceFactoryInterfaceFactory_add(BaseResourceAnimationInterfaceFactoryInterfaceFactory* this, const char* resource, BasicAnimationInterfaceFactoryInterface* animationInterfaceFactoryInterface);

BasicAnimationInterfaceFactoryInterface* BaseResourceAnimationInterfaceFactoryInterfaceFactory_getBasicAnimationInterfaceFactoryInstance(BaseResourceAnimationInterfaceFactoryInterfaceFactory* this, const char* resource);

Rectangle* BaseResourceAnimationInterfaceFactoryInterfaceFactory_getRectangle(BaseResourceAnimationInterfaceFactoryInterfaceFactory* this, const char* resource);

void BaseResourceAnimationInterfaceFactoryInterfaceFactory_addRectangle(BaseResourceAnimationInterfaceFactoryInterfaceFactory* this, const char* resource, Rectangle* rectangle);

Rectangle*** BaseResourceAnimationInterfaceFactoryInterfaceFactory_getRectangleArrayOfArrays(BaseResourceAnimationInterfaceFactoryInterfaceFactory* this, const char* resource);

void BaseResourceAnimationInterfaceFactoryInterfaceFactory_addRectangleArrayOfArrays(BaseResourceAnimationInterfaceFactoryInterfaceFactory* this, const char* resource, Rectangle*** rectangleArrayOfArrays);

bool BaseResourceAnimationInterfaceFactoryInterfaceFactory_isFeature(BaseResourceAnimationInterfaceFactoryInterfaceFactory* this);

bool BaseResourceAnimationInterfaceFactoryInterfaceFactory_isLoadingLevel(BaseResourceAnimationInterfaceFactoryInterfaceFactory* this, int32_t level);

const char* BaseResourceAnimationInterfaceFactoryInterfaceFactory_toString(BaseResourceAnimationInterfaceFactoryInterfaceFactory* this);

ABHashtable* BaseResourceAnimationInterfaceFactoryInterfaceFactory_getHashtable(BaseResourceAnimationInterfaceFactoryInterfaceFactory* this);

ABHashtable* BaseResourceAnimationInterfaceFactoryInterfaceFactory_getRectangleHashtable(BaseResourceAnimationInterfaceFactoryInterfaceFactory* this);

ABHashtable* BaseResourceAnimationInterfaceFactoryInterfaceFactory_getRectangleArrayOfArraysHashtable(BaseResourceAnimationInterfaceFactoryInterfaceFactory* this);

void BaseResourceAnimationInterfaceFactoryInterfaceFactory_setInitialized(BaseResourceAnimationInterfaceFactoryInterfaceFactory* this, bool initialized);

bool BaseResourceAnimationInterfaceFactoryInterfaceFactory_isInitialized(BaseResourceAnimationInterfaceFactoryInterfaceFactory* this);
#define BaseResourceAnimationInterfaceFactoryInterfaceFactory_new4 BaseResourceAnimationInterfaceFactoryInterfaceFactory_new
#define BaseResourceAnimationInterfaceFactoryInterfaceFactory_init4 BaseResourceAnimationInterfaceFactoryInterfaceFactory_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void BaseResourceAnimationInterfaceFactoryInterfaceFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void BaseResourceAnimationInterfaceFactoryInterfaceFactory_register(void);

#if __has_include("org/allbinary/animation/BasicAnimationInterfaceFactoryInterface.h")
#include "org/allbinary/animation/BasicAnimationInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/graphics/Rectangle.h")
#include "org/allbinary/graphics/Rectangle.h"
#endif
#if __has_include("org/allbinary/util/ABHashtable.h")
#include "org/allbinary/util/ABHashtable.h"
#endif

#endif // ORG_ALLBINARY_ANIMATION_RESOURCE_BASERESOURCEANIMATIONINTERFACEFACTORYINTERFACEFACTORY_H
