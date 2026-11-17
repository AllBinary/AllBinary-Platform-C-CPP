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
#include "android/view/View.h"
#include "org/allbinary/android/activity/KeyInputViewCompositeInterface.h"

typedef struct NullKeyInputViewComposite NullKeyInputViewComposite;
struct NullKeyInputViewComposite {
    KeyInputViewCompositeInterface KeyInputViewCompositeInterface_interface;
};

NullKeyInputViewComposite* NullKeyInputViewComposite_NULL_KEY_INPUT_VIEW_COMPOSITE;

NullKeyInputViewComposite* NullKeyInputViewComposite_new(void);
void NullKeyInputViewComposite_setKeyInputView(NullKeyInputViewComposite* this, View* keyInputView);
View* NullKeyInputViewComposite_getRootView(NullKeyInputViewComposite* this);
View* NullKeyInputViewComposite_getView(NullKeyInputViewComposite* this);
void NullKeyInputViewComposite_runOnUiThread(NullKeyInputViewComposite* this, Runnable* action);

// Static fields with runtime initializers: call this once at startup
void NullKeyInputViewComposite_staticInit(void) {
    NullKeyInputViewComposite_NULL_KEY_INPUT_VIEW_COMPOSITE = NullKeyInputViewComposite_new();
}

void NullKeyInputViewComposite_init(NullKeyInputViewComposite* this) {
}

NullKeyInputViewComposite* NullKeyInputViewComposite_new(void) {
    NullKeyInputViewComposite* this = calloc(1, sizeof(NullKeyInputViewComposite));
    NullKeyInputViewComposite_init(this);
    return this;
}


void NullKeyInputViewComposite_setKeyInputView(NullKeyInputViewComposite* this, View* keyInputView) {
}


View* NullKeyInputViewComposite_getRootView(NullKeyInputViewComposite* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


View* NullKeyInputViewComposite_getView(NullKeyInputViewComposite* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


void NullKeyInputViewComposite_runOnUiThread(NullKeyInputViewComposite* this, Runnable* action) {
}

