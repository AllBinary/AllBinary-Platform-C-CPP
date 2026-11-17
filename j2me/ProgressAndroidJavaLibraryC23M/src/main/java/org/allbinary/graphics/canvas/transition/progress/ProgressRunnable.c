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
// package org.allbinary.graphics.canvas.transition.progress

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "android/app/Activity.h"
#include "org/allbinary/android/activity/MidletActivityBase.h"
#include "org/allbinary/android/activity/SimpleProgressActivityInterface.h"
#include "org/allbinary/thread/ARunnable.h"

typedef struct ProgressRunnable ProgressRunnable;
struct ProgressRunnable {
    ARunnable base;
    SimpleProgressActivityInterface* midletActivity;
    ProgressCanvas* progressCanvas;
};


ProgressRunnable* ProgressRunnable_new(Activity* midletActivity, ProgressCanvas* progressCanvas);

void ProgressRunnable_init(ProgressRunnable* this, Activity* midletActivity, ProgressCanvas* progressCanvas);
void ProgressRunnable_run(ProgressRunnable* this);

static void ProgressRunnable_initFields(ProgressRunnable* this) {
    
    
}


void ProgressRunnable_init(ProgressRunnable* this, Activity* midletActivity, ProgressCanvas* progressCanvas) {
    ARunnable_init(&this->base);
    ProgressRunnable_initFields(this);
        MidletActivityBase* midletActivity2 = ((MidletActivityBase*) midletActivity);
        this->midletActivity = ((SimpleProgressActivityInterface*) midletActivity2);
        this->progressCanvas = progressCanvas;
}

ProgressRunnable* ProgressRunnable_new(Activity* midletActivity, ProgressCanvas* progressCanvas) {
    ProgressRunnable* this = calloc(1, sizeof(ProgressRunnable));
    ProgressRunnable_init(this, midletActivity, progressCanvas);
    return this;
}


void ProgressRunnable_run(ProgressRunnable* this) {
}

