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
// package org.allbinary.game.configuration.feature

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/configuration/event/GameFeatureEvent.h"
#include "org/allbinary/game/configuration/event/GameFeatureEventHandler.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/system/os/GenericOperatingSystem.h"
#include "org/allbinary/logic/system/os/OperatingSystemFactory.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"

typedef struct Features Features;
struct Features {
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    BasicArrayList* list;
    BasicArrayList* defaultList;
};

static Any* Features_SINGLETON;

Features* Features_new(void);
Features* Features_getInstance(void);

void Features_init(Features* this);
void Features_addDefault(Features* this, Feature* gameFeature);
void Features_add(Features* this, Feature* gameFeature);
void Features_removeDefault(Features* this, Feature* gameFeature);
void Features_remove(Features* this, Feature* gameFeature);
static void Features_init(Features* this);
bool Features_isDefault(Features* this, Feature* gameFeature);
bool Features_isFeature(Features* this, Feature* gameFeature);
void Features_toggle(Features* this, Feature* gameFeature);

// Static fields with runtime initializers: call this once at startup
void Features_staticInit(void) {
    Features_SINGLETON = NullUtil_getInstance()->NULL_OBJECT;
}

static void Features_initFields(Features* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    
    
}


Features* Features_getInstance(void) {
        if (Features_SINGLETON == NullUtil_getInstance()->NULL_OBJECT) {
            Features_SINGLETON = Features_new();
        }
        return ((Features*) Features_SINGLETON);
}


void Features_init(Features* this) {
    Features_initFields(this);
        this->list = BasicArrayListD_new();
        this->defaultList = BasicArrayListD_new();
        Features_init(this);
}

Features* Features_new(void) {
    Features* this = calloc(1, sizeof(Features));
    Features_init(this);
    return this;
}


// throws Exception
void Features_addDefault(Features* this, Feature* gameFeature) {
        Features_add(this, gameFeature);
        if (!BasicArrayList_contains(this->defaultList, gameFeature)) {
            BasicArrayList_add(this->defaultList, gameFeature);
        }
}


// throws Exception
void Features_add(Features* this, Feature* gameFeature) {
        if (!BasicArrayList_contains(this->list, gameFeature)) {
            LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), CommonLabels_getInstance()->START_LABEL), append, Feature_toString(gameFeature)), toString), this, this->commonStrings->ADD);
            BasicArrayList_add(this->list, gameFeature);
            GameFeatureEventHandler_fireEvent(GameFeatureEventHandler_getInstance(), GameFeatureEvent_new(gameFeature, Feature_toString(gameFeature)));
        }
}


// throws Exception
void Features_removeDefault(Features* this, Feature* gameFeature) {
        LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), CommonLabels_getInstance()->START_LABEL), append, Feature_toString(gameFeature)), toString), this, "removeDefault");
        Features_remove(this, gameFeature);
        BasicArrayList_remove(this->defaultList, gameFeature);
}


// throws Exception
void Features_remove(Features* this, Feature* gameFeature) {
        if (BasicArrayList_contains(this->list, gameFeature)) {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStrings->REMOVE);
            BasicArrayList_remove(this->list, gameFeature);
            GameFeatureEventHandler_fireEvent(GameFeatureEventHandler_getInstance(), GameFeatureEvent_new(gameFeature, Feature_toString(gameFeature)));
        }
}


static void Features_init(Features* this) {
        JAVA_TRY {
            GameFeatureFactory* gameFeatureFactory = GameFeatureFactory_getInstance();
            InputFeatureFactory* inputFeatureFactory = InputFeatureFactory_getInstance();
            SensorFeatureFactory* sensorFeatureFactory = SensorFeatureFactory_getInstance();
            TouchFeatureFactory* touchFeatureFactory = TouchFeatureFactory_getInstance();
            Features_addDefault(this, gameFeatureFactory->ARTIFICIAL_INTELLEGENCE_PROCESSOR);
            Features_addDefault(this, gameFeatureFactory->COLLIDABLE_INTERFACE_LAYER_PROCESSOR);
            Features_addDefault(this, gameFeatureFactory->GAME_INPUT_LAYER_PROCESSOR);
            Features_addDefault(this, gameFeatureFactory->TICKABLE_LAYER_PROCESSOR);
            Features_addDefault(this, inputFeatureFactory->MULTI_KEY_PRESS);
            Features_addDefault(this, inputFeatureFactory->REMOVE_DUPLICATE_KEY_PRESSES);
            Features_addDefault(this, gameFeatureFactory->SCREEN_SHAKE);
            Features_addDefault(this, gameFeatureFactory->POST_IMAGE_LOADING_MODIFICATION);
            GenericOperatingSystem* operatingSystemInterface = OperatingSystemFactory_getOperatingSystemInstance(OperatingSystemFactory_getInstance());
            if (GenericOperatingSystem_isOverScan(operatingSystemInterface)) {
                Features_addDefault(this, sensorFeatureFactory->NO_ORIENTATION);
                Features_addDefault(this, touchFeatureFactory->HIDE_SCREEN_BUTTONS);
            } else {
                Features_addDefault(this, sensorFeatureFactory->ORIENTATION_SENSORS);
                Features_addDefault(this, touchFeatureFactory->AUTO_HIDE_SHOW_SCREEN_BUTTONS);
            }
            Features_addDefault(this, touchFeatureFactory->TOUCH_ENABLED);
            Features_addDefault(this, MainFeatureFactory_getInstance()->FULL_SCREEN);
            Features_addDefault(this, MainFeatureFactory_getInstance()->LOAD_ONDEMAND);
        } JAVA_CATCH(Exception, e) {
            PreLogUtil_putOE(this->commonStrings->EXCEPTION, this, this->commonStrings->INIT, e);
        } JAVA_END_TRY;
}


bool Features_isDefault(Features* this, Feature* gameFeature) {
        return BasicArrayList_contains(this->defaultList, gameFeature);
}


bool Features_isFeature(Features* this, Feature* gameFeature) {
        return BasicArrayList_contains(this->list, gameFeature);
}


// throws Exception
void Features_toggle(Features* this, Feature* gameFeature) {
        if (Features_isFeature(this, gameFeature)) {
            Features_remove(this, gameFeature);
        } else {
            Features_add(this, gameFeature);
        }
}

