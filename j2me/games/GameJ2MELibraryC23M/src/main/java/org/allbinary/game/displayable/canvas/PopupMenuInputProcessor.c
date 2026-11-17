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
// #include "javax/microedition/lcdui/Canvas.h"
#include "org/allbinary/game/input/GameInputStrings.h"
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/graphics/GPoint.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/graphics/displayable/MyCanvas.h"
#include "org/allbinary/input/motion/gesture/MotionGestureInput.h"
#include "org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h"
#include "org/allbinary/input/motion/gesture/observer/MotionGestureEvent.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/math/RectangleCollisionUtil.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/time/TimeDelayHelper.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/game/displayable/canvas/BasicMenuInputProcessor.h"

typedef struct PopupMenuInputProcessor PopupMenuInputProcessor;
struct PopupMenuInputProcessor {
    BasicMenuInputProcessor base;
    RectangleCollisionUtil* rectangleCollisionUtil;
    int32_t CLICK_DELAY;
    TimeDelayHelper* clickTimeHelper;
    Rectangle* rectangle;
};


PopupMenuInputProcessor* PopupMenuInputProcessor_new(BasicArrayList* gameKeyEventList, int32_t playerInputId, MyCanvas* gameCanvas, Rectangle* rectangle);

void PopupMenuInputProcessor_init(PopupMenuInputProcessor* this, BasicArrayList* gameKeyEventList, int32_t playerInputId, MyCanvas* gameCanvas, Rectangle* rectangle);
void PopupMenuInputProcessor_init(PopupMenuInputProcessor* this, Rectangle* rectangle);
int32_t PopupMenuInputProcessor_processInput(PopupMenuInputProcessor* this, int32_t key);
int32_t PopupMenuInputProcessor_processInputList(PopupMenuInputProcessor* this);
int32_t PopupMenuInputProcessor_processMotionInputs(PopupMenuInputProcessor* this);
void PopupMenuInputProcessor_processMotionInput(PopupMenuInputProcessor* this, MotionGestureEvent* motionGestureEvent);

static void PopupMenuInputProcessor_initFields(PopupMenuInputProcessor* this) {
    this->rectangleCollisionUtil = RectangleCollisionUtil_getInstance();
    this->CLICK_DELAY = 120;
    this->clickTimeHelper = TimeDelayHelper_new(this->CLICK_DELAY);
    
}


void PopupMenuInputProcessor_init(PopupMenuInputProcessor* this, BasicArrayList* gameKeyEventList, int32_t playerInputId, MyCanvas* gameCanvas, Rectangle* rectangle) {
        BasicMenuInputProcessor_init(&this->base, gameKeyEventList, playerInputId, gameCanvas);
        PopupMenuInputProcessor_initFields(this);
        this->rectangle = rectangle;
}

PopupMenuInputProcessor* PopupMenuInputProcessor_new(BasicArrayList* gameKeyEventList, int32_t playerInputId, MyCanvas* gameCanvas, Rectangle* rectangle) {
    PopupMenuInputProcessor* this = calloc(1, sizeof(PopupMenuInputProcessor));
    PopupMenuInputProcessor_init(this, gameKeyEventList, playerInputId, gameCanvas, rectangle);
    return this;
}


void PopupMenuInputProcessor_init(PopupMenuInputProcessor* this, Rectangle* rectangle) {
        this->rectangle = rectangle;
}


// throws Exception
int32_t PopupMenuInputProcessor_processInput(PopupMenuInputProcessor* this, int32_t key) {
        if (key == Canvas_KEY_STAR) {
            AllBinaryGameCanvas* gameCanvas = ((AllBinaryGameCanvas*) PopupMenuInputProcessor_getCanvas(this));
            MyCanvas_toggleMenu(gameCanvas);
            return 1;
        }
        return 0;
}


// throws Exception
int32_t PopupMenuInputProcessor_processInputList(PopupMenuInputProcessor* this) {
        JAVA_TRY {
            int32_t motionInputsIndex = PopupMenuInputProcessor_processMotionInputs(this);
            BasicArrayList* list = PopupMenuInputProcessor_getGameKeyEventList(this);
            int32_t size = BasicArrayList_size(list);
            int32_t key = 0;
            GameKeyEvent* gameKeyEvent = nullptr;
            for (int32_t index = 0; index < size; index++) {
                gameKeyEvent = ((GameKeyEvent*) list->objectArray[index]);
                if (gameKeyEvent != nullptr) {
                    key = GameKeyEvent_getKey(gameKeyEvent);
                    if (PopupMenuInputProcessor_processInput(this, key) == 1) {
                        break;
                    }
                }
            }
            PopupMenuInputProcessor_clear(this);
            if (size > 0 || motionInputsIndex >= 0) {
                return 1;
            } else {
                return -1;
            }
        } JAVA_CATCH(Exception, e) {
            JAVA_CALL(this->logUtil, put, this->commonStrings->EXCEPTION, this, GameInputStrings_getInstance()->PROCESS_INPUT, e);
            return -1;
        } JAVA_END_TRY;
}


// throws Exception
int32_t PopupMenuInputProcessor_processMotionInputs(PopupMenuInputProcessor* this) {
        int32_t lastIndex = JAVA_CALL(this->motionGestureEventList, size) - 1;
        if (lastIndex >= 0) {
            MotionGestureEvent* motionGestureEvent = ((MotionGestureEvent*) this->motionGestureEventList->objectArray[lastIndex]);
            PopupMenuInputProcessor_processMotionInput(this, motionGestureEvent);
        }
        JAVA_CALL(this->motionGestureEventList, clear);
        return lastIndex;
}


// throws Exception
void PopupMenuInputProcessor_processMotionInput(PopupMenuInputProcessor* this, MotionGestureEvent* motionGestureEvent) {
        if (motionGestureEvent == nullptr) {
            JAVA_CALL(this->logUtil, putF, "Exception: Bug", this, this->gameInputStrings->PROCESS_MOTION_INPUT);
            return;
        }
        TouchMotionGestureFactory* touchMotionGestureFactory = TouchMotionGestureFactory_getInstance();
        MotionGestureInput* motionGestureInput = MotionGestureEvent_getMotionGesture(motionGestureEvent);
        if (motionGestureInput == touchMotionGestureFactory->RELEASED) {
            GPoint* point = MotionGestureEvent_getCurrentPoint(motionGestureEvent);
            GPoint* rectPoint = Rectangle_getPoint(this->rectangle);
            if (RectangleCollisionUtil_isInside(this->rectangleCollisionUtil, GPoint_getX(rectPoint), GPoint_getY(rectPoint), Rectangle_getMaxX(this->rectangle) + 20, Rectangle_getMaxY(this->rectangle), GPoint_getX(point), GPoint_getY(point))) {
                if (TimeDelayHelper_isTimeTNT(this->clickTimeHelper)) {
                    AllBinaryGameCanvas* gameCanvas = ((AllBinaryGameCanvas*) PopupMenuInputProcessor_getCanvas(this));
                    MyCanvas_toggleMenu(gameCanvas);
                }
            }
        }
}

