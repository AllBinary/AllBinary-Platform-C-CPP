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
// package org.allbinary.android.api19

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "android/app/Activity.h"
#include "android/view/View.h"
#include "org/allbinary/android/api5/ActivityFractureUtilAPI5.h"

typedef struct ActivityFractureUtilAPI19 ActivityFractureUtilAPI19;
struct ActivityFractureUtilAPI19 {
    ActivityFractureUtilAPI5 base;
};

static ActivityFractureUtilAPI19* ActivityFractureUtilAPI19_instance19;

ActivityFractureUtilAPI19* ActivityFractureUtilAPI19_new(void);
ActivityFractureUtilAPI19* ActivityFractureUtilAPI19_getInstance(void);
void ActivityFractureUtilAPI19_setFullScreen(ActivityFractureUtilAPI19* this, Activity* activity);

// Static fields with runtime initializers: call this once at startup
void ActivityFractureUtilAPI19_staticInit(void) {
    ActivityFractureUtilAPI19_instance19 = ActivityFractureUtilAPI19_new();
}

void ActivityFractureUtilAPI19_init(ActivityFractureUtilAPI19* this) {
    ActivityFractureUtilAPI5_init(&this->base);
}

ActivityFractureUtilAPI19* ActivityFractureUtilAPI19_new(void) {
    ActivityFractureUtilAPI19* this = calloc(1, sizeof(ActivityFractureUtilAPI19));
    ActivityFractureUtilAPI19_init(this);
    return this;
}


ActivityFractureUtilAPI19* ActivityFractureUtilAPI19_getInstance(void) {
        return ActivityFractureUtilAPI19_instance19;
}


void ActivityFractureUtilAPI19_setFullScreen(ActivityFractureUtilAPI19* this, Activity* activity) {
        View* decorView = JAVA_CALL(Activity_getWindow(activity), getDecorView);
        int32_t visibility = View_SYSTEM_UI_FLAG_IMMERSIVE_STICKY | View_SYSTEM_UI_FLAG_HIDE_NAVIGATION | View_SYSTEM_UI_FLAG_FULLSCREEN;
        View_setSystemUiVisibility(decorView, visibility);
}

