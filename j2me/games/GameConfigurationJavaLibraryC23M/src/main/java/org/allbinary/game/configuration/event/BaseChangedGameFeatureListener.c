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
// package org.allbinary.game.configuration.event

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/configuration/feature/Feature.h"
#include "org/allbinary/game/configuration/feature/Features.h"
#include "org/allbinary/game/configuration/feature/GameFeatureUtil.h"
#include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/game/configuration/event/GameFeatureListenerInterface.h"

typedef struct BaseChangedGameFeatureListener BaseChangedGameFeatureListener;
struct BaseChangedGameFeatureListener {
    GameFeatureListenerInterface GameFeatureListenerInterface_interface;
    LogUtil* logUtil;
    GameFeatureUtil* gameFeatureUtil;
    BasicArrayList* list;
    bool changed;
};


BaseChangedGameFeatureListener* BaseChangedGameFeatureListener_new(void);
void BaseChangedGameFeatureListener_onEvent(BaseChangedGameFeatureListener* this, AllBinaryEventObject* eventObject);
void BaseChangedGameFeatureListener_onGameFeatureChange(BaseChangedGameFeatureListener* this, GameFeatureEvent* gameFeatureEvent);
void BaseChangedGameFeatureListener_add(BaseChangedGameFeatureListener* this, Feature* gameFeature);
void BaseChangedGameFeatureListener_remove(BaseChangedGameFeatureListener* this, Feature* gameFeature);
void BaseChangedGameFeatureListener_setChanged(BaseChangedGameFeatureListener* this, bool initialized);
bool BaseChangedGameFeatureListener_isChangedFeature(BaseChangedGameFeatureListener* this, Feature* gameFeature);
bool BaseChangedGameFeatureListener_isChanged(BaseChangedGameFeatureListener* this);

static void BaseChangedGameFeatureListener_initFields(BaseChangedGameFeatureListener* this) {
    this->logUtil = LogUtil_getInstance();
    this->gameFeatureUtil = GameFeatureUtil_getInstance();
    this->list = BasicArrayListD_new();
    this->changed = true;
}

void BaseChangedGameFeatureListener_init(BaseChangedGameFeatureListener* this) {
    BaseChangedGameFeatureListener_initFields(this);
}

BaseChangedGameFeatureListener* BaseChangedGameFeatureListener_new(void) {
    BaseChangedGameFeatureListener* this = calloc(1, sizeof(BaseChangedGameFeatureListener));
    BaseChangedGameFeatureListener_init(this);
    return this;
}


void BaseChangedGameFeatureListener_onEvent(BaseChangedGameFeatureListener* this, AllBinaryEventObject* eventObject) {
        ForcedLogUtil_log(CommonStrings_getInstance()->NOT_IMPLEMENTED, this);
}


void BaseChangedGameFeatureListener_onGameFeatureChange(BaseChangedGameFeatureListener* this, GameFeatureEvent* gameFeatureEvent) {
        LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), this->gameFeatureUtil->GAME_FEATURE_CHANGED), append, GameFeatureEvent_getWhatChanged(gameFeatureEvent)), toString), this, this->gameFeatureUtil->ON_GAME_FEATURE_CHANGE);
        BasicArrayList_add(this->list, GameFeatureEvent_getGameOption(gameFeatureEvent));
        BaseChangedGameFeatureListener_setChanged(this, true);
}


void BaseChangedGameFeatureListener_add(BaseChangedGameFeatureListener* this, Feature* gameFeature) {
        BasicArrayList_add(this->list, gameFeature);
}


void BaseChangedGameFeatureListener_remove(BaseChangedGameFeatureListener* this, Feature* gameFeature) {
        BasicArrayList_remove(this->list, gameFeature);
}


void BaseChangedGameFeatureListener_setChanged(BaseChangedGameFeatureListener* this, bool initialized) {
        this->changed = initialized;
        if (!BaseChangedGameFeatureListener_isChanged(this)) {
            BasicArrayList_clear(this->list);
        }
}


bool BaseChangedGameFeatureListener_isChangedFeature(BaseChangedGameFeatureListener* this, Feature* gameFeature) {
        bool isChanged = BasicArrayList_contains(this->list, gameFeature);
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, "GameFeature: ");
        StringMaker_append(stringBuffer, StringUtil_toString(StringUtil_getInstance(), gameFeature));
        StringMaker_append(stringBuffer, " isFeature: ");
        StringMaker_appendboolean(stringBuffer, Features_isFeature(Features_getInstance(), gameFeature));
        StringMaker_append(stringBuffer, " isChanged: ");
        StringMaker_appendboolean(stringBuffer, isChanged);
        LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, "isChanged");
        return isChanged;
}


bool BaseChangedGameFeatureListener_isChanged(BaseChangedGameFeatureListener* this) {
        return this->changed;
}

