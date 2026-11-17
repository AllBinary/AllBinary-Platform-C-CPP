/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2025 AllBinary 
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
#include "org/allbinary/animation/transition/shake/NoShakeAnimationListener.h"
#include "org/allbinary/animation/transition/shake/ShakeAnimationListener.h"
#include "org/allbinary/animation/transition/shake/ShakeAnimationListenerFactory.h"
#include "org/allbinary/game/configuration/GameConfigurationCentral.h"
#include "org/allbinary/game/tick/TickableInterface.h"
#include "org/allbinary/media/AllBinaryNoVibration.h"
#include "org/allbinary/media/AllBinaryVibration.h"
#include "org/allbinary/media/AllBinaryVibrationME.h"

typedef struct AdvancedRTSProperties AdvancedRTSProperties;
struct AdvancedRTSProperties {
    ShakeAnimationListener* shakeListener;
    AllBinaryVibrationME* vibration;
    int32_t duration;
    TickableInterface* waypointBehaviorBase;
};


AdvancedRTSProperties* AdvancedRTSProperties_new(ShakeAnimationListener* shakeListener, AllBinaryVibrationME* vibration, int32_t duration, TickableInterface* waypointBehaviorBase);
AdvancedRTSProperties* AdvancedRTSProperties_createPropertiesSimulated(void);
AdvancedRTSProperties* AdvancedRTSProperties_createProperties(void);

void AdvancedRTSProperties_init(AdvancedRTSProperties* this, ShakeAnimationListener* shakeListener, AllBinaryVibrationME* vibration, int32_t duration, TickableInterface* waypointBehaviorBase);

static void AdvancedRTSProperties_initFields(AdvancedRTSProperties* this) {
    
    
    
    
}


AdvancedRTSProperties* AdvancedRTSProperties_createPropertiesSimulated(void) {
        return AdvancedRTSProperties_new(NoShakeAnimationListener_NO_SHAKE_ANIMATION_LISTENER, AllBinaryNoVibration_NO_VIBRATION, 0, WaypointBehaviorBase_new());
}


AdvancedRTSProperties* AdvancedRTSProperties_createProperties(void) {
        return AdvancedRTSProperties_new(ShakeAnimationListenerFactory_getInstance(), AllBinaryVibration_getInstance(), JAVA_CALL(JAVA_CALL(GameConfigurationCentral_getInstance()->VIBRATION, getValue), intValue) * 100, WaypointBehaviorBase_new());
}


void AdvancedRTSProperties_init(AdvancedRTSProperties* this, ShakeAnimationListener* shakeListener, AllBinaryVibrationME* vibration, int32_t duration, TickableInterface* waypointBehaviorBase) {
    AdvancedRTSProperties_initFields(this);
        this->shakeListener = shakeListener;
        this->vibration = vibration;
        this->duration = duration;
        this->waypointBehaviorBase = waypointBehaviorBase;
}

AdvancedRTSProperties* AdvancedRTSProperties_new(ShakeAnimationListener* shakeListener, AllBinaryVibrationME* vibration, int32_t duration, TickableInterface* waypointBehaviorBase) {
    AdvancedRTSProperties* this = calloc(1, sizeof(AdvancedRTSProperties));
    AdvancedRTSProperties_init(this, shakeListener, vibration, duration, waypointBehaviorBase);
    return this;
}

