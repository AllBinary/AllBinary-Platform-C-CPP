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
#include "org/allbinary/game/configuration/feature/Features.h"
#include "org/allbinary/game/configuration/feature/GameFeatureControlledInterface.h"
#include "org/allbinary/game/configuration/feature/GraphicsFeatureFactory.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"

typedef struct FeaturedResourceFactory FeaturedResourceFactory;
struct FeaturedResourceFactory {
    LogUtil* logUtil;
    BasicArrayList* list;
    CommonStrings* commonStrings;
    const char* ANIMATION_FEATURES;
    const char* IMAGE_LABEL;
    const char* IMAGE_GRAPHICS_ARRAY;
    const char* IMAGE_GRAPHICS_ROTATION;
    const char* SPRITE_QUARTER;
    const char* SPRITE_FULL;
    const char* IS_LOADING_LEVEL_LABEL;
    const char* IS_FEATURE;
    const char* GAME_FEATURE_CONTROLLED;
};


FeaturedResourceFactory* FeaturedResourceFactory_new(void);

void FeaturedResourceFactory_init(FeaturedResourceFactory* this);
void FeaturedResourceFactory_init(FeaturedResourceFactory* this, int32_t level);
void FeaturedResourceFactory_clear(FeaturedResourceFactory* this);
void FeaturedResourceFactory_add(FeaturedResourceFactory* this, GameFeatureControlledInterface* featureInterface);
BasicArrayList* FeaturedResourceFactory_getList(FeaturedResourceFactory* this);

static void FeaturedResourceFactory_initFields(FeaturedResourceFactory* this) {
    this->logUtil = LogUtil_getInstance();
    this->list = BasicArrayListD_new();
    this->commonStrings = CommonStrings_getInstance();
    this->ANIMATION_FEATURES = "Animation Features: Vector: ";
    this->IMAGE_LABEL = " Image: ";
    this->IMAGE_GRAPHICS_ARRAY = "Image Array: ";
    this->IMAGE_GRAPHICS_ROTATION = "Image Rotate: ";
    this->SPRITE_QUARTER = " Sprite Quarter: ";
    this->SPRITE_FULL = " Sprite Full: ";
    this->IS_LOADING_LEVEL_LABEL = " isLoadingLevel ";
    this->IS_FEATURE = " isFeature: ";
    this->GAME_FEATURE_CONTROLLED = "GameFeatureControlledInterface: ";
}


void FeaturedResourceFactory_init(FeaturedResourceFactory* this) {
    FeaturedResourceFactory_initFields(this);
}

FeaturedResourceFactory* FeaturedResourceFactory_new(void) {
    FeaturedResourceFactory* this = calloc(1, sizeof(FeaturedResourceFactory));
    FeaturedResourceFactory_init(this);
    return this;
}


// throws Exception
void FeaturedResourceFactory_init(FeaturedResourceFactory* this, int32_t level) {
        int32_t size = BasicArrayList_size(this->list);
        for (int32_t index = 0; index < size; index++) {
            GameFeatureControlledInterface* featureInterface = ((GameFeatureControlledInterface*) this->list->objectArray[index]);
            bool isLoadingLevel = GameFeatureControlledInterface_isLoadingLevel(featureInterface, level);
            bool isFeature = GameFeatureControlledInterface_isFeature(featureInterface);
            LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), this->GAME_FEATURE_CONTROLLED), append, GameFeatureControlledInterface_toString(featureInterface)), append, this->IS_LOADING_LEVEL_LABEL), append, ResourceLoadingLevelFactory_getLevelString(ResourceLoadingLevelFactory_getInstance(), level)), append, CommonSeps_getInstance()->COLON_SEP), appendboolean, isLoadingLevel), append, this->IS_FEATURE), appendboolean, isFeature), toString), this, this->commonStrings->INIT);
            if (isLoadingLevel && isFeature) {
                GameFeatureControlledInterface_init(featureInterface, level);
            }
        }
        Features* features = Features_getInstance();
        GraphicsFeatureFactory* graphicsFeatureFactory = GraphicsFeatureFactory_getInstance();
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, this->ANIMATION_FEATURES);
        StringMaker_appendboolean(stringBuffer, Features_isFeature(features, graphicsFeatureFactory->VECTOR_GRAPHICS));
        StringMaker_append(stringBuffer, this->IMAGE_LABEL);
        StringMaker_appendboolean(stringBuffer, Features_isFeature(features, graphicsFeatureFactory->IMAGE_GRAPHICS));
        LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, this->commonStrings->INIT);
        if (Features_isFeature(features, graphicsFeatureFactory->IMAGE_GRAPHICS)) {
            StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
            StringMaker_append(stringBuffer, this->IMAGE_GRAPHICS_ARRAY);
            StringMaker_appendboolean(stringBuffer, Features_isFeature(features, graphicsFeatureFactory->IMAGE_TO_ARRAY_GRAPHICS));
            StringMaker_append(stringBuffer, this->IMAGE_GRAPHICS_ROTATION);
            StringMaker_appendboolean(stringBuffer, Features_isFeature(features, graphicsFeatureFactory->IMAGE_TO_ARRAY_GRAPHICS));
            StringMaker_append(stringBuffer, this->SPRITE_QUARTER);
            StringMaker_appendboolean(stringBuffer, Features_isFeature(features, graphicsFeatureFactory->SPRITE_QUARTER_ROTATION_GRAPHICS));
            StringMaker_append(stringBuffer, this->SPRITE_FULL);
            StringMaker_appendboolean(stringBuffer, Features_isFeature(features, graphicsFeatureFactory->SPRITE_FULL_GRAPHICS));
            LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, this->commonStrings->INIT);
        }
}


void FeaturedResourceFactory_clear(FeaturedResourceFactory* this) {
        BasicArrayList_clear(this->list);
}


void FeaturedResourceFactory_add(FeaturedResourceFactory* this, GameFeatureControlledInterface* featureInterface) {
        LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), CommonLabels_getInstance()->START_LABEL), append, StringUtil_toString(StringUtil_getInstance(), featureInterface)), toString), this, this->commonStrings->ADD);
        BasicArrayList_add(this->list, featureInterface);
}


BasicArrayList* FeaturedResourceFactory_getList(FeaturedResourceFactory* this) {
        return this->list;
}

