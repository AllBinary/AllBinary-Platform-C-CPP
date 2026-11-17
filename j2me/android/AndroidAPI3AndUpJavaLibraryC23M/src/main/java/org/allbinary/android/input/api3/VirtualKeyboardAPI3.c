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
// package org.allbinary.android.input.api3

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "android/app/Activity.h"
#include "org/allbinary/android/input/VirtualKeyboard.h"
#include "org/allbinary/input/event/VirtualKeyboardEvent.h"
#include "org/allbinary/input/event/VirtualKeyboardEventHandler.h"
#include "org/allbinary/input/event/VirtualKeyboardEventListenerInterface.h"
#include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/EventStrings.h"

typedef struct VirtualKeyboardAPI3 VirtualKeyboardAPI3;
struct VirtualKeyboardAPI3 {
    VirtualKeyboard base;
    VirtualKeyboardEventListenerInterface VirtualKeyboardEventListenerInterface_interface;
    bool virtualKeyboard;
    Activity* activity;
    Runnable* showVirtualKeyboardRunnable;
    Runnable* hideVirtualKeyboardRunnable;
};

int32_t VirtualKeyboardAPI3_MAX_API;
int32_t VirtualKeyboardAPI3_MIN_API = 3;

VirtualKeyboardAPI3* VirtualKeyboardAPI3_new(Activity* activity);

void VirtualKeyboardAPI3_init(VirtualKeyboardAPI3* this, Activity* activity);
void VirtualKeyboardAPI3_onEvent(VirtualKeyboardAPI3* this, AllBinaryEventObject* eventObject);
void VirtualKeyboardAPI3_onVirtualKeyboardEvent(VirtualKeyboardAPI3* this, VirtualKeyboardEvent* virtualKeyboardEvent);
void VirtualKeyboardAPI3_forceHide(VirtualKeyboardAPI3* this);
void VirtualKeyboardAPI3_hide(VirtualKeyboardAPI3* this);
static void VirtualKeyboardAPI3_showVirtualKeyboard(VirtualKeyboardAPI3* this);
static void VirtualKeyboardAPI3_hideVirtualKeyboard(VirtualKeyboardAPI3* this);

// Static fields with runtime initializers: call this once at startup
void VirtualKeyboardAPI3_staticInit(void) {
    VirtualKeyboardAPI3_MAX_API = Integer_MAX_VALUE;
}

static void VirtualKeyboardAPI3_initFields(VirtualKeyboardAPI3* this) {
    this->virtualKeyboard = false;
    
    
    
}


void VirtualKeyboardAPI3_init(VirtualKeyboardAPI3* this, Activity* activity) {
        VirtualKeyboard_init(&this->base);
        VirtualKeyboardAPI3_initFields(this);
        this->activity = activity;
        this->showVirtualKeyboardRunnable = ShowVirtualKeyboardRunnable_new(this->activity);
        this->hideVirtualKeyboardRunnable = HideVirtualKeyboardRunnable_new(this->activity);
        VirtualKeyboardEventHandler* virtualKeyboardEventHandler = VirtualKeyboardEventHandler_getInstance();
        VirtualKeyboardEventHandler_removeAllListeners(virtualKeyboardEventHandler);
        VirtualKeyboardEventHandler_addListenerInterface(virtualKeyboardEventHandler, this);
}

VirtualKeyboardAPI3* VirtualKeyboardAPI3_new(Activity* activity) {
    VirtualKeyboardAPI3* this = calloc(1, sizeof(VirtualKeyboardAPI3));
    VirtualKeyboardAPI3_init(this, activity);
    return this;
}


void VirtualKeyboardAPI3_onEvent(VirtualKeyboardAPI3* this, AllBinaryEventObject* eventObject) {
        ForcedLogUtil_log(EventStrings_getInstance()->PERFORMANCE_MESSAGE, this);
}


void VirtualKeyboardAPI3_onVirtualKeyboardEvent(VirtualKeyboardAPI3* this, VirtualKeyboardEvent* virtualKeyboardEvent) {
        bool isShow = ((bool) VirtualKeyboardEvent_getSource(virtualKeyboardEvent));
        if (Boolean_booleanValue(isShow)) {
            VirtualKeyboardAPI3_showVirtualKeyboard(this);
        } else {
            VirtualKeyboardAPI3_hideVirtualKeyboard(this);
        }
}


void VirtualKeyboardAPI3_forceHide(VirtualKeyboardAPI3* this) {
        VirtualKeyboardAPI3_hideVirtualKeyboard(this);
}


void VirtualKeyboardAPI3_hide(VirtualKeyboardAPI3* this) {
        if (this->virtualKeyboard) {
            VirtualKeyboardAPI3_forceHide(this);
        }
}


static void VirtualKeyboardAPI3_showVirtualKeyboard(VirtualKeyboardAPI3* this) {
        Activity_runOnUiThread(this->activity, this->showVirtualKeyboardRunnable);
        this->virtualKeyboard = true;
}


static void VirtualKeyboardAPI3_hideVirtualKeyboard(VirtualKeyboardAPI3* this) {
        Activity_runOnUiThread(this->activity, this->hideVirtualKeyboardRunnable);
        this->virtualKeyboard = false;
}

