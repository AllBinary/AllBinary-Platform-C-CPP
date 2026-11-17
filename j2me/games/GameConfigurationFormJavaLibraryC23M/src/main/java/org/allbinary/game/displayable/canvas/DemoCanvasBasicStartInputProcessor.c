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
// #include "javax/microedition/lcdui/NullCanvas.h"
#include "org/allbinary/canvas/RunnableCanvas.h"
#include "org/allbinary/game/commands/GameCommandsFactory.h"
#include "org/allbinary/game/input/GameInputStrings.h"
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/game/displayable/canvas/BasicMenuInputProcessor.h"

typedef struct DemoCanvasBasicStartInputProcessor DemoCanvasBasicStartInputProcessor;
struct DemoCanvasBasicStartInputProcessor {
    BasicMenuInputProcessor base;
};


DemoCanvasBasicStartInputProcessor* DemoCanvasBasicStartInputProcessor_new(BasicArrayList* gameKeyEventList, RunnableCanvas* gameCanvas);

void DemoCanvasBasicStartInputProcessor_init(DemoCanvasBasicStartInputProcessor* this, BasicArrayList* gameKeyEventList, RunnableCanvas* gameCanvas);
int32_t DemoCanvasBasicStartInputProcessor_processInputList(DemoCanvasBasicStartInputProcessor* this);


void DemoCanvasBasicStartInputProcessor_init(DemoCanvasBasicStartInputProcessor* this, BasicArrayList* gameKeyEventList, RunnableCanvas* gameCanvas) {
        BasicMenuInputProcessor_init(&this->base, gameKeyEventList, -1, gameCanvas);
}

DemoCanvasBasicStartInputProcessor* DemoCanvasBasicStartInputProcessor_new(BasicArrayList* gameKeyEventList, RunnableCanvas* gameCanvas) {
    DemoCanvasBasicStartInputProcessor* this = calloc(1, sizeof(DemoCanvasBasicStartInputProcessor));
    DemoCanvasBasicStartInputProcessor_init(this, gameKeyEventList, gameCanvas);
    return this;
}


// throws Exception
int32_t DemoCanvasBasicStartInputProcessor_processInputList(DemoCanvasBasicStartInputProcessor* this) {
        BasicArrayList* list = DemoCanvasBasicStartInputProcessor_getGameKeyEventList(this);
        int32_t size = BasicArrayList_size(list);
        GameKeyEvent* gameKeyEvent = nullptr;
        for (int32_t index = 0; index < size; index++) {
            gameKeyEvent = ((GameKeyEvent*) list->objectArray[index]);
            JAVA_CALL(this->logUtil, putF, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "Start GameKey: "), append, StringUtil_toString(StringUtil_getInstance(), gameKeyEvent)), toString), this, GameInputStrings_getInstance()->PROCESS_INPUT);
        }
        JAVA_CALL(JAVA_CALL(DemoCanvasBasicStartInputProcessor_getCanvas(this), getCustomCommandListener), commandAction, GameCommandsFactory_getInstance()->START_COMMAND, NullCanvas_NULL_CANVAS);
        return size;
}

