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
// package org.allbinary.android.api16

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

typedef struct ActivityFractureUtilAPI16 ActivityFractureUtilAPI16;
struct ActivityFractureUtilAPI16 {
    ActivityFractureUtilAPI5 base;
};

static ActivityFractureUtilAPI16* ActivityFractureUtilAPI16_instance16;

ActivityFractureUtilAPI16* ActivityFractureUtilAPI16_new(void);
ActivityFractureUtilAPI16* ActivityFractureUtilAPI16_getInstance(void);
void ActivityFractureUtilAPI16_setFullScreen(ActivityFractureUtilAPI16* this, Activity* activity);

// Static fields with runtime initializers: call this once at startup
void ActivityFractureUtilAPI16_staticInit(void) {
    ActivityFractureUtilAPI16_instance16 = ActivityFractureUtilAPI16_new();
}

void ActivityFractureUtilAPI16_init(ActivityFractureUtilAPI16* this) {
    ActivityFractureUtilAPI5_init(&this->base);
}

ActivityFractureUtilAPI16* ActivityFractureUtilAPI16_new(void) {
    ActivityFractureUtilAPI16* this = calloc(1, sizeof(ActivityFractureUtilAPI16));
    ActivityFractureUtilAPI16_init(this);
    return this;
}


ActivityFractureUtilAPI16* ActivityFractureUtilAPI16_getInstance(void) {
        return ActivityFractureUtilAPI16_instance16;
}


void ActivityFractureUtilAPI16_setFullScreen(ActivityFractureUtilAPI16* this, Activity* activity) {
        View* decorView = JAVA_CALL(Activity_getWindow(activity), getDecorView);
        int32_t visibility = View_SYSTEM_UI_FLAG_HIDE_NAVIGATION | View_SYSTEM_UI_FLAG_FULLSCREEN;
        View_setSystemUiVisibility(decorView, visibility);
}

