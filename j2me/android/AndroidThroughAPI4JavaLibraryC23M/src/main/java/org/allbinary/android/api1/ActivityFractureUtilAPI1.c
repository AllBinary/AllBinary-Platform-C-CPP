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
// package org.allbinary.android.api1

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/android/ActivityFractureUtil.h"
#include "android/app/Activity.h"
#include "android/view/WindowManager.h"

typedef struct ActivityFractureUtilAPI1 ActivityFractureUtilAPI1;
struct ActivityFractureUtilAPI1 {
    ActivityFractureUtil base;
};

static ActivityFractureUtilAPI1* ActivityFractureUtilAPI1_instance;

ActivityFractureUtilAPI1* ActivityFractureUtilAPI1_new(void);
ActivityFractureUtilAPI1* ActivityFractureUtilAPI1_getInstance(void);
void ActivityFractureUtilAPI1_process(ActivityFractureUtilAPI1* this, Activity* activity);
void ActivityFractureUtilAPI1_setFullScreen(ActivityFractureUtilAPI1* this, Activity* activity);

// Static fields with runtime initializers: call this once at startup
void ActivityFractureUtilAPI1_staticInit(void) {
    ActivityFractureUtilAPI1_instance = ActivityFractureUtilAPI1_new();
}

void ActivityFractureUtilAPI1_init(ActivityFractureUtilAPI1* this) {
    ActivityFractureUtil_init(&this->base);
}

ActivityFractureUtilAPI1* ActivityFractureUtilAPI1_new(void) {
    ActivityFractureUtilAPI1* this = calloc(1, sizeof(ActivityFractureUtilAPI1));
    ActivityFractureUtilAPI1_init(this);
    return this;
}


ActivityFractureUtilAPI1* ActivityFractureUtilAPI1_getInstance(void) {
        return ActivityFractureUtilAPI1_instance;
}


// throws Exception
void ActivityFractureUtilAPI1_process(ActivityFractureUtilAPI1* this, Activity* activity) {
}


void ActivityFractureUtilAPI1_setFullScreen(ActivityFractureUtilAPI1* this, Activity* activity) {
        JAVA_CALL(Activity_getWindow(activity), setFlags, WindowManager_LayoutParams->FLAG_FULLSCREEN, WindowManager_LayoutParams->FLAG_FULLSCREEN);
}

