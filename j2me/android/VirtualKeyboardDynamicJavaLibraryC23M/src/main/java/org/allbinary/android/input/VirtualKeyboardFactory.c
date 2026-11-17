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
// package org.allbinary.android.input

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/android/AndroidInfoFactory.h"
#include "org/allbinary/android/input/api1/VirtualKeyboardAPI1.h"
#include "org/allbinary/android/input/api3/VirtualKeyboardAPI3.h"
#include "android/app/Activity.h"

typedef struct VirtualKeyboardFactory VirtualKeyboardFactory;
struct VirtualKeyboardFactory {
    char unused;
};

static VirtualKeyboard* VirtualKeyboardFactory_virtualKeyboard;

VirtualKeyboardFactory* VirtualKeyboardFactory_new(void);
void VirtualKeyboardFactory_init(Activity* activity);
VirtualKeyboard* VirtualKeyboardFactory_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void VirtualKeyboardFactory_staticInit(void) {
    VirtualKeyboardFactory_virtualKeyboard = VirtualKeyboard_NULL_VIRTUAL_KEYBOARD;
}

void VirtualKeyboardFactory_init(VirtualKeyboardFactory* this) {
}

VirtualKeyboardFactory* VirtualKeyboardFactory_new(void) {
    VirtualKeyboardFactory* this = calloc(1, sizeof(VirtualKeyboardFactory));
    VirtualKeyboardFactory_init(this);
    return this;
}


void VirtualKeyboardFactory_init(Activity* activity) {
        int32_t SDK_VERSION = AndroidInfoFactory_getVersion(AndroidInfoFactory_getInstance());
        if (SDK_VERSION <= 2) {
            VirtualKeyboardFactory_virtualKeyboard = VirtualKeyboardAPI1_new(activity);
        } else {
            VirtualKeyboardFactory_virtualKeyboard = VirtualKeyboardAPI3_new(activity);
        }
}


VirtualKeyboard* VirtualKeyboardFactory_getInstance(void) {
        return VirtualKeyboardFactory_virtualKeyboard;
}

