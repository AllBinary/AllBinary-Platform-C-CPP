#ifndef ORG_ALLBINARY_GAME_INPUT_TESTINGINPUTSINGLETON_H
#define ORG_ALLBINARY_GAME_INPUT_TESTINGINPUTSINGLETON_H
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
typedef struct GameInputInterface GameInputInterface;
typedef struct GameInputProcessor GameInputProcessor;
typedef struct InputFactory InputFactory;
typedef struct GameInputProcessorUtil GameInputProcessorUtil;
typedef struct TestInputInterface TestInputInterface;
typedef struct Canvas Canvas;
typedef struct Graphics Graphics;
typedef struct GameKeyEvent GameKeyEvent;
typedef struct AllBinaryGameLayer AllBinaryGameLayer;
typedef struct RectangleFactory RectangleFactory;
typedef struct NullPaintable NullPaintable;
typedef struct PaintableInterface PaintableInterface;
typedef struct AllBinaryLayerManager AllBinaryLayerManager;
typedef struct StringUtil StringUtil;
typedef struct BasicArrayList BasicArrayList;
typedef struct ViewPosition ViewPosition;
#include "org/allbinary/game/layer/AllBinaryGameLayer.h"
#if __has_include("org/allbinary/graphics/paint/PaintableInterface.h")
#include "org/allbinary/graphics/paint/PaintableInterface.h"
#endif
#include "org/allbinary/game/input/GameInputInterface.h"
#if __has_include("org/allbinary/game/input/GameInputProcessor.h")
#include "org/allbinary/game/input/GameInputProcessor.h"
#endif

typedef struct TestingInputSingleton TestingInputSingleton;
struct TestingInputSingleton {
    AllBinaryGameLayer base;
    GameInputInterface GameInputInterface_interface;
    GameInputProcessor** inputProcessorArray;
    PaintableInterface* testInputPaintable;
};


TestingInputSingleton* TestingInputSingleton_new(void);

TestingInputSingleton* TestingInputSingleton_getInstance(void);

void TestingInputSingleton_init(TestingInputSingleton* this);

void TestingInputSingleton_initInputProcessors(TestingInputSingleton* this);

void TestingInputSingleton_initInputProcessorsForTestInput(TestingInputSingleton* this, TestInputInterface* aTestInputInterface);

void TestingInputSingleton_processInputList(TestingInputSingleton* this, AllBinaryLayerManager* allbinaryLayerManager, BasicArrayList* list);

void TestingInputSingleton_processInput(TestingInputSingleton* this, AllBinaryLayerManager* allbinaryLayerManager);

void TestingInputSingleton_paint(TestingInputSingleton* this, Graphics* graphics);

