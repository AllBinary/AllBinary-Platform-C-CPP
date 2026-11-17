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
// package org.allbinary.game.input.mapping

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/input/mapping/event/InputMappingEvent.h"
#include "org/allbinary/game/input/mapping/event/InputMappingEventListenerInterface.h"
#include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/EventStrings.h"

typedef struct MotionInputMappingEventListener MotionInputMappingEventListener;
struct MotionInputMappingEventListener {
    InputMappingEventListenerInterface InputMappingEventListenerInterface_interface;
};


MotionInputMappingEventListener* MotionInputMappingEventListener_new(void);
void MotionInputMappingEventListener_onEvent(MotionInputMappingEventListener* this, AllBinaryEventObject* eventObject);
void MotionInputMappingEventListener_onInputMappingEvent(MotionInputMappingEventListener* this, InputMappingEvent* inputMappingEvent);

void MotionInputMappingEventListener_init(MotionInputMappingEventListener* this) {
}

MotionInputMappingEventListener* MotionInputMappingEventListener_new(void) {
    MotionInputMappingEventListener* this = calloc(1, sizeof(MotionInputMappingEventListener));
    MotionInputMappingEventListener_init(this);
    return this;
}


void MotionInputMappingEventListener_onEvent(MotionInputMappingEventListener* this, AllBinaryEventObject* eventObject) {
        ForcedLogUtil_log(EventStrings_getInstance()->PERFORMANCE_MESSAGE, this);
}


// throws Exception
void MotionInputMappingEventListener_onInputMappingEvent(MotionInputMappingEventListener* this, InputMappingEvent* inputMappingEvent) {
}

