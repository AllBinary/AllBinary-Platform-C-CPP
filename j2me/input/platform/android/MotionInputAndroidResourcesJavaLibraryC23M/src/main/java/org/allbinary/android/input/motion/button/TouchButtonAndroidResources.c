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
// package org.allbinary.android.input.motion.button

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/AndroidResources.h"
#include "org/allbinary/data/resource/ResourceUtil.h"
#include "org/allbinary/init/Init.h"
#include "org/allbinary/input/motion/button/CommonButtons.h"
#include "org/allbinary/input/motion/button/TouchButtonBlankResource.h"
#include "org/allbinary/input/motion/button/TouchButtonDownResource.h"
#include "org/allbinary/input/motion/button/TouchButtonGenericActionResource.h"
#include "org/allbinary/input/motion/button/TouchButtonResource.h"
#include "org/allbinary/input/motion/button/TouchButtonStartResource.h"
#include "org/allbinary/input/motion/button/TouchButtonStrafeLeftResource.h"
#include "org/allbinary/input/motion/button/TouchButtonStrafeRightResource.h"
#include "org/allbinary/input/motion/button/TouchButtonTurnLeftResource.h"
#include "org/allbinary/input/motion/button/TouchButtonTurnRightResource.h"
#include "org/allbinary/input/motion/button/TouchButtonUpResource.h"
#include "org/allbinary/logic/system/os/OperatingSystemFactory.h"

typedef struct TouchButtonAndroidResources TouchButtonAndroidResources;
struct TouchButtonAndroidResources {
    Init base;
};


TouchButtonAndroidResources* TouchButtonAndroidResources_new(void);
void TouchButtonAndroidResources_init(TouchButtonAndroidResources* this);

void TouchButtonAndroidResources_init(TouchButtonAndroidResources* this) {
    Init_init(&this->base);
}

TouchButtonAndroidResources* TouchButtonAndroidResources_new(void) {
    TouchButtonAndroidResources* this = calloc(1, sizeof(TouchButtonAndroidResources));
    TouchButtonAndroidResources_init(this);
    return this;
}


void TouchButtonAndroidResources_init(TouchButtonAndroidResources* this) {
        ResourceUtil* resourceUtil = ResourceUtil_getInstance();
        AndroidResources* androidResources = AndroidResources_getInstance();
        TouchButtonResource** RESOURCE_STRING_ARRAY = ((TouchButtonResource**) java_array_from(sizeof(TouchButtonResource*), sizeof((TouchButtonResource*[]){ TouchButtonBlankResource_getInstance(), TouchButtonGenericActionResource_getInstance(), TouchButtonStartResource_getInstance(), TouchButtonUpResource_getInstance(), TouchButtonDownResource_getInstance(), TouchButtonTurnLeftResource_getInstance(), TouchButtonTurnRightResource_getInstance(), TouchButtonStrafeLeftResource_getInstance(), TouchButtonStrafeRightResource_getInstance() }) / sizeof(TouchButtonResource*), (TouchButtonResource*[]){ TouchButtonBlankResource_getInstance(), TouchButtonGenericActionResource_getInstance(), TouchButtonStartResource_getInstance(), TouchButtonUpResource_getInstance(), TouchButtonDownResource_getInstance(), TouchButtonTurnLeftResource_getInstance(), TouchButtonTurnRightResource_getInstance(), TouchButtonStrafeLeftResource_getInstance(), TouchButtonStrafeRightResource_getInstance() }));
        int32_t* RESOURCE_ARRAY = ((int32_t*) java_array_new(sizeof(int32_t), java_array_length(RESOURCE_STRING_ARRAY)));
        if (CommonButtons_getInstance()->STANDARD_BUTTON_SIZE == 128) {
            RESOURCE_ARRAY[0] = androidResources->raw->touch_button_128_by_128;
            RESOURCE_ARRAY[1] = androidResources->raw->touch_button_generic_action_128_by_128;
            RESOURCE_ARRAY[2] = androidResources->raw->touch_button_start_128_by_128;
            RESOURCE_ARRAY[3] = androidResources->raw->touch_button_up_arrow_128_by_128;
            RESOURCE_ARRAY[4] = androidResources->raw->touch_button_down_arrow_128_by_128;
            RESOURCE_ARRAY[5] = androidResources->raw->touch_button_turn_left_arrow_128_by_128;
            RESOURCE_ARRAY[6] = androidResources->raw->touch_button_turn_right_arrow_128_by_128;
            RESOURCE_ARRAY[7] = androidResources->raw->touch_button_strafe_left_arrow_128_by_128;
            RESOURCE_ARRAY[8] = androidResources->raw->touch_button_strafe_right_arrow_128_by_128;
            if (JAVA_CALL(OperatingSystemFactory_getOperatingSystemInstance(OperatingSystemFactory_getInstance()), isOverScan)) {
                ResourceUtil_addResource(resourceUtil, RESOURCE_STRING_ARRAY[2]->HINT, java_string_of(androidResources->raw->ouya_o));
            }
        } else {
            RESOURCE_ARRAY[0] = androidResources->raw->touch_button_64_by_64;
            RESOURCE_ARRAY[1] = androidResources->raw->touch_button_generic_action_64_by_64;
            RESOURCE_ARRAY[2] = androidResources->raw->touch_button_start_64_by_64;
            RESOURCE_ARRAY[3] = androidResources->raw->touch_button_up_arrow_64_by_64;
            RESOURCE_ARRAY[4] = androidResources->raw->touch_button_down_arrow_64_by_64;
            RESOURCE_ARRAY[5] = androidResources->raw->touch_button_turn_left_arrow_64_by_64;
            RESOURCE_ARRAY[6] = androidResources->raw->touch_button_turn_right_arrow_64_by_64;
            RESOURCE_ARRAY[7] = androidResources->raw->touch_button_strafe_left_arrow_64_by_64;
            RESOURCE_ARRAY[8] = androidResources->raw->touch_button_strafe_right_arrow_64_by_64;
        }
        for (int32_t index = 0; index < java_array_length(RESOURCE_ARRAY); index++) {
            ResourceUtil_addResource(resourceUtil, RESOURCE_STRING_ARRAY[index]->RESOURCE, java_string_of(RESOURCE_ARRAY[index]));
        }
}

