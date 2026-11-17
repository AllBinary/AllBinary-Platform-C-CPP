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
#include "org/allbinary/animation/resource/FeatureResourceAnimationInterfaceFactoryInterface.h"
#include "org/allbinary/game/configuration/GameConfigurationCentral.h"
#include "org/allbinary/game/resource/FeaturedResourceFactory.h"
#include "org/allbinary/graphics/PointFactory.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/graphics/RectangleFactory.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"

typedef struct FeaturedAnimationInterfaceFactoryInterfaceFactory FeaturedAnimationInterfaceFactoryInterfaceFactory;
struct FeaturedAnimationInterfaceFactoryInterfaceFactory {
    FeaturedResourceFactory base;
};

static FeaturedAnimationInterfaceFactoryInterfaceFactory* FeaturedAnimationInterfaceFactoryInterfaceFactory_INSTANCE;

FeaturedAnimationInterfaceFactoryInterfaceFactory* FeaturedAnimationInterfaceFactoryInterfaceFactory_new(void);

void FeaturedAnimationInterfaceFactoryInterfaceFactory_init(FeaturedAnimationInterfaceFactoryInterfaceFactory* this);
FeaturedAnimationInterfaceFactoryInterfaceFactory* FeaturedAnimationInterfaceFactoryInterfaceFactory_getInstance(void);
Rectangle* FeaturedAnimationInterfaceFactoryInterfaceFactory_getRectangle(FeaturedAnimationInterfaceFactoryInterfaceFactory* this, const char* resource);
Rectangle* FeaturedAnimationInterfaceFactoryInterfaceFactory_getRectangleXY(FeaturedAnimationInterfaceFactoryInterfaceFactory* this, const char* resource, int32_t x, int32_t y);
ProceduralAnimationInterfaceFactoryInterface* FeaturedAnimationInterfaceFactoryInterfaceFactory_getProcedural(FeaturedAnimationInterfaceFactoryInterfaceFactory* this, const char* resource);
AnimationInterfaceFactoryInterface* FeaturedAnimationInterfaceFactoryInterfaceFactory_get(FeaturedAnimationInterfaceFactoryInterfaceFactory* this, const char* resource);
static BasicAnimationInterfaceFactoryInterface* FeaturedAnimationInterfaceFactoryInterfaceFactory_getBasicAnimationInterfaceFactoryInstance(FeaturedAnimationInterfaceFactoryInterfaceFactory* this, const char* resource);

// Static fields with runtime initializers: call this once at startup
void FeaturedAnimationInterfaceFactoryInterfaceFactory_staticInit(void) {
    FeaturedAnimationInterfaceFactoryInterfaceFactory_INSTANCE = FeaturedAnimationInterfaceFactoryInterfaceFactory_new();
}


void FeaturedAnimationInterfaceFactoryInterfaceFactory_init(FeaturedAnimationInterfaceFactoryInterfaceFactory* this) {
    FeaturedResourceFactory_init(&this->base);
}

FeaturedAnimationInterfaceFactoryInterfaceFactory* FeaturedAnimationInterfaceFactoryInterfaceFactory_new(void) {
    FeaturedAnimationInterfaceFactoryInterfaceFactory* this = calloc(1, sizeof(FeaturedAnimationInterfaceFactoryInterfaceFactory));
    FeaturedAnimationInterfaceFactoryInterfaceFactory_init(this);
    return this;
}


FeaturedAnimationInterfaceFactoryInterfaceFactory* FeaturedAnimationInterfaceFactoryInterfaceFactory_getInstance(void) {
        return FeaturedAnimationInterfaceFactoryInterfaceFactory_INSTANCE;
}


// throws Exception
Rectangle* FeaturedAnimationInterfaceFactoryInterfaceFactory_getRectangle(FeaturedAnimationInterfaceFactoryInterfaceFactory* this, const char* resource) {
        return FeaturedAnimationInterfaceFactoryInterfaceFactory_getRectangleXY(this, resource, 0, 0);
}


// throws Exception
Rectangle* FeaturedAnimationInterfaceFactoryInterfaceFactory_getRectangleXY(FeaturedAnimationInterfaceFactoryInterfaceFactory* this, const char* resource, int32_t x, int32_t y) {
        PointFactory* pointFactory = PointFactory_getInstance();
        BasicArrayList* list = FeaturedAnimationInterfaceFactoryInterfaceFactory_getList(this);
        int32_t scale = JAVA_CALL(JAVA_CALL(GameConfigurationCentral_getInstance()->SCALE, getValue), intValue);
        int32_t size = JAVA_CALL(FeaturedAnimationInterfaceFactoryInterfaceFactory_getList(this), size);
        for (int32_t index = 0; index < size; index++) {
            FeatureResourceAnimationInterfaceFactoryInterface* featureInterface = ((FeatureResourceAnimationInterfaceFactoryInterface*) list->objectArray[index]);
            if (FeatureResourceAnimationInterfaceFactoryInterface_isFeature(featureInterface)) {
                Rectangle* rectangle = FeatureResourceAnimationInterfaceFactoryInterface_getRectangle(featureInterface, resource);
                if (rectangle != RectangleFactory_SINGLETON) {
                    return Rectangle_new(PointFactory_createXY(pointFactory, x, y), ((Rectangle_getWidth(rectangle) * scale) >> 1), ((Rectangle_getHeight(rectangle) * scale) >> 1));
                }
            }
        }
        java_throw(java_exception_new("Exception", JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "No rectangle available for current feature selection or Resource: "), append, resource), toString)));
}


