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
// package org.allbinary.android.api30

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "android/app/Activity.h"
#include "android/view/Window.h"
#include "androidx/core/view/WindowCompat.h"
#include "androidx/core/view/WindowInsetsCompat.h"
#include "androidx/core/view/WindowInsetsControllerCompat.h"
#include "org/allbinary/android/api5/ActivityFractureUtilAPI5.h"

typedef struct ActivityFractureUtilAPI30 ActivityFractureUtilAPI30;
struct ActivityFractureUtilAPI30 {
    ActivityFractureUtilAPI5 base;
};

static ActivityFractureUtilAPI30* ActivityFractureUtilAPI30_instance30;

ActivityFractureUtilAPI30* ActivityFractureUtilAPI30_new(void);
ActivityFractureUtilAPI30* ActivityFractureUtilAPI30_getInstance(void);
void ActivityFractureUtilAPI30_setFullScreen(ActivityFractureUtilAPI30* this, Activity* activity);

// Static fields with runtime initializers: call this once at startup
void ActivityFractureUtilAPI30_staticInit(void) {
    ActivityFractureUtilAPI30_instance30 = ActivityFractureUtilAPI30_new();
}

void ActivityFractureUtilAPI30_init(ActivityFractureUtilAPI30* this) {
    ActivityFractureUtilAPI5_init(&this->base);
}

ActivityFractureUtilAPI30* ActivityFractureUtilAPI30_new(void) {
    ActivityFractureUtilAPI30* this = calloc(1, sizeof(ActivityFractureUtilAPI30));
    ActivityFractureUtilAPI30_init(this);
    return this;
}


ActivityFractureUtilAPI30* ActivityFractureUtilAPI30_getInstance(void) {
        return ActivityFractureUtilAPI30_instance30;
}


void ActivityFractureUtilAPI30_setFullScreen(ActivityFractureUtilAPI30* this, Activity* activity) {
        Window* window = Activity_getWindow(activity);
        WindowInsetsControllerCompat* windowInsetsController = WindowCompat_getInsetsController(window, Window_getDecorView(window));
        WindowInsetsControllerCompat_hide(windowInsetsController, JAVA_CALL(WindowInsetsCompat_Type, systemBars));
        WindowInsetsControllerCompat_setSystemBarsBehavior(windowInsetsController, WindowInsetsControllerCompat_BEHAVIOR_SHOW_TRANSIENT_BARS_BY_SWIPE);
}

