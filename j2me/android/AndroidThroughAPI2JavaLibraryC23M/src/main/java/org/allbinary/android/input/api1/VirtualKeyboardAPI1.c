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
// package org.allbinary.android.input.api1

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/android/input/VirtualKeyboard.h"
#include "org/allbinary/input/event/VirtualKeyboardEventListenerInterface.h"
#include "android/app/Activity.h"
#include "org/allbinary/input/event/VirtualKeyboardEvent.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"

typedef struct VirtualKeyboardAPI1 VirtualKeyboardAPI1;
struct VirtualKeyboardAPI1 {
    VirtualKeyboard base;
    VirtualKeyboardEventListenerInterface VirtualKeyboardEventListenerInterface_interface;
};

int32_t VirtualKeyboardAPI1_MIN_API = 1;
int32_t VirtualKeyboardAPI1_MAX_API = 2;

VirtualKeyboardAPI1* VirtualKeyboardAPI1_new(Activity* activity);

void VirtualKeyboardAPI1_init(VirtualKeyboardAPI1* this, Activity* activity);
void VirtualKeyboardAPI1_onVirtualKeyboardEvent(VirtualKeyboardAPI1* this, VirtualKeyboardEvent* virtualKeyboardEvent);
void VirtualKeyboardAPI1_onEvent(VirtualKeyboardAPI1* this, AllBinaryEventObject* eventObject);


void VirtualKeyboardAPI1_init(VirtualKeyboardAPI1* this, Activity* activity) {
    VirtualKeyboard_init(&this->base);
}

VirtualKeyboardAPI1* VirtualKeyboardAPI1_new(Activity* activity) {
    VirtualKeyboardAPI1* this = calloc(1, sizeof(VirtualKeyboardAPI1));
    VirtualKeyboardAPI1_init(this, activity);
    return this;
}


void VirtualKeyboardAPI1_onVirtualKeyboardEvent(VirtualKeyboardAPI1* this, VirtualKeyboardEvent* virtualKeyboardEvent) {
        VirtualKeyboard_onVirtualKeyboardEvent((&this->base), virtualKeyboardEvent);
}


void VirtualKeyboardAPI1_onEvent(VirtualKeyboardAPI1* this, AllBinaryEventObject* eventObject) {
        VirtualKeyboard_onEvent((&this->base), eventObject);
}

