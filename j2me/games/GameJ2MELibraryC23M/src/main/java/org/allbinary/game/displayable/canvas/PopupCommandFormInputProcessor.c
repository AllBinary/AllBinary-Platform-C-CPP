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
// package org.allbinary.game.displayable.canvas

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/graphics/displayable/MyCanvas.h"
#include "org/allbinary/graphics/form/ScrollSelectionForm.h"
#include "org/allbinary/input/motion/gesture/observer/MotionGestureEvent.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/game/displayable/canvas/CommandFormInputProcessor.h"

typedef struct PopupCommandFormInputProcessor PopupCommandFormInputProcessor;
struct PopupCommandFormInputProcessor {
    CommandFormInputProcessor base;
};


PopupCommandFormInputProcessor* PopupCommandFormInputProcessor_new(BasicArrayList* gameKeyEventList, int32_t playerInputId, MyCanvas* gameCanvas, ScrollSelectionForm* form, PopupMenuInputProcessor* popupMenuInputProcessor);

void PopupCommandFormInputProcessor_init(PopupCommandFormInputProcessor* this, BasicArrayList* gameKeyEventList, int32_t playerInputId, MyCanvas* gameCanvas, ScrollSelectionForm* form, PopupMenuInputProcessor* popupMenuInputProcessor);
int32_t PopupCommandFormInputProcessor_processInput(PopupCommandFormInputProcessor* this, int32_t key);
void PopupCommandFormInputProcessor_processMotionInput(PopupCommandFormInputProcessor* this, MotionGestureEvent* motionGestureEvent);


void PopupCommandFormInputProcessor_init(PopupCommandFormInputProcessor* this, BasicArrayList* gameKeyEventList, int32_t playerInputId, MyCanvas* gameCanvas, ScrollSelectionForm* form, PopupMenuInputProcessor* popupMenuInputProcessor) {
        CommandFormInputProcessor_init(&this->base, gameKeyEventList, playerInputId, gameCanvas, form);
}

PopupCommandFormInputProcessor* PopupCommandFormInputProcessor_new(BasicArrayList* gameKeyEventList, int32_t playerInputId, MyCanvas* gameCanvas, ScrollSelectionForm* form, PopupMenuInputProcessor* popupMenuInputProcessor) {
    PopupCommandFormInputProcessor* this = calloc(1, sizeof(PopupCommandFormInputProcessor));
    PopupCommandFormInputProcessor_init(this, gameKeyEventList, playerInputId, gameCanvas, form, popupMenuInputProcessor);
    return this;
}


// throws Exception
int32_t PopupCommandFormInputProcessor_processInput(PopupCommandFormInputProcessor* this, int32_t key) {
        return CommandFormInputProcessor_processInput((&this->base), key);
}


// throws Exception
void PopupCommandFormInputProcessor_processMotionInput(PopupCommandFormInputProcessor* this, MotionGestureEvent* motionGestureEvent) {
        CommandFormInputProcessor_processMotionInput((&this->base), motionGestureEvent);
}

