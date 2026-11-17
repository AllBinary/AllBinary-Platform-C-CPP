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
#include "org/allbinary/graphics/PointFactory.h"
#include "org/allbinary/graphics/RelativeRelationship.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/relationship/RelativeLayerRelationship.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/util/BasicArrayListUtil.h"
#include "org/allbinary/game/resource/FeaturedResourceFactory.h"

typedef struct FeaturedResourceRelativeRelationshipFactory FeaturedResourceRelativeRelationshipFactory;
struct FeaturedResourceRelativeRelationshipFactory {
    FeaturedResourceFactory base;
    BasicArrayListUtil* basicArrayListUtil;
};

static FeaturedResourceRelativeRelationshipFactory* FeaturedResourceRelativeRelationshipFactory_INSTANCE;

FeaturedResourceRelativeRelationshipFactory* FeaturedResourceRelativeRelationshipFactory_new(void);

void FeaturedResourceRelativeRelationshipFactory_init(FeaturedResourceRelativeRelationshipFactory* this);
FeaturedResourceRelativeRelationshipFactory* FeaturedResourceRelativeRelationshipFactory_getInstance(void);
BasicArrayList* FeaturedResourceRelativeRelationshipFactory_getRelativeRelationshipList(FeaturedResourceRelativeRelationshipFactory* this, const char* resource, AllBinaryLayer* layer);
static BasicArrayList* FeaturedResourceRelativeRelationshipFactory_duplicate(FeaturedResourceRelativeRelationshipFactory* this, BasicArrayList* list, AllBinaryLayer* layer);

// Static fields with runtime initializers: call this once at startup
void FeaturedResourceRelativeRelationshipFactory_staticInit(void) {
    FeaturedResourceRelativeRelationshipFactory_INSTANCE = FeaturedResourceRelativeRelationshipFactory_new();
}

static void FeaturedResourceRelativeRelationshipFactory_initFields(FeaturedResourceRelativeRelationshipFactory* this) {
    this->basicArrayListUtil = BasicArrayListUtil_getInstance();
}


void FeaturedResourceRelativeRelationshipFactory_init(FeaturedResourceRelativeRelationshipFactory* this) {
    FeaturedResourceFactory_init(&this->base);
    FeaturedResourceRelativeRelationshipFactory_initFields(this);
}

FeaturedResourceRelativeRelationshipFactory* FeaturedResourceRelativeRelationshipFactory_new(void) {
    FeaturedResourceRelativeRelationshipFactory* this = calloc(1, sizeof(FeaturedResourceRelativeRelationshipFactory));
    FeaturedResourceRelativeRelationshipFactory_init(this);
    return this;
}


FeaturedResourceRelativeRelationshipFactory* FeaturedResourceRelativeRelationshipFactory_getInstance(void) {
        return FeaturedResourceRelativeRelationshipFactory_INSTANCE;
}


// throws Exception
BasicArrayList* FeaturedResourceRelativeRelationshipFactory_getRelativeRelationshipList(FeaturedResourceRelativeRelationshipFactory* this, const char* resource, AllBinaryLayer* layer) {
        BasicArrayList* featureReleaseList = FeaturedResourceRelativeRelationshipFactory_getList(this);
        int32_t size = JAVA_CALL(FeaturedResourceRelativeRelationshipFactory_getList(this), size);
        for (int32_t index = 0; index < size; index++) {
            ResourceRelativeRelationshipFactoryInterface* featureInterface = ((ResourceRelativeRelationshipFactoryInterface*) featureReleaseList->objectArray[index]);
            if (ResourceRelativeRelationshipFactoryInterface_isFeature(featureInterface)) {
                BasicArrayList* list = ResourceRelativeRelationshipFactoryInterface_getResourceRelativeRelationshipList(featureInterface, resource);
                if (list != BasicArrayListUtil_getImmutableInstance(this->basicArrayListUtil)) {
                    return FeaturedResourceRelativeRelationshipFactory_duplicate(this, list, layer);
                }
            }
        }
        java_throw(java_exception_new("Exception", JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "Not available for current feature selection or Resource: "), append, resource), toString)));
}


// throws Exception
static BasicArrayList* FeaturedResourceRelativeRelationshipFactory_duplicate(FeaturedResourceRelativeRelationshipFactory* this, BasicArrayList* list, AllBinaryLayer* layer) {
        PointFactory* pointFactory = PointFactory_getInstance();
        BasicArrayList* newList = BasicArrayListD_new();
        int32_t size = BasicArrayList_size(list);
        for (int32_t index = 0; index < size; index++) {
            RelativeRelationship* relativeRelationship = ((RelativeRelationship*) list->objectArray[index]);
            BasicArrayList_add(newList, RelativeLayerRelationship_new(layer, PointFactory_createXY(pointFactory, RelativeRelationship_getX(relativeRelationship), RelativeRelationship_getY(relativeRelationship)), BasicArrayListUtil_getImmutableInstance(BasicArrayListUtil_getInstance())));
        }
        return newList;
}

