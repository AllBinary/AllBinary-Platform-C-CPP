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
// package org.allbinary.android.api5

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "android/app/Activity.h"
#include "org/allbinary/input/motion/button/TouchScreenTypeFactory.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/android/api1/ActivityFractureUtilAPI1.h"
#include "org/allbinary/input/motion/button/TouchScreenFactory.h"

typedef struct ActivityFractureUtilAPI5 ActivityFractureUtilAPI5;
struct ActivityFractureUtilAPI5 {
    ActivityFractureUtilAPI1 base;
    const char* FEATURE_TOUCHSCREEN_MULTITOUCH;
    const char* FEATURE_TOUCHSCREEN;
    const char* FEATURE_TOUCHSCREEN_MULTITOUCH_DISTINCT;
};

static ActivityFractureUtilAPI5* ActivityFractureUtilAPI5_instance5;

ActivityFractureUtilAPI5* ActivityFractureUtilAPI5_new(void);
ActivityFractureUtilAPI5* ActivityFractureUtilAPI5_getInstance(void);
void ActivityFractureUtilAPI5_process(ActivityFractureUtilAPI5* this, Activity* activity);
static bool ActivityFractureUtilAPI5_isTouch(ActivityFractureUtilAPI5* this, Activity* activity);
static bool ActivityFractureUtilAPI5_isMultiTouch(ActivityFractureUtilAPI5* this, Activity* activity);
static bool ActivityFractureUtilAPI5_isMultiTouchDistinct(ActivityFractureUtilAPI5* this, Activity* activity);
static bool ActivityFractureUtilAPI5_isFeature(ActivityFractureUtilAPI5* this, Activity* activity, const char* property);

// Static fields with runtime initializers: call this once at startup
void ActivityFractureUtilAPI5_staticInit(void) {
    ActivityFractureUtilAPI5_instance5 = ActivityFractureUtilAPI5_new();
}

static void ActivityFractureUtilAPI5_initFields(ActivityFractureUtilAPI5* this) {
    this->FEATURE_TOUCHSCREEN_MULTITOUCH = "android.hardware.touchscreen.multitouch";
    this->FEATURE_TOUCHSCREEN = "android.hardware.touchscreen";
    this->FEATURE_TOUCHSCREEN_MULTITOUCH_DISTINCT = "android.hardware.touchscreen.multitouch.distinct";
}

void ActivityFractureUtilAPI5_init(ActivityFractureUtilAPI5* this) {
    ActivityFractureUtilAPI1_init(&this->base);
    ActivityFractureUtilAPI5_initFields(this);
}

ActivityFractureUtilAPI5* ActivityFractureUtilAPI5_new(void) {
    ActivityFractureUtilAPI5* this = calloc(1, sizeof(ActivityFractureUtilAPI5));
    ActivityFractureUtilAPI5_init(this);
    return this;
}


ActivityFractureUtilAPI5* ActivityFractureUtilAPI5_getInstance(void) {
        return ActivityFractureUtilAPI5_instance5;
}


void ActivityFractureUtilAPI5_process(ActivityFractureUtilAPI5* this, Activity* activity) {
        TouchScreenFactory* touchScreenFactory = TouchScreenFactory_getInstance();
        TouchScreenTypeFactory* touchScreenTypeFactory = TouchScreenTypeFactory_getInstance();
        TouchScreenFactory_setTouch(touchScreenFactory, ActivityFractureUtilAPI5_isTouch(this, activity));
        TouchScreenFactory_setMultiTouch(touchScreenFactory, ActivityFractureUtilAPI5_isMultiTouch(this, activity));
        TouchScreenFactory_setMultiTouchDistinct(touchScreenFactory, ActivityFractureUtilAPI5_isMultiTouchDistinct(this, activity));
        TouchScreenTypeFactory_update(touchScreenTypeFactory, activity);
        CommonStrings* commonStrings = CommonStrings_getInstance();
        PreLogUtil_put(TouchScreenFactory_toString(touchScreenFactory), this, commonStrings->PROCESS);
}


static bool ActivityFractureUtilAPI5_isTouch(ActivityFractureUtilAPI5* this, Activity* activity) {
        return ActivityFractureUtilAPI5_isFeature(this, activity, this->FEATURE_TOUCHSCREEN);
}


static bool ActivityFractureUtilAPI5_isMultiTouch(ActivityFractureUtilAPI5* this, Activity* activity) {
        return ActivityFractureUtilAPI5_isFeature(this, activity, this->FEATURE_TOUCHSCREEN_MULTITOUCH);
}


static bool ActivityFractureUtilAPI5_isMultiTouchDistinct(ActivityFractureUtilAPI5* this, Activity* activity) {
        return ActivityFractureUtilAPI5_isFeature(this, activity, this->FEATURE_TOUCHSCREEN_MULTITOUCH_DISTINCT);
}


static bool ActivityFractureUtilAPI5_isFeature(ActivityFractureUtilAPI5* this, Activity* activity, const char* property) {
        return JAVA_CALL(Activity_getPackageManager(activity), hasSystemFeature, property);
}

