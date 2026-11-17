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
// package org.allbinary.game.layer

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/ai/ArtificialIntelligence.h"
#include "org/allbinary/ai/ArtificialIntelligenceInterface.h"
#include "org/allbinary/game/collision/CollidableBaseBehavior.h"
#include "org/allbinary/game/collision/CollidableBaseBehaviorFactory.h"
#include "org/allbinary/game/collision/CollidableInterfaceCompositeInterface.h"
#include "org/allbinary/game/collision/CollidableNeverCollideBehaviorFactory.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/graphics/RectangleFactory.h"
#include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/view/ViewPositionBase.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/game/layer/AllBinaryGameLayer.h"

typedef struct CollidableCompositeLayer CollidableCompositeLayer;
struct CollidableCompositeLayer {
    AllBinaryGameLayer base;
    CollidableInterfaceCompositeInterface CollidableInterfaceCompositeInterface_interface;
    CollidableBaseBehavior* collidableInferface;
};

static Any* CollidableCompositeLayer_NULL_COLLIDABLE_COMPOSITE_LAYER;

CollidableCompositeLayer* CollidableCompositeLayer_new(const char* name, Rectangle* layerInfo, ViewPositionBase* viewPosition, CollidableBaseBehaviorFactory* collidableBaseBehaviorFactory);
CollidableCompositeLayer* CollidableCompositeLayer_getNullInstance(void);

void CollidableCompositeLayer_init(CollidableCompositeLayer* this, const char* name, Rectangle* layerInfo, ViewPositionBase* viewPosition, CollidableBaseBehaviorFactory* collidableBaseBehaviorFactory);
ArtificialIntelligenceInterface* CollidableCompositeLayer_getArtificialIntelligenceInterface(CollidableCompositeLayer* this);
CollidableBaseBehavior* CollidableCompositeLayer_getCollidableInferface(CollidableCompositeLayer* this);
void CollidableCompositeLayer_setCollidableInferface(CollidableCompositeLayer* this, CollidableBaseBehavior* collidableInferface);
bool CollidableCompositeLayer_implmentsCollidableInterface(CollidableCompositeLayer* this);
void CollidableCompositeLayer_toStringAppend(CollidableCompositeLayer* this, StringMaker* stringBuffer);
const char* CollidableCompositeLayer_toString(CollidableCompositeLayer* this);

// Static fields with runtime initializers: call this once at startup
void CollidableCompositeLayer_staticInit(void) {
    CollidableCompositeLayer_NULL_COLLIDABLE_COMPOSITE_LAYER = NullUtil_getInstance()->NULL_OBJECT;
}

static void CollidableCompositeLayer_initFields(CollidableCompositeLayer* this) {
    this->collidableInferface = CollidableNeverCollideBehaviorFactory_createBehavior(CollidableNeverCollideBehaviorFactory_getInstance());
}


CollidableCompositeLayer* CollidableCompositeLayer_getNullInstance(void) {
        if (CollidableCompositeLayer_NULL_COLLIDABLE_COMPOSITE_LAYER == NullUtil_getInstance()->NULL_OBJECT) {
            CollidableCompositeLayer_NULL_COLLIDABLE_COMPOSITE_LAYER = CollidableCompositeLayer_new(StringUtil_getInstance()->EMPTY_STRING, RectangleFactory_SINGLETON, ViewPositionBase_NULL_VIEW_POSITION, CollidableNeverCollideBehaviorFactory_getInstance());
        }
        return ((CollidableCompositeLayer*) CollidableCompositeLayer_NULL_COLLIDABLE_COMPOSITE_LAYER);
}


void CollidableCompositeLayer_init(CollidableCompositeLayer* this, const char* name, Rectangle* layerInfo, ViewPositionBase* viewPosition, CollidableBaseBehaviorFactory* collidableBaseBehaviorFactory) {
        AllBinaryGameLayer_init(&this->base, name, layerInfo, viewPosition);
        CollidableCompositeLayer_initFields(this);
        if (collidableBaseBehaviorFactory != CollidableNeverCollideBehaviorFactory_getInstance()) {
            CollidableCompositeLayer_setCollidableInferface(this, CollidableBaseBehaviorFactory_createBehavior(collidableBaseBehaviorFactory));
        }
}

CollidableCompositeLayer* CollidableCompositeLayer_new(const char* name, Rectangle* layerInfo, ViewPositionBase* viewPosition, CollidableBaseBehaviorFactory* collidableBaseBehaviorFactory) {
    CollidableCompositeLayer* this = calloc(1, sizeof(CollidableCompositeLayer));
    CollidableCompositeLayer_init(this, name, layerInfo, viewPosition, collidableBaseBehaviorFactory);
    return this;
}


ArtificialIntelligenceInterface* CollidableCompositeLayer_getArtificialIntelligenceInterface(CollidableCompositeLayer* this) {
        ForcedLogUtil_log(this->commonStrings->NOT_IMPLEMENTED, this);
        return ArtificialIntelligence_getInstance();
}


CollidableBaseBehavior* CollidableCompositeLayer_getCollidableInferface(CollidableCompositeLayer* this) {
        return this->collidableInferface;
}


void CollidableCompositeLayer_setCollidableInferface(CollidableCompositeLayer* this, CollidableBaseBehavior* collidableInferface) {
        this->collidableInferface = collidableInferface;
}


bool CollidableCompositeLayer_implmentsCollidableInterface(CollidableCompositeLayer* this) {
        return true;
}


void CollidableCompositeLayer_toStringAppend(CollidableCompositeLayer* this, StringMaker* stringBuffer) {
        CommonSeps* commonSeps = CommonSeps_getInstance();
        AllBinaryGameLayer_toStringAppend((&this->base), stringBuffer);
        StringMaker_append(stringBuffer, commonSeps->NEW_LINE);
        StringMaker_append(stringBuffer, JAVA_CALL(CollidableCompositeLayer_getCollidableInferface(this), toString));
}


const char* CollidableCompositeLayer_toString(CollidableCompositeLayer* this) {
        StringMaker* stringBuffer = StringMaker_new();
        CollidableCompositeLayer_toStringAppend(this, stringBuffer);
        return StringMaker_toString(stringBuffer);
}

