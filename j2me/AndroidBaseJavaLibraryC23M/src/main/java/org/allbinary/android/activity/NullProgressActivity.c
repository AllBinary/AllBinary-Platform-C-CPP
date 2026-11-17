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
// package org.allbinary.android.activity

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/android/activity/ProgressActivityInterface.h"

typedef struct NullProgressActivity NullProgressActivity;
struct NullProgressActivity {
    ProgressActivityInterface ProgressActivityInterface_interface;
};

NullProgressActivity* NullProgressActivity_NULL_PROGRESS_ACTIVITY;

NullProgressActivity* NullProgressActivity_new(void);
void NullProgressActivity_runOnUiThread(NullProgressActivity* this, Runnable* action);
void NullProgressActivity_onDismissTitleProgressBar(NullProgressActivity* this);
void NullProgressActivity_onShowTitleProgressBar(NullProgressActivity* this, int32_t value, bool indeterminate);
void NullProgressActivity_onTitleProgressBarSetProgress(NullProgressActivity* this, int32_t value);

// Static fields with runtime initializers: call this once at startup
void NullProgressActivity_staticInit(void) {
    NullProgressActivity_NULL_PROGRESS_ACTIVITY = NullProgressActivity_new();
}

void NullProgressActivity_init(NullProgressActivity* this) {
}

NullProgressActivity* NullProgressActivity_new(void) {
    NullProgressActivity* this = calloc(1, sizeof(NullProgressActivity));
    NullProgressActivity_init(this);
    return this;
}


void NullProgressActivity_runOnUiThread(NullProgressActivity* this, Runnable* action) {
}


void NullProgressActivity_onDismissTitleProgressBar(NullProgressActivity* this) {
}


void NullProgressActivity_onShowTitleProgressBar(NullProgressActivity* this, int32_t value, bool indeterminate) {
}


void NullProgressActivity_onTitleProgressBarSetProgress(NullProgressActivity* this, int32_t value) {
}

