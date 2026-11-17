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
// package org.allbinary.media

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "android/content/Context.h"
#include "android/os/Vibrator.h"
#include "org/allbinary/data/resource/ResourceUtil.h"
#include "org/allbinary/game/configuration/GameConfigurationCentral.h"
#include "org/allbinary/media/AllBinaryVibrationME.h"

typedef struct AllBinaryVibration AllBinaryVibration;
struct AllBinaryVibration {
    AllBinaryVibrationME base;
    Vibrator* vibrator;
};

static AllBinaryVibrationME* AllBinaryVibration_VIBRATION;

AllBinaryVibration* AllBinaryVibration_new(void);

void AllBinaryVibration_init(AllBinaryVibration* this);
AllBinaryVibrationME* AllBinaryVibration_getInstance(void);
void AllBinaryVibration_init(void);
void AllBinaryVibration_vibrate(AllBinaryVibration* this, int32_t duration, int32_t type, int32_t volume);

// Static fields with runtime initializers: call this once at startup
void AllBinaryVibration_staticInit(void) {
    AllBinaryVibration_VIBRATION = AllBinaryNoVibration_NO_VIBRATION;
}

static void AllBinaryVibration_initFields(AllBinaryVibration* this) {
    this->vibrator = ((Vibrator*) JAVA_CALL(ResourceUtil_getContext(ResourceUtil_getInstance()), getSystemService, Context_VIBRATOR_SERVICE));
}


void AllBinaryVibration_init(AllBinaryVibration* this) {
    AllBinaryVibrationME_init(&this->base);
    AllBinaryVibration_initFields(this);
}

AllBinaryVibration* AllBinaryVibration_new(void) {
    AllBinaryVibration* this = calloc(1, sizeof(AllBinaryVibration));
    AllBinaryVibration_init(this);
    return this;
}


AllBinaryVibrationME* AllBinaryVibration_getInstance(void) {
        return AllBinaryVibration_VIBRATION;
}


void AllBinaryVibration_init(void) {
        if (JAVA_CALL(JAVA_CALL(GameConfigurationCentral_getInstance()->VIBRATION, getValue), intValue) == 0) {
            AllBinaryVibration_VIBRATION = AllBinaryNoVibration_NO_VIBRATION;
        } else {
            AllBinaryVibration_VIBRATION = AllBinaryVibration_new();
        }
}


void AllBinaryVibration_vibrate(AllBinaryVibration* this, int32_t duration, int32_t type, int32_t volume) {
        Vibrator_vibrate(this->vibrator, ((int64_t) duration));
}

