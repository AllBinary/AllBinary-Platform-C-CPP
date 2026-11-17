/*
 *
 * AllBinary Open License Version 1
 * Copyright (c) 2009 AllBinary
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
// package org.allbinary.android.input.motion

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/android/ActivityFractureUtil.h"
#include "org/allbinary/android/AndroidInfoFactory.h"
#include "org/allbinary/android/api1/ActivityFractureUtilAPI1.h"
#include "org/allbinary/android/api16/ActivityFractureUtilAPI16.h"
#include "org/allbinary/android/api19/ActivityFractureUtilAPI19.h"
#include "org/allbinary/android/api5/ActivityFractureUtilAPI5.h"

typedef struct ActivityFractureInputUtilFactory ActivityFractureInputUtilFactory;
struct ActivityFractureInputUtilFactory {
    char unused;
};


ActivityFractureInputUtilFactory* ActivityFractureInputUtilFactory_new(void);
ActivityFractureUtil* ActivityFractureInputUtilFactory_getInstance(void);

void ActivityFractureInputUtilFactory_init(ActivityFractureInputUtilFactory* this) {
}

ActivityFractureInputUtilFactory* ActivityFractureInputUtilFactory_new(void) {
    ActivityFractureInputUtilFactory* this = calloc(1, sizeof(ActivityFractureInputUtilFactory));
    ActivityFractureInputUtilFactory_init(this);
    return this;
}


ActivityFractureUtil* ActivityFractureInputUtilFactory_getInstance(void) {
        int32_t SDK_VERSION = AndroidInfoFactory_getVersion(AndroidInfoFactory_getInstance());
        if (SDK_VERSION <= 4) {
            return ActivityFractureUtilAPI1_getInstance();
        } else if (SDK_VERSION <= 15) {
            return ActivityFractureUtilAPI5_getInstance();
        } else if (SDK_VERSION <= 16) {
            return ActivityFractureUtilAPI16_getInstance();
        } else {
            return ActivityFractureUtilAPI19_getInstance();
        }
}

