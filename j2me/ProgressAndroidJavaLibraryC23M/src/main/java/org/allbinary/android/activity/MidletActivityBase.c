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
#include "android/app/Activity.h"
#include "android/view/MotionEvent.h"
#include "android/view/View.h"
#include "org/allbinary/android/GenericMotionEventVerifyInterface.h"
#include "org/allbinary/game/configuration/event/GameFeatureEvent.h"
#include "org/allbinary/game/configuration/event/GameFeatureListenerInterface.h"
#include "org/allbinary/game/configuration/event/GameInitializedEvent.h"
#include "org/allbinary/game/configuration/event/GameInitializedListenerInterface.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/android/activity/SimpleProgressActivityInterface.h"
#include "org/allbinary/android/activity/KeyInputViewCompositeInterface.h"

typedef struct MidletActivityBase MidletActivityBase;
struct MidletActivityBase {
    Activity base;
    GameFeatureListenerInterface GameFeatureListenerInterface_interface;
    GameInitializedListenerInterface GameInitializedListenerInterface_interface;
    SimpleProgressActivityInterface SimpleProgressActivityInterface_interface;
    KeyInputViewCompositeInterface KeyInputViewCompositeInterface_interface;
    GenericMotionEventVerifyInterface GenericMotionEventVerifyInterface_interface;
};


MidletActivityBase* MidletActivityBase_new(void);
void MidletActivityBase_onGameFeatureChange(MidletActivityBase* this, GameFeatureEvent* gameFeatureEvent);
void MidletActivityBase_onEvent(MidletActivityBase* this, AllBinaryEventObject* eventObject);
void MidletActivityBase_onGameInitialized(MidletActivityBase* this, GameInitializedEvent* gameInitializedEvent);
void MidletActivityBase_onSetProgress(MidletActivityBase* this, int32_t value, const char* text);
void MidletActivityBase_onDismissProgress(MidletActivityBase* this, int32_t* animationSequence);
void MidletActivityBase_onShowProgress(MidletActivityBase* this, bool indeterminate, int32_t* animationSequence);
View* MidletActivityBase_getRootView(MidletActivityBase* this);
View* MidletActivityBase_getView(MidletActivityBase* this);
void MidletActivityBase_setKeyInputView(MidletActivityBase* this, View* keyInputView);
bool MidletActivityBase_onGenericMotionEvent(MidletActivityBase* this, MotionEvent* event);

void MidletActivityBase_init(MidletActivityBase* this) {
    Activity_init(&this->base);
}

MidletActivityBase* MidletActivityBase_new(void) {
    MidletActivityBase* this = calloc(1, sizeof(MidletActivityBase));
    MidletActivityBase_init(this);
    return this;
}


void MidletActivityBase_onGameFeatureChange(MidletActivityBase* this, GameFeatureEvent* gameFeatureEvent) {
}


void MidletActivityBase_onEvent(MidletActivityBase* this, AllBinaryEventObject* eventObject) {
}


void MidletActivityBase_onGameInitialized(MidletActivityBase* this, GameInitializedEvent* gameInitializedEvent) {
}


// throws Exception
void MidletActivityBase_onSetProgress(MidletActivityBase* this, int32_t value, const char* text) {
}


// throws Exception
void MidletActivityBase_onDismissProgress(MidletActivityBase* this, int32_t* animationSequence) {
}


// throws Exception
void MidletActivityBase_onShowProgress(MidletActivityBase* this, bool indeterminate, int32_t* animationSequence) {
}


View* MidletActivityBase_getRootView(MidletActivityBase* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


View* MidletActivityBase_getView(MidletActivityBase* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


void MidletActivityBase_setKeyInputView(MidletActivityBase* this, View* keyInputView) {
}


bool MidletActivityBase_onGenericMotionEvent(MidletActivityBase* this, MotionEvent* event) {
        java_throw(java_exception_new("RuntimeException", ""));
}

