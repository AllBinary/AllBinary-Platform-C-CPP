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
// package org.allbinary.game.input

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Canvas.h"
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/game/layer/AllBinaryGameLayer.h"
#include "org/allbinary/graphics/RectangleFactory.h"
#include "org/allbinary/graphics/paint/NullPaintable.h"
#include "org/allbinary/graphics/paint/PaintableInterface.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/view/ViewPosition.h"
#include "org/allbinary/game/input/GameInputInterface.h"

typedef struct TestingInputSingleton TestingInputSingleton;
struct TestingInputSingleton {
    AllBinaryGameLayer base;
    GameInputInterface GameInputInterface_interface;
    GameInputProcessor** inputProcessorArray;
    PaintableInterface* testInputPaintable;
};

static TestingInputSingleton* TestingInputSingleton_instance;

TestingInputSingleton* TestingInputSingleton_new(void);
TestingInputSingleton* TestingInputSingleton_getInstance(void);

void TestingInputSingleton_init(TestingInputSingleton* this);
void TestingInputSingleton_initInputProcessors(TestingInputSingleton* this);
void TestingInputSingleton_initInputProcessorsForTestInput(TestingInputSingleton* this, TestInputInterface* aTestInputInterface);
void TestingInputSingleton_processInputList(TestingInputSingleton* this, AllBinaryLayerManager* allbinaryLayerManager, BasicArrayList* list);
void TestingInputSingleton_processInput(TestingInputSingleton* this, AllBinaryLayerManager* allbinaryLayerManager);
void TestingInputSingleton_paint(TestingInputSingleton* this, Graphics* graphics);
bool TestingInputSingleton_implmentsGameInputInterface(TestingInputSingleton* this);

// Static fields with runtime initializers: call this once at startup
void TestingInputSingleton_staticInit(void) {
    TestingInputSingleton_instance = TestingInputSingleton_new();
}

static void TestingInputSingleton_initFields(TestingInputSingleton* this) {
    this->inputProcessorArray = ((GameInputProcessor**) java_array_new(sizeof(GameInputProcessor*), InputFactory_getInstance()->MAX));
    this->testInputPaintable = NullPaintable_getInstance();
}


TestingInputSingleton* TestingInputSingleton_getInstance(void) {
        return TestingInputSingleton_instance;
}


void TestingInputSingleton_init(TestingInputSingleton* this) {
        AllBinaryGameLayer_init(&this->base, StringUtil_getInstance()->EMPTY_STRING, RectangleFactory_SINGLETON, ViewPosition_getInstanceD());
        TestingInputSingleton_initFields(this);
        GameInputProcessorUtil_init(this->inputProcessorArray);
}

TestingInputSingleton* TestingInputSingleton_new(void) {
    TestingInputSingleton* this = calloc(1, sizeof(TestingInputSingleton));
    TestingInputSingleton_init(this);
    return this;
}


void TestingInputSingleton_initInputProcessors(TestingInputSingleton* this) {
}


void TestingInputSingleton_initInputProcessorsForTestInput(TestingInputSingleton* this, TestInputInterface* aTestInputInterface) {
        TestInputInterface* testInputInterface = aTestInputInterface;
        this->testInputPaintable = testInputInterface;
        this->inputProcessorArray[Canvas_UP] = GameInputProcessor_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        // throws Exception
        void TestingInputSingleton_processEvent(TestingInputSingleton* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent) {
                TestInputInterface_up(testInputInterface);
        }
#endif
;
        this->inputProcessorArray[Canvas_DOWN] = GameInputProcessor_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        // throws Exception
        void TestingInputSingleton_processEvent(TestingInputSingleton* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent) {
                TestInputInterface_down(testInputInterface);
        }
#endif
;
        this->inputProcessorArray[Canvas_LEFT] = GameInputProcessor_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        // throws Exception
        void TestingInputSingleton_processEvent(TestingInputSingleton* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent) {
                TestInputInterface_left(testInputInterface);
        }
#endif
;
        this->inputProcessorArray[Canvas_RIGHT] = GameInputProcessor_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        // throws Exception
        void TestingInputSingleton_processEvent(TestingInputSingleton* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent) {
                TestInputInterface_right(testInputInterface);
        }
#endif
;
        this->inputProcessorArray[Canvas_KEY_NUM7] = GameInputProcessor_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        // throws Exception
        void TestingInputSingleton_processEvent(TestingInputSingleton* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent) {
                TestInputInterface_strafeLeft(testInputInterface);
        }
#endif
;
        this->inputProcessorArray[Canvas_KEY_NUM9] = GameInputProcessor_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        // throws Exception
        void TestingInputSingleton_processEvent(TestingInputSingleton* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent) {
                TestInputInterface_strafeRight(testInputInterface);
        }
#endif
;
        GameInputProcessorUtil_init(this->inputProcessorArray);
}


// throws Exception
// synchronized
void TestingInputSingleton_processInputList(TestingInputSingleton* this, AllBinaryLayerManager* allbinaryLayerManager, BasicArrayList* list) {
        int32_t key = 0;
        GameKeyEvent* gameKeyEvent = nullptr;
        int32_t size = BasicArrayList_size(list);
        for (int32_t index = 0; index < size; index++) {
            gameKeyEvent = (((GameKeyEvent*) list->objectArray[index]));
            key = GameKeyEvent_getKey(gameKeyEvent);
            JAVA_CALL(this->inputProcessorArray[key], processEvent, allbinaryLayerManager, GameKeyEvent_NONE);
        }
}


// throws Exception
// synchronized
void TestingInputSingleton_processInput(TestingInputSingleton* this, AllBinaryLayerManager* allbinaryLayerManager) {
        TestingInputSingleton_processInputList(this, allbinaryLayerManager, TestingInputSingleton_getGameKeyEventList(this));
        JAVA_CALL(TestingInputSingleton_getGameKeyEventList(this), clear);
}


void TestingInputSingleton_paint(TestingInputSingleton* this, Graphics* graphics) {
        PaintableInterface_paint(this->testInputPaintable, graphics);
}


bool TestingInputSingleton_implmentsGameInputInterface(TestingInputSingleton* this) {
        return true;
}