bool TestingInputSingleton_implmentsGameInputInterface(TestingInputSingleton* this);
#define TestingInputSingleton_new0 TestingInputSingleton_new
#define TestingInputSingleton_init0 TestingInputSingleton_init
#ifndef TestingInputSingleton_createPaintable
#define TestingInputSingleton_createPaintable AllBinaryGameLayer_createPaintable
#endif
#ifndef TestingInputSingleton_set
#define TestingInputSingleton_set AllBinaryGameLayer_set
#endif
#ifndef TestingInputSingleton_move
#define TestingInputSingleton_move AllBinaryGameLayer_move
#endif
#ifndef TestingInputSingleton_getGameKeyEventList
#define TestingInputSingleton_getGameKeyEventList AllBinaryGameLayer_getGameKeyEventList
#endif
#ifndef TestingInputSingleton_processTick
#define TestingInputSingleton_processTick AllBinaryGameLayer_processTick
#endif
#ifndef TestingInputSingleton_onEvent
#define TestingInputSingleton_onEvent AllBinaryGameLayer_onEvent
#endif
#ifndef TestingInputSingleton_onViewPositionChangeEvent
#define TestingInputSingleton_onViewPositionChangeEvent AllBinaryGameLayer_onViewPositionChangeEvent
#endif
#ifndef TestingInputSingleton_onChangeEvent
#define TestingInputSingleton_onChangeEvent AllBinaryGameLayer_onChangeEvent
#endif
#ifndef TestingInputSingleton_paintFirst
#define TestingInputSingleton_paintFirst AllBinaryGameLayer_paintFirst
#endif
#ifndef TestingInputSingleton_paintDebug
#define TestingInputSingleton_paintDebug AllBinaryGameLayer_paintDebug
#endif
#ifndef TestingInputSingleton_setWidth
#define TestingInputSingleton_setWidth AllBinaryGameLayer_setWidth
#endif
#ifndef TestingInputSingleton_setHeight
#define TestingInputSingleton_setHeight AllBinaryGameLayer_setHeight
#endif
#ifndef TestingInputSingleton_setPosition
#define TestingInputSingleton_setPosition AllBinaryLayer_setPosition
#endif
#ifndef TestingInputSingleton_moveDXYZ
#define TestingInputSingleton_moveDXYZ AllBinaryLayer_moveDXYZ
#endif
#ifndef TestingInputSingleton_getXP
#define TestingInputSingleton_getXP AllBinaryLayer_getXP
#endif
#ifndef TestingInputSingleton_getYP
#define TestingInputSingleton_getYP AllBinaryLayer_getYP
#endif
#ifndef TestingInputSingleton_getZP
#define TestingInputSingleton_getZP AllBinaryLayer_getZP
#endif
#ifndef TestingInputSingleton_getWidth
#define TestingInputSingleton_getWidth AllBinaryLayer_getWidth
#endif
#ifndef TestingInputSingleton_getHeight
#define TestingInputSingleton_getHeight AllBinaryLayer_getHeight
#endif
#ifndef TestingInputSingleton_setVisible
#define TestingInputSingleton_setVisible AllBinaryLayer_setVisible
#endif
#ifndef TestingInputSingleton_isVisible
#define TestingInputSingleton_isVisible AllBinaryLayer_isVisible
#endif
#ifndef TestingInputSingleton_onChangeEvent
#define TestingInputSingleton_onChangeEvent AllBinaryLayer_onChangeEvent
#endif
#ifndef TestingInputSingleton_paintThreed
#define TestingInputSingleton_paintThreed AllBinaryLayer_paintThreed
#endif
#ifndef TestingInputSingleton_getX2
#define TestingInputSingleton_getX2 AllBinaryLayer_getX2
#endif
#ifndef TestingInputSingleton_getY2
#define TestingInputSingleton_getY2 AllBinaryLayer_getY2
#endif
#ifndef TestingInputSingleton_getZ2
#define TestingInputSingleton_getZ2 AllBinaryLayer_getZ2
#endif
#ifndef TestingInputSingleton_getName
#define TestingInputSingleton_getName AllBinaryLayer_getName
#endif
#ifndef TestingInputSingleton_setHalfWidth
#define TestingInputSingleton_setHalfWidth AllBinaryLayer_setHalfWidth
#endif
#ifndef TestingInputSingleton_getHalfWidth
#define TestingInputSingleton_getHalfWidth AllBinaryLayer_getHalfWidth
#endif
#ifndef TestingInputSingleton_setHalfHeight
#define TestingInputSingleton_setHalfHeight AllBinaryLayer_setHalfHeight
#endif
#ifndef TestingInputSingleton_getHalfHeight
#define TestingInputSingleton_getHalfHeight AllBinaryLayer_getHalfHeight
#endif
#ifndef TestingInputSingleton_getHalfDepth
#define TestingInputSingleton_getHalfDepth AllBinaryLayer_getHalfDepth
#endif
#ifndef TestingInputSingleton_getViewPosition
#define TestingInputSingleton_getViewPosition AllBinaryLayer_getViewPosition
#endif
#ifndef TestingInputSingleton_setViewPosition
#define TestingInputSingleton_setViewPosition AllBinaryLayer_setViewPosition
#endif
#ifndef TestingInputSingleton_getGroupInterface
#define TestingInputSingleton_getGroupInterface AllBinaryLayer_getGroupInterface
#endif
#ifndef TestingInputSingleton_implmentsTickableInterface
#define TestingInputSingleton_implmentsTickableInterface AllBinaryLayer_implmentsTickableInterface
#endif
#ifndef TestingInputSingleton_implmentsArtificialIntelligenceCompositeInterface
#define TestingInputSingleton_implmentsArtificialIntelligenceCompositeInterface AllBinaryLayer_implmentsArtificialIntelligenceCompositeInterface
#endif
#ifndef TestingInputSingleton_implmentsCollidableInterface
#define TestingInputSingleton_implmentsCollidableInterface AllBinaryLayer_implmentsCollidableInterface
#endif
#ifndef TestingInputSingleton_implementsThreedInterface
#define TestingInputSingleton_implementsThreedInterface AllBinaryLayer_implementsThreedInterface
#endif
#ifndef TestingInputSingleton_getType
#define TestingInputSingleton_getType AllBinaryLayer_getType
#endif
#ifndef TestingInputSingleton_getMultiPlayerType
#define TestingInputSingleton_getMultiPlayerType AllBinaryLayer_getMultiPlayerType
#endif
#ifndef TestingInputSingleton_toStringAppend
#define TestingInputSingleton_toStringAppend AllBinaryLayer_toStringAppend
#endif
#ifndef TestingInputSingleton_toString
#define TestingInputSingleton_toString AllBinaryLayer_toString
#endif
#ifndef TestingInputSingleton_setPosition
#define TestingInputSingleton_setPosition Layer_setPosition
#endif
#ifndef TestingInputSingleton_moveDXY
#define TestingInputSingleton_moveDXY Layer_moveDXY
#endif
#ifndef TestingInputSingleton_moveDXYZ
#define TestingInputSingleton_moveDXYZ Layer_moveDXYZ
#endif
#ifndef TestingInputSingleton_getXP
#define TestingInputSingleton_getXP Layer_getXP
#endif
#ifndef TestingInputSingleton_getYP
#define TestingInputSingleton_getYP Layer_getYP
#endif
#ifndef TestingInputSingleton_getZP
#define TestingInputSingleton_getZP Layer_getZP
#endif
#ifndef TestingInputSingleton_getWidth
#define TestingInputSingleton_getWidth Layer_getWidth
#endif
#ifndef TestingInputSingleton_getHeight
#define TestingInputSingleton_getHeight Layer_getHeight
#endif
#ifndef TestingInputSingleton_getDepth
#define TestingInputSingleton_getDepth Layer_getDepth
#endif
#ifndef TestingInputSingleton_setVisible
#define TestingInputSingleton_setVisible Layer_setVisible
#endif
#ifndef TestingInputSingleton_isVisible
#define TestingInputSingleton_isVisible Layer_isVisible
#endif
#ifndef TestingInputSingleton_setLayerWidth
#define TestingInputSingleton_setLayerWidth Layer_setLayerWidth
#endif
#ifndef TestingInputSingleton_setLayerHeight
#define TestingInputSingleton_setLayerHeight Layer_setLayerHeight
#endif
#ifndef TestingInputSingleton_toStringAppend
#define TestingInputSingleton_toStringAppend Layer_toStringAppend
#endif
#ifndef TestingInputSingleton_setSize
#define TestingInputSingleton_setSize Layer_setSize
#endif
#ifndef TestingInputSingleton_getX
#define TestingInputSingleton_getX Layer_getX
#endif
#ifndef TestingInputSingleton_getY
#define TestingInputSingleton_getY Layer_getY
#endif
#ifndef TestingInputSingleton_move
#define TestingInputSingleton_move Layer_move
#endif
#ifndef TestingInputSingleton_setPosition
#define TestingInputSingleton_setPosition Layer_setPosition
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void TestingInputSingleton_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void TestingInputSingleton_register(void);


#endif // ORG_ALLBINARY_GAME_INPUT_TESTINGINPUTSINGLETON_H
