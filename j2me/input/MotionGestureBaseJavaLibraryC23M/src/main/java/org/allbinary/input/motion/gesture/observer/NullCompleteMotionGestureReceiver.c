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
// package org.allbinary.input.motion.gesture.observer

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/input/motion/gesture/observer/CompleteMotionGestureListenerInterface.h"

typedef struct NullCompleteMotionGestureReceiver NullCompleteMotionGestureReceiver;
struct NullCompleteMotionGestureReceiver {
    CompleteMotionGestureListenerInterface CompleteMotionGestureListenerInterface_interface;
    LogUtil* logUtil;
};


NullCompleteMotionGestureReceiver* NullCompleteMotionGestureReceiver_new(void);

void NullCompleteMotionGestureReceiver_init(NullCompleteMotionGestureReceiver* this);
void NullCompleteMotionGestureReceiver_onMotionGestureCompleted(NullCompleteMotionGestureReceiver* this, BasicArrayList* list);

static void NullCompleteMotionGestureReceiver_initFields(NullCompleteMotionGestureReceiver* this) {
    this->logUtil = LogUtil_getInstance();
}


void NullCompleteMotionGestureReceiver_init(NullCompleteMotionGestureReceiver* this) {
    NullCompleteMotionGestureReceiver_initFields(this);
        CommonStrings* commonStrings = CommonStrings_getInstance();
        LogUtil_putF(this->logUtil, "Null Gesture Reciever", this, commonStrings->CONSTRUCTOR);
}

NullCompleteMotionGestureReceiver* NullCompleteMotionGestureReceiver_new(void) {
    NullCompleteMotionGestureReceiver* this = calloc(1, sizeof(NullCompleteMotionGestureReceiver));
    NullCompleteMotionGestureReceiver_init(this);
    return this;
}


// throws Exception
void NullCompleteMotionGestureReceiver_onMotionGestureCompleted(NullCompleteMotionGestureReceiver* this, BasicArrayList* list) {
}

