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
#include "org/allbinary/game/input/CompleteMotionGestureInputEventHandler.h"
#include "org/allbinary/game/input/motion/action/GameKeyCompleteMotionGestureInputEvent.h"
#include "org/allbinary/game/input/motion/action/GameKeyFromMotionGestureEventListener.h"
#include "org/allbinary/input/motion/gesture/MotionGestureToMotionGestureActionAssociation.h"
#include "org/allbinary/input/motion/gesture/configuration/MotionGestureConfiguration.h"
#include "org/allbinary/input/motion/gesture/configuration/MotionGestureConfigurationFactory.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/input/motion/gesture/observer/CompleteMotionGestureListenerInterface.h"

typedef struct ResolveCompleteMotionGestureListener ResolveCompleteMotionGestureListener;
struct ResolveCompleteMotionGestureListener {
    CompleteMotionGestureListenerInterface CompleteMotionGestureListenerInterface_interface;
    LogUtil* logUtil;
};


ResolveCompleteMotionGestureListener* ResolveCompleteMotionGestureListener_new(void);

void ResolveCompleteMotionGestureListener_init(ResolveCompleteMotionGestureListener* this);
void ResolveCompleteMotionGestureListener_onMotionGestureCompleted(ResolveCompleteMotionGestureListener* this, BasicArrayList* list);

static void ResolveCompleteMotionGestureListener_initFields(ResolveCompleteMotionGestureListener* this) {
    this->logUtil = LogUtil_getInstance();
}


void ResolveCompleteMotionGestureListener_init(ResolveCompleteMotionGestureListener* this) {
    ResolveCompleteMotionGestureListener_initFields(this);
        CommonStrings* commonStrings = CommonStrings_getInstance();
        LogUtil_putF(this->logUtil, "MotionGesture to CompleteMotionGesture Reciever", this, commonStrings->CONSTRUCTOR);
        CompleteMotionGestureInputEventHandler_addListener(CompleteMotionGestureInputEventHandler_getInstance(), GameKeyFromMotionGestureEventListener_new());
}

ResolveCompleteMotionGestureListener* ResolveCompleteMotionGestureListener_new(void) {
    ResolveCompleteMotionGestureListener* this = calloc(1, sizeof(ResolveCompleteMotionGestureListener));
    ResolveCompleteMotionGestureListener_init(this);
    return this;
}


// throws Exception
void ResolveCompleteMotionGestureListener_onMotionGestureCompleted(ResolveCompleteMotionGestureListener* this, BasicArrayList* list) {
        MotionGestureConfiguration* configuration = MotionGestureConfigurationFactory_getInstance();
        BasicArrayList* commandActionsList = MotionGestureConfiguration_getAssociateCommandActionsList(configuration);
        int32_t size = BasicArrayList_size(commandActionsList);
        for (int32_t index = size - 1; index >= 0; index--) {
            MotionGestureToMotionGestureActionAssociation* association = ((MotionGestureToMotionGestureActionAssociation*) commandActionsList->objectArray[index]);
            if (MotionGestureToMotionGestureActionAssociation_isMotionGestureArrayEquals(association, list) == true) {
                GameKeyCompleteMotionGestureInputEvent* completeMotionGestureInputEvent = ((GameKeyCompleteMotionGestureInputEvent*) MotionGestureToMotionGestureActionAssociation_getCommandAction(association));
                CompleteMotionGestureInputEventHandler_fireEvent(CompleteMotionGestureInputEventHandler_getInstance(), completeMotionGestureInputEvent);
                break;
            }
        }
}

