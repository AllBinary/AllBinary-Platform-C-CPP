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
#include "org/allbinary/animation/BasicAnimationInterfaceFactoryInterface.h"
#include "org/allbinary/animation/NullAnimationFactory.h"
#include "org/allbinary/game/resource/ResourceLoadingLevelFactory.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/graphics/RectangleFactory.h"
#include "org/allbinary/image/ImageCache.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/ABHashtable.h"
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
void BaseResourceAnimationInterfaceFactoryInterfaceFactory_init(BaseResourceAnimationInterfaceFactoryInterfaceFactory* this, int32_t level);
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

static void BaseResourceAnimationInterfaceFactoryInterfaceFactory_initFields(BaseResourceAnimationInterfaceFactoryInterfaceFactory* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    
    
    
    
    this->initialized = false;
}


void BaseResourceAnimationInterfaceFactoryInterfaceFactory_init(BaseResourceAnimationInterfaceFactoryInterfaceFactory* this, const char* name, ABHashtable* hashtable, ABHashtable* rectangleHashtable, ABHashtable* rectangleArrayHashtable) {
    BaseResourceAnimationInterfaceFactoryInterfaceFactory_initFields(this);
        this->hashtable = hashtable;
        this->rectangleHashtable = rectangleHashtable;
        this->rectangleArrayOfArraysHashtable = rectangleArrayHashtable;
        this->name = name;
}

BaseResourceAnimationInterfaceFactoryInterfaceFactory* BaseResourceAnimationInterfaceFactoryInterfaceFactory_new(const char* name, ABHashtable* hashtable, ABHashtable* rectangleHashtable, ABHashtable* rectangleArrayHashtable) {
    BaseResourceAnimationInterfaceFactoryInterfaceFactory* this = calloc(1, sizeof(BaseResourceAnimationInterfaceFactoryInterfaceFactory));
    BaseResourceAnimationInterfaceFactoryInterfaceFactory_init(this, name, hashtable, rectangleHashtable, rectangleArrayHashtable);
    return this;
}


const char* BaseResourceAnimationInterfaceFactoryInterfaceFactory_getName(BaseResourceAnimationInterfaceFactoryInterfaceFactory* this) {
        return this->name;
}


// throws Exception
void BaseResourceAnimationInterfaceFactoryInterfaceFactory_init(BaseResourceAnimationInterfaceFactoryInterfaceFactory* this, int32_t level) {
        CommonStrings* commonStrings = CommonStrings_getInstance();
        LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "Available List of Animations: "), append, ABHashtable_toString(this->hashtable)), toString), this, commonStrings->INIT);
        BaseResourceAnimationInterfaceFactoryInterfaceFactory_setInitialized(this, true);
}


// throws Exception
void BaseResourceAnimationInterfaceFactoryInterfaceFactory_initImageCache(BaseResourceAnimationInterfaceFactoryInterfaceFactory* this, ImageCache* imageCache, int32_t level) {
}


// throws Exception
void BaseResourceAnimationInterfaceFactoryInterfaceFactory_add(BaseResourceAnimationInterfaceFactoryInterfaceFactory* this, const char* resource, BasicAnimationInterfaceFactoryInterface* animationInterfaceFactoryInterface) {
        if (ABHashtable_containsKey(this->hashtable, ((Any*) resource))) {
            java_throw(java_exception_new("Exception", JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "Resource Already Created: "), append, resource), toString)));
        }
        ABHashtable_put(this->hashtable, resource, animationInterfaceFactoryInterface);
}


// throws Exception
BasicAnimationInterfaceFactoryInterface* BaseResourceAnimationInterfaceFactoryInterfaceFactory_getBasicAnimationInterfaceFactoryInstance(BaseResourceAnimationInterfaceFactoryInterfaceFactory* this, const char* resource) {
        Any* basicAnimationInterfaceFactoryInterfaceCanBeNull = ABHashtable_get(this->hashtable, resource);
        if (basicAnimationInterfaceFactoryInterfaceCanBeNull == nullptr) {
            return NullAnimationFactory_NULL_NOT_FOR_USE_ANIMATION_FACTORY;
        }
        return ((BasicAnimationInterfaceFactoryInterface*) basicAnimationInterfaceFactoryInterfaceCanBeNull);
}


