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
// package org.allbinary.android

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "android/app/Activity.h"

typedef struct ActivityFractureUtil ActivityFractureUtil;
struct ActivityFractureUtil {
    char unused;
};


ActivityFractureUtil* ActivityFractureUtil_new(void);
void ActivityFractureUtil_process(ActivityFractureUtil* this, Activity* activity);
void ActivityFractureUtil_setFullScreen(ActivityFractureUtil* this, Activity* activity);

void ActivityFractureUtil_init(ActivityFractureUtil* this) {
}

ActivityFractureUtil* ActivityFractureUtil_new(void) {
    ActivityFractureUtil* this = calloc(1, sizeof(ActivityFractureUtil));
    ActivityFractureUtil_init(this);
    return this;
}


// throws Exception
void ActivityFractureUtil_process(ActivityFractureUtil* this, Activity* activity) {
}


void ActivityFractureUtil_setFullScreen(ActivityFractureUtil* this, Activity* activity) {
}

