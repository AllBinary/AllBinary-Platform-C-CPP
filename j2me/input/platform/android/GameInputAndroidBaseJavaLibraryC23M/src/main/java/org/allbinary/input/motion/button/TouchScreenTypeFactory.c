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
// package org.allbinary.input.motion.button

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "android/app/Activity.h"
#include "android/content/res/Configuration.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"

typedef struct TouchScreenTypeFactory TouchScreenTypeFactory;
struct TouchScreenTypeFactory {
    char unused;
};

static TouchScreenTypeFactory* TouchScreenTypeFactory_instance;

TouchScreenTypeFactory* TouchScreenTypeFactory_new(void);
TouchScreenTypeFactory* TouchScreenTypeFactory_getInstance(void);
void TouchScreenTypeFactory_update(TouchScreenTypeFactory* this, Activity* activity);

// Static fields with runtime initializers: call this once at startup
void TouchScreenTypeFactory_staticInit(void) {
    TouchScreenTypeFactory_instance = TouchScreenTypeFactory_new();
}

void TouchScreenTypeFactory_init(TouchScreenTypeFactory* this) {
}

TouchScreenTypeFactory* TouchScreenTypeFactory_new(void) {
    TouchScreenTypeFactory* this = calloc(1, sizeof(TouchScreenTypeFactory));
    TouchScreenTypeFactory_init(this);
    return this;
}


TouchScreenTypeFactory* TouchScreenTypeFactory_getInstance(void) {
        return TouchScreenTypeFactory_instance;
}


void TouchScreenTypeFactory_update(TouchScreenTypeFactory* this, Activity* activity) {
        CommonStrings* commonStrings = CommonStrings_getInstance();
        TouchScreenFactory* touchScreenFactory = TouchScreenFactory_getInstance();
        TouchScreenTypesFactory* touchScreenTypesFactory = TouchScreenTypesFactory_getInstance();
        Configuration* configuration = JAVA_CALL(Activity_getResources(activity), getConfiguration);
        int32_t touchScreen = configuration->touchscreen;
        if (touchScreen == Configuration_TOUCHSCREEN_FINGER) {
            TouchScreenFactory_setTouchScreenType(touchScreenFactory, touchScreenTypesFactory->FINGER);
            if (!TouchScreenFactory_isTouch(touchScreenFactory)) {
                PreLogUtil_put("Not Really Exception: This indicates that a touch screen does exist but is not API8 so we will try it", this, commonStrings->PROCESS);
                TouchScreenFactory_setTouch(touchScreenFactory, true);
            }
        } else if (touchScreen == Configuration_TOUCHSCREEN_STYLUS) {
            TouchScreenFactory_setTouchScreenType(touchScreenFactory, touchScreenTypesFactory->STYLUS);
            if (!TouchScreenFactory_isTouch(touchScreenFactory)) {
                PreLogUtil_put("Not Really Exception: This indicates that a touch screen does exist but is not API8 so we will try it", this, commonStrings->PROCESS);
                TouchScreenFactory_setTouch(touchScreenFactory, true);
            }
        } else if (touchScreen == Configuration_TOUCHSCREEN_NOTOUCH) {
            TouchScreenFactory_setTouchScreenType(touchScreenFactory, touchScreenTypesFactory->NOTOUCH);
        } else if (touchScreen == Configuration_TOUCHSCREEN_UNDEFINED) {
            TouchScreenFactory_setTouchScreenType(touchScreenFactory, touchScreenTypesFactory->UNDEFINED);
        }
}

