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
// package org.allbinary.input.motion.gesture

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/input/CompleteMotionGestureInputEvent.h"
#include "org/allbinary/util/BasicArrayList.h"

typedef struct MotionGestureToMotionGestureActionAssociation MotionGestureToMotionGestureActionAssociation;
struct MotionGestureToMotionGestureActionAssociation {
    BasicArrayList* list;
    CompleteMotionGestureInputEvent* motionGestureAction;
};


MotionGestureToMotionGestureActionAssociation* MotionGestureToMotionGestureActionAssociation_new(BasicArrayList* list, CompleteMotionGestureInputEvent* commandAction);

void MotionGestureToMotionGestureActionAssociation_init(MotionGestureToMotionGestureActionAssociation* this, BasicArrayList* list, CompleteMotionGestureInputEvent* commandAction);
BasicArrayList* MotionGestureToMotionGestureActionAssociation_getMotionGesture(MotionGestureToMotionGestureActionAssociation* this);
void MotionGestureToMotionGestureActionAssociation_setMotionGestures(MotionGestureToMotionGestureActionAssociation* this, BasicArrayList* list);
CompleteMotionGestureInputEvent* MotionGestureToMotionGestureActionAssociation_getCommandAction(MotionGestureToMotionGestureActionAssociation* this);
void MotionGestureToMotionGestureActionAssociation_setMotionGestureAction(MotionGestureToMotionGestureActionAssociation* this, CompleteMotionGestureInputEvent* commandAction);
bool MotionGestureToMotionGestureActionAssociation_isMotionGestureArrayEquals(MotionGestureToMotionGestureActionAssociation* this, BasicArrayList* aList);

static void MotionGestureToMotionGestureActionAssociation_initFields(MotionGestureToMotionGestureActionAssociation* this) {
    
    
}


void MotionGestureToMotionGestureActionAssociation_init(MotionGestureToMotionGestureActionAssociation* this, BasicArrayList* list, CompleteMotionGestureInputEvent* commandAction) {
    MotionGestureToMotionGestureActionAssociation_initFields(this);
        this->list = list;
        this->motionGestureAction = commandAction;
}

MotionGestureToMotionGestureActionAssociation* MotionGestureToMotionGestureActionAssociation_new(BasicArrayList* list, CompleteMotionGestureInputEvent* commandAction) {
    MotionGestureToMotionGestureActionAssociation* this = calloc(1, sizeof(MotionGestureToMotionGestureActionAssociation));
    MotionGestureToMotionGestureActionAssociation_init(this, list, commandAction);
    return this;
}


BasicArrayList* MotionGestureToMotionGestureActionAssociation_getMotionGesture(MotionGestureToMotionGestureActionAssociation* this) {
        return this->list;
}


void MotionGestureToMotionGestureActionAssociation_setMotionGestures(MotionGestureToMotionGestureActionAssociation* this, BasicArrayList* list) {
        this->list = list;
}


CompleteMotionGestureInputEvent* MotionGestureToMotionGestureActionAssociation_getCommandAction(MotionGestureToMotionGestureActionAssociation* this) {
        return this->motionGestureAction;
}


void MotionGestureToMotionGestureActionAssociation_setMotionGestureAction(MotionGestureToMotionGestureActionAssociation* this, CompleteMotionGestureInputEvent* commandAction) {
        this->motionGestureAction = commandAction;
}


bool MotionGestureToMotionGestureActionAssociation_isMotionGestureArrayEquals(MotionGestureToMotionGestureActionAssociation* this, BasicArrayList* aList) {
        int32_t size = BasicArrayList_size(aList);
        if (BasicArrayList_size(this->list) != size) {
            return false;
        }
        for (int32_t i = size - 1; i >= 0; i--) {
            if (aList->objectArray[i] != this->list->objectArray[i]) {
                return false;
            }
        }
        return true;
}

