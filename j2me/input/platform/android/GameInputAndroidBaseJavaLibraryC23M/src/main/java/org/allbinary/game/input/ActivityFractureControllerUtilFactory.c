// Generated Code Do Not Modify
// package org.allbinary.game.input

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/android/AndroidInfoFactory.h"

typedef struct ActivityFractureControllerUtilFactory ActivityFractureControllerUtilFactory;
struct ActivityFractureControllerUtilFactory {
    char unused;
};


ActivityFractureControllerUtilFactory* ActivityFractureControllerUtilFactory_new(void);
AndroidKeyFactory* ActivityFractureControllerUtilFactory_getInstance(void);

void ActivityFractureControllerUtilFactory_init(ActivityFractureControllerUtilFactory* this) {
}

ActivityFractureControllerUtilFactory* ActivityFractureControllerUtilFactory_new(void) {
    ActivityFractureControllerUtilFactory* this = calloc(1, sizeof(ActivityFractureControllerUtilFactory));
    ActivityFractureControllerUtilFactory_init(this);
    return this;
}


AndroidKeyFactory* ActivityFractureControllerUtilFactory_getInstance(void) {
        int32_t SDK_VERSION = AndroidInfoFactory_getVersion(AndroidInfoFactory_getInstance());
        if (SDK_VERSION <= 8) {
            return AndroidAPI1KeyFactory_getInstance();
        } else if (SDK_VERSION <= 11) {
            return AndroidAPI9KeyFactory_getInstance();
        } else {
            return AndroidAPI12KeyFactory_getAPI12Instance();
        }
}

