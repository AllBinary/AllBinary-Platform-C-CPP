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
#include "org/allbinary/game/input/Input.h"
#include "org/allbinary/game/input/InputFactory.h"
#include "org/allbinary/input/motion/gesture/MotionGestureInput.h"
#include "org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObjectFactoryInterface.h"

typedef struct MotionEventFactory MotionEventFactory;
struct MotionEventFactory {
    AllBinaryEventObjectFactoryInterface AllBinaryEventObjectFactoryInterface_interface;
    Any* source;
    int32_t id;
};

static int32_t MotionEventFactory_index = 0;

MotionEventFactory* MotionEventFactory_new(Any* source, int32_t id);

void MotionEventFactory_init(MotionEventFactory* this, Any* source, int32_t id);
AllBinaryEventObject* MotionEventFactory_getInstance(MotionEventFactory* this);

static void MotionEventFactory_initFields(MotionEventFactory* this) {
    
    
}


void MotionEventFactory_init(MotionEventFactory* this, Any* source, int32_t id) {
    MotionEventFactory_initFields(this);
        this->source = source;
        this->id = id;
        MotionEventFactory_index = JAVA_CALL(TouchMotionGestureFactory_getInstance()->LAST_MOTION, getId);
}

MotionEventFactory* MotionEventFactory_new(Any* source, int32_t id) {
    MotionEventFactory* this = calloc(1, sizeof(MotionEventFactory));
    MotionEventFactory_init(this, source, id);
    return this;
}


AllBinaryEventObject* MotionEventFactory_getInstance(MotionEventFactory* this) {
        InputFactory* inputFactory = InputFactory_getInstance();
        Input* input = InputFactory_getInstanceById(inputFactory, MotionEventFactory_index++);
        if (input == inputFactory->NO_INPUT) {
            return MotionGestureEvent_new(this->source, this->id, ((MotionGestureInput*) TouchMotionGestureFactory_getInstance()->NO_MOTION));
        } else {
            return MotionGestureEvent_new(this->source, this->id, ((MotionGestureInput*) input));
        }
}

