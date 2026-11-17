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
// package org.allbinary.game.configuration

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/configuration/feature/Features.h"
#include "org/allbinary/game/configuration/feature/GameFeatureChoiceGroups.h"
#include "org/allbinary/game/configuration/feature/InGameFeatureChoiceGroups.h"
#include "org/allbinary/game/configuration/feature/SensorFeatureFactory.h"
#include "org/allbinary/game/configuration/feature/TouchFeatureFactory.h"
#include "org/allbinary/init/Init.h"
#include "org/allbinary/input/gyro/OrientationData.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"

typedef struct InGameFeatures InGameFeatures;
struct InGameFeatures {
    Init base;
};


InGameFeatures* InGameFeatures_new(void);
void InGameFeatures_init(InGameFeatures* this);
static void InGameFeatures_addToInGameMenu(InGameFeatures* this);
bool InGameFeatures_isAny(InGameFeatures* this);

void InGameFeatures_init(InGameFeatures* this) {
    Init_init(&this->base);
}

InGameFeatures* InGameFeatures_new(void) {
    InGameFeatures* this = calloc(1, sizeof(InGameFeatures));
    InGameFeatures_init(this);
    return this;
}


void InGameFeatures_init(InGameFeatures* this) {
        const char* LABEL = "Screen Buttons";
        OrientationData* orientationData = OrientationData_getInstance();
        BasicArrayList* exclusiveOrientationSensorVector = ((BasicArrayList*) JAVA_CALL(JAVA_CALL(GameFeatureChoiceGroups_getExclusiveInstance(), get), get, ((Any*) orientationData->ORIENTATION_SENSOR_INPUT)));
        InGameFeatureChoiceGroups* inGameFeatureChoiceGroups = InGameFeatureChoiceGroups_getExclusiveInstance();
        if (exclusiveOrientationSensorVector != nullptr) {
            Any* inGameExclusiveOrientationSensorVectorCanBeNull = JAVA_CALL(InGameFeatureChoiceGroups_get(inGameFeatureChoiceGroups), get, ((Any*) orientationData->ORIENTATION_SENSOR_INPUT));
            if (inGameExclusiveOrientationSensorVectorCanBeNull == nullptr) {
                InGameFeatures_addToInGameMenu(this);
            } else {
                BasicArrayList* inGameExclusiveOrientationSensorVector = ((BasicArrayList*) inGameExclusiveOrientationSensorVectorCanBeNull);
                if (BasicArrayList_size(inGameExclusiveOrientationSensorVector) == 0) {
                    InGameFeatures_addToInGameMenu(this);
                }
            }
        }
        Features* features = Features_getInstance();
        if (Features_isFeature(features, TouchFeatureFactory_getInstance()->SHOW_SCREEN_BUTTONS) || Features_isFeature(features, TouchFeatureFactory_getInstance()->AUTO_HIDE_SHOW_SCREEN_BUTTONS) || Features_isFeature(features, TouchFeatureFactory_getInstance()->HIDE_SCREEN_BUTTONS)) {
            BasicArrayList* exclusiveScreenButtonsVector = BasicArrayListD_new();
            TouchFeatureFactory* touchFeatureFactory = TouchFeatureFactory_getInstance();
            BasicArrayList_add(exclusiveScreenButtonsVector, touchFeatureFactory->AUTO_HIDE_SHOW_SCREEN_BUTTONS);
            BasicArrayList_add(exclusiveScreenButtonsVector, touchFeatureFactory->SHOW_SCREEN_BUTTONS);
            BasicArrayList_add(exclusiveScreenButtonsVector, touchFeatureFactory->HIDE_SCREEN_BUTTONS);
            InGameFeatureChoiceGroups_add(inGameFeatureChoiceGroups, LABEL, exclusiveScreenButtonsVector);
        }
}


static void InGameFeatures_addToInGameMenu(InGameFeatures* this) {
        OrientationData* orientationData = OrientationData_getInstance();
        BasicArrayList* inGameExclusiveOrientationSensorVector = BasicArrayListD_new();
        BasicArrayList_add(inGameExclusiveOrientationSensorVector, SensorFeatureFactory_getInstance()->ORIENTATION_SENSORS);
        BasicArrayList_add(inGameExclusiveOrientationSensorVector, SensorFeatureFactory_getInstance()->NO_ORIENTATION);
        JAVA_CALL(InGameFeatureChoiceGroups_getExclusiveInstance(), add, orientationData->ORIENTATION_SENSOR_INPUT, inGameExclusiveOrientationSensorVector);
}


bool InGameFeatures_isAny(InGameFeatures* this) {
        Features* features = Features_getInstance();
        TouchFeatureFactory* touchFeatureFactory = TouchFeatureFactory_getInstance();
        if (Features_isFeature(features, touchFeatureFactory->SHOW_SCREEN_BUTTONS) || Features_isFeature(features, touchFeatureFactory->AUTO_HIDE_SHOW_SCREEN_BUTTONS) || Features_isFeature(features, touchFeatureFactory->HIDE_SCREEN_BUTTONS)) {
            return true;
        }
        BasicArrayList* exclusiveOrientationSensorVector = ((BasicArrayList*) JAVA_CALL(JAVA_CALL(GameFeatureChoiceGroups_getExclusiveInstance(), get), get, ((Any*) OrientationData_getInstance()->ORIENTATION_SENSOR_INPUT)));
        if (exclusiveOrientationSensorVector != nullptr) {
            return true;
        }
        return false;
}