// throws Exception
ProceduralAnimationInterfaceFactoryInterface* FeaturedAnimationInterfaceFactoryInterfaceFactory_getProcedural(FeaturedAnimationInterfaceFactoryInterfaceFactory* this, const char* resource) {
        return ((ProceduralAnimationInterfaceFactoryInterface*) FeaturedAnimationInterfaceFactoryInterfaceFactory_getBasicAnimationInterfaceFactoryInstance(this, resource));
}


// throws Exception
AnimationInterfaceFactoryInterface* FeaturedAnimationInterfaceFactoryInterfaceFactory_get(FeaturedAnimationInterfaceFactoryInterfaceFactory* this, const char* resource) {
        return ((AnimationInterfaceFactoryInterface*) FeaturedAnimationInterfaceFactoryInterfaceFactory_getBasicAnimationInterfaceFactoryInstance(this, resource));
}


// throws Exception
static BasicAnimationInterfaceFactoryInterface* FeaturedAnimationInterfaceFactoryInterfaceFactory_getBasicAnimationInterfaceFactoryInstance(FeaturedAnimationInterfaceFactoryInterfaceFactory* this, const char* resource) {
        BasicArrayList* list = FeaturedAnimationInterfaceFactoryInterfaceFactory_getList(this);
        BasicArrayList* resourceTypeAvailableList = BasicArrayListD_new();
        int32_t size = JAVA_CALL(FeaturedAnimationInterfaceFactoryInterfaceFactory_getList(this), size);
        FeatureResourceAnimationInterfaceFactoryInterface* featureInterface = nullptr;
        BasicAnimationInterfaceFactoryInterface* animationInterfaceFactoryInterface = nullptr;
        for (int32_t index = 0; index < size; index++) {
            featureInterface = ((FeatureResourceAnimationInterfaceFactoryInterface*) list->objectArray[index]);
            if (FeatureResourceAnimationInterfaceFactoryInterface_isFeature(featureInterface)) {
                BasicArrayList_add(resourceTypeAvailableList, featureInterface);
                animationInterfaceFactoryInterface = FeatureResourceAnimationInterfaceFactoryInterface_getBasicAnimationInterfaceFactoryInstance(featureInterface, resource);
                if (animationInterfaceFactoryInterface != NullAnimationFactory_NULL_NOT_FOR_USE_ANIMATION_FACTORY) {
                    return animationInterfaceFactoryInterface;
                }
            }
        }
        if (BasicArrayList_size(resourceTypeAvailableList) > 0) {
            const char* NO_ANIMATION_AVAILABLE_FROM = "No animation available from: ";
            const char* FOR_FACTORIES = " factories: ";
            const char* FOR_RESOURCE = " for Resource: ";
            const char* HAS_KEY = " has: ";
            const char* RESOURCES_LABEL = " resources ";
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, NO_ANIMATION_AVAILABLE_FROM);
            StringMaker_appendint(stringBuffer, BasicArrayList_size(resourceTypeAvailableList));
            StringMaker_append(stringBuffer, CommonSeps_getInstance()->FORWARD_SLASH);
            StringMaker_appendint(stringBuffer, size);
            StringMaker_append(stringBuffer, FOR_FACTORIES);
            int32_t size2 = BasicArrayList_size(resourceTypeAvailableList);
            for (int32_t index = 0; index < size2; index++) {
                StringMaker_append(stringBuffer, JAVA_CALL(BasicArrayList_get(resourceTypeAvailableList, index), toString));
                StringMaker_append(stringBuffer, CommonSeps_getInstance()->COMMA_SEP);
            }
            StringMaker_append(stringBuffer, FOR_RESOURCE);
            StringMaker_append(stringBuffer, resource);
            for (int32_t index = 0; index < size; index++) {
                StringMaker_append(stringBuffer, CommonSeps_getInstance()->NEW_LINE);
                featureInterface = ((FeatureResourceAnimationInterfaceFactoryInterface*) list->objectArray[index]);
                if (FeatureResourceAnimationInterfaceFactoryInterface_isFeature(featureInterface)) {
                    StringMaker_append(stringBuffer, StringUtil_toString(StringUtil_getInstance(), featureInterface));
                    StringMaker_append(stringBuffer, HAS_KEY);
                    StringMaker_appendint(stringBuffer, JAVA_CALL(FeatureResourceAnimationInterfaceFactoryInterface_getHashtable(featureInterface), size));
                    StringMaker_append(stringBuffer, RESOURCES_LABEL);
                }
            }
            java_throw(java_exception_new("Exception", StringMaker_toString(stringBuffer)));
        } else {
            StringMaker* stringBuffer = StringMaker_new();
            for (int32_t index = 0; index < size; index++) {
                featureInterface = ((FeatureResourceAnimationInterfaceFactoryInterface*) list->objectArray[index]);
                StringMaker_append(stringBuffer, FeatureResourceAnimationInterfaceFactoryInterface_toString(featureInterface));
                StringMaker_append(stringBuffer, CommonSeps_getInstance()->SPACE);
            }
            const char* result = StringMaker_toString(stringBuffer);
            StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
            java_throw(java_exception_new("Exception", JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(stringBuffer, "No feature resource type available for Resource: "), append, resource), append, " Resource Factories Available: "), append, result), toString)));
        }
}