// throws Exception
Rectangle* BaseResourceAnimationInterfaceFactoryInterfaceFactory_getRectangle(BaseResourceAnimationInterfaceFactoryInterfaceFactory* this, const char* resource) {
        Any* rectangleCanBeNull = ABHashtable_get(this->rectangleHashtable, resource);
        if (rectangleCanBeNull == nullptr) {
            return RectangleFactory_SINGLETON;
        }
        return ((Rectangle*) rectangleCanBeNull);
}


// throws Exception
void BaseResourceAnimationInterfaceFactoryInterfaceFactory_addRectangle(BaseResourceAnimationInterfaceFactoryInterfaceFactory* this, const char* resource, Rectangle* rectangle) {
        ABHashtable_put(this->rectangleHashtable, resource, rectangle);
}


// throws Exception
Rectangle*** BaseResourceAnimationInterfaceFactoryInterfaceFactory_getRectangleArrayOfArrays(BaseResourceAnimationInterfaceFactoryInterfaceFactory* this, const char* resource) {
        Any* valueCanBeNull = ABHashtable_get(this->rectangleArrayOfArraysHashtable, resource);
        if (valueCanBeNull != nullptr) {
            Rectangle*** rectangleArrayOfArrays = ((Rectangle***) valueCanBeNull);
            return rectangleArrayOfArrays;
        } else {
            return RectangleFactory_ARRAY_OF_ARRAYS;
        }
}


// throws Exception
void BaseResourceAnimationInterfaceFactoryInterfaceFactory_addRectangleArrayOfArrays(BaseResourceAnimationInterfaceFactoryInterfaceFactory* this, const char* resource, Rectangle*** rectangleArrayOfArrays) {
        ABHashtable_put(this->rectangleArrayOfArraysHashtable, resource, rectangleArrayOfArrays);
}


bool BaseResourceAnimationInterfaceFactoryInterfaceFactory_isFeature(BaseResourceAnimationInterfaceFactoryInterfaceFactory* this) {
        return false;
}


bool BaseResourceAnimationInterfaceFactoryInterfaceFactory_isLoadingLevel(BaseResourceAnimationInterfaceFactoryInterfaceFactory* this, int32_t level) {
        ResourceLoadingLevelFactory* resourceLoadingLevelFactory = ResourceLoadingLevelFactory_getInstance();
        if (level == JAVA_CALL(resourceLoadingLevelFactory->LOAD_ALL, getLevel)) {
            return true;
        } else {
            return false;
        }
}


const char* BaseResourceAnimationInterfaceFactoryInterfaceFactory_toString(BaseResourceAnimationInterfaceFactoryInterfaceFactory* this) {
        return JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), java_class_of(this)), append, CommonSeps_getInstance()->SEMICOLON), append, CommonSeps_getInstance()->SPACE), append, this->name), toString);
}


ABHashtable* BaseResourceAnimationInterfaceFactoryInterfaceFactory_getHashtable(BaseResourceAnimationInterfaceFactoryInterfaceFactory* this) {
        return this->hashtable;
}


ABHashtable* BaseResourceAnimationInterfaceFactoryInterfaceFactory_getRectangleHashtable(BaseResourceAnimationInterfaceFactoryInterfaceFactory* this) {
        return this->rectangleHashtable;
}


ABHashtable* BaseResourceAnimationInterfaceFactoryInterfaceFactory_getRectangleArrayOfArraysHashtable(BaseResourceAnimationInterfaceFactoryInterfaceFactory* this) {
        return this->rectangleArrayOfArraysHashtable;
}


void BaseResourceAnimationInterfaceFactoryInterfaceFactory_setInitialized(BaseResourceAnimationInterfaceFactoryInterfaceFactory* this, bool initialized) {
        this->initialized = initialized;
}


bool BaseResourceAnimationInterfaceFactoryInterfaceFactory_isInitialized(BaseResourceAnimationInterfaceFactoryInterfaceFactory* this) {
        return this->initialized;
}

