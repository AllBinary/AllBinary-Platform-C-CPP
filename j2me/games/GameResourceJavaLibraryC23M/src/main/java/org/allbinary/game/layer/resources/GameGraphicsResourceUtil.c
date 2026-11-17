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
// package org.allbinary.game.layer.resources

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/configuration/feature/Features.h"
#include "org/allbinary/game/configuration/feature/GraphicsFeature.h"
#include "org/allbinary/game/configuration/feature/GraphicsFeatureFactory.h"
#include "org/allbinary/graphics/displayable/CanvasStrings.h"
#include "org/allbinary/graphics/opengles/OpenGLFeatureUtil.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct GameGraphicsResourceUtil GameGraphicsResourceUtil;
struct GameGraphicsResourceUtil {
    LogUtil* logUtil;
    const char* SPRITE;
    const char* QUARTER;
    const char* name;
};

static Any* GameGraphicsResourceUtil_instance;

GameGraphicsResourceUtil* GameGraphicsResourceUtil_new(void);
GameGraphicsResourceUtil* GameGraphicsResourceUtil_getInstance(void);

void GameGraphicsResourceUtil_init(GameGraphicsResourceUtil* this);
static const char* GameGraphicsResourceUtil_getString(GameGraphicsResourceUtil* this);
const char* GameGraphicsResourceUtil_getStringForFeature(GameGraphicsResourceUtil* this, GraphicsFeature* graphicsFeature);
const char* GameGraphicsResourceUtil_getName(GameGraphicsResourceUtil* this);

// Static fields with runtime initializers: call this once at startup
void GameGraphicsResourceUtil_staticInit(void) {
    GameGraphicsResourceUtil_instance = NullUtil_getInstance()->NULL_OBJECT;
}

static void GameGraphicsResourceUtil_initFields(GameGraphicsResourceUtil* this) {
    this->logUtil = LogUtil_getInstance();
    this->SPRITE = "_sprite";
    this->QUARTER = "_quarter";
    this->name = StringUtil_getInstance()->EMPTY_STRING;
}


GameGraphicsResourceUtil* GameGraphicsResourceUtil_getInstance(void) {
        if (GameGraphicsResourceUtil_instance == NullUtil_getInstance()->NULL_OBJECT) {
            GameGraphicsResourceUtil_instance = GameGraphicsResourceUtil_new();
        }
        return ((GameGraphicsResourceUtil*) GameGraphicsResourceUtil_instance);
}


void GameGraphicsResourceUtil_init(GameGraphicsResourceUtil* this) {
    GameGraphicsResourceUtil_initFields(this);
        JAVA_TRY {
            this->name = GameGraphicsResourceUtil_getString(this);
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->CONSTRUCTOR, e);
        } JAVA_END_TRY;
}

GameGraphicsResourceUtil* GameGraphicsResourceUtil_new(void) {
    GameGraphicsResourceUtil* this = calloc(1, sizeof(GameGraphicsResourceUtil));
    GameGraphicsResourceUtil_init(this);
    return this;
}


// throws Exception
static const char* GameGraphicsResourceUtil_getString(GameGraphicsResourceUtil* this) {
        GraphicsFeatureFactory* graphicsFeatureFactory = GraphicsFeatureFactory_getInstance();
        GraphicsFeature* graphicsFeature = graphicsFeatureFactory->NONE;
        Features* features = Features_getInstance();
        if (Features_isFeature(features, graphicsFeatureFactory->IMAGE_TO_ARRAY_GRAPHICS)) {
            graphicsFeature = graphicsFeatureFactory->IMAGE_TO_ARRAY_GRAPHICS;
        } else if (Features_isFeature(features, graphicsFeatureFactory->SPRITE_FULL_GRAPHICS)) {
            graphicsFeature = graphicsFeatureFactory->SPRITE_FULL_GRAPHICS;
        } else if (Features_isFeature(features, graphicsFeatureFactory->SPRITE_QUARTER_ROTATION_GRAPHICS)) {
            graphicsFeature = graphicsFeatureFactory->SPRITE_QUARTER_ROTATION_GRAPHICS;
        } else if (Features_isFeature(features, graphicsFeatureFactory->IMAGE_ROTATION_ON_THE_FLY)) {
            graphicsFeature = graphicsFeatureFactory->IMAGE_ROTATION_ON_THE_FLY;
        }
        return GameGraphicsResourceUtil_getStringForFeature(this, graphicsFeature);
}


// throws Exception
const char* GameGraphicsResourceUtil_getStringForFeature(GameGraphicsResourceUtil* this, GraphicsFeature* graphicsFeature) {
        StringMaker* stringBuffer = StringMaker_new();
        GraphicsFeatureFactory* graphicsFeatureFactory = GraphicsFeatureFactory_getInstance();
        StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
        Features* features = Features_getInstance();
        if (Features_isFeature(features, graphicsFeatureFactory->VECTOR_GRAPHICS)) {
        } else if (Features_isFeature(features, graphicsFeatureFactory->IMAGE_GRAPHICS)) {
            if (graphicsFeature == graphicsFeatureFactory->IMAGE_TO_ARRAY_GRAPHICS || graphicsFeature == graphicsFeatureFactory->IMAGE_ROTATION_ON_THE_FLY) {
            } else if (graphicsFeature == graphicsFeatureFactory->SPRITE_FULL_GRAPHICS) {
                StringMaker_append(stringBuffer, this->SPRITE);
            } else if (graphicsFeature == graphicsFeatureFactory->SPRITE_QUARTER_ROTATION_GRAPHICS) {
                StringMaker_append(stringBuffer, this->QUARTER);
                StringMaker_append(stringBuffer, this->SPRITE);
            } else {
                java_throw(java_exception_new("Exception", "None/Unknown Sub Image Resource Type Specified"));
            }
        } else if (OpenGLFeatureUtil_isAnyThreed(OpenGLFeatureUtil_getInstance())) {
            StringMaker_append(stringBuffer, CanvasStrings_getInstance()->OBJ_MODEL);
        } else {
            java_throw(java_exception_new("Exception", "None/Unknown Main Image Resource Type Specified"));
        }
        return StringMaker_toString(stringBuffer);
}


const char* GameGraphicsResourceUtil_getName(GameGraphicsResourceUtil* this) {
        return this->name;
}

