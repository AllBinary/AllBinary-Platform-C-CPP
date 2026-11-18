#ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_NOMENUINPUTPROCESSOR_H
#define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_NOMENUINPUTPROCESSOR_H
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
typedef struct BasicMenuInputProcessor BasicMenuInputProcessor;
typedef struct NullCanvas NullCanvas;
typedef struct GameKeyEvent GameKeyEvent;
typedef struct MotionGestureEvent MotionGestureEvent;
typedef struct BasicArrayListUtil BasicArrayListUtil;
#include "org/allbinary/game/displayable/canvas/BasicMenuInputProcessor.h"

typedef struct NoMenuInputProcessor NoMenuInputProcessor;
struct NoMenuInputProcessor {
    BasicMenuInputProcessor base;
};


NoMenuInputProcessor* NoMenuInputProcessor_new(void);

NoMenuInputProcessor* NoMenuInputProcessor_getInstance(void);

void NoMenuInputProcessor_init(NoMenuInputProcessor* this);

void NoMenuInputProcessor_onDownGameKeyEvent(NoMenuInputProcessor* this, GameKeyEvent* gameKeyEvent);

void NoMenuInputProcessor_onUpGameKeyEvent(NoMenuInputProcessor* this, GameKeyEvent* gameKeyEvent);

void NoMenuInputProcessor_onMotionGestureEvent(NoMenuInputProcessor* this, MotionGestureEvent* motionGestureEvent);
#define NoMenuInputProcessor_new0 NoMenuInputProcessor_new
#define NoMenuInputProcessor_init0 NoMenuInputProcessor_init
#ifndef NoMenuInputProcessor_onScrolledMotionGestureEvent
#define NoMenuInputProcessor_onScrolledMotionGestureEvent BasicMenuInputProcessor_onScrolledMotionGestureEvent
#endif
#ifndef NoMenuInputProcessor_setCanvas
#define NoMenuInputProcessor_setCanvas BasicMenuInputProcessor_setCanvas
#endif
#ifndef NoMenuInputProcessor_getCanvas
#define NoMenuInputProcessor_getCanvas BasicMenuInputProcessor_getCanvas
#endif
#ifndef NoMenuInputProcessor_processInputList
#define NoMenuInputProcessor_processInputList BasicMenuInputProcessor_processInputList
#endif
#ifndef NoMenuInputProcessor_onPressGameKeyEvent
#define NoMenuInputProcessor_onPressGameKeyEvent PlayerGameInput_onPressGameKeyEvent
#endif
#ifndef NoMenuInputProcessor_onDownKeyEvent
#define NoMenuInputProcessor_onDownKeyEvent PlayerGameInput_onDownKeyEvent
#endif
#ifndef NoMenuInputProcessor_onDownKey
#define NoMenuInputProcessor_onDownKey PlayerGameInput_onDownKey
#endif
#ifndef NoMenuInputProcessor_onUpKeyEvent
#define NoMenuInputProcessor_onUpKeyEvent PlayerGameInput_onUpKeyEvent
#endif
#ifndef NoMenuInputProcessor_onEvent
#define NoMenuInputProcessor_onEvent PlayerGameInput_onEvent
#endif
#ifndef NoMenuInputProcessor_getPlayerInputId
#define NoMenuInputProcessor_getPlayerInputId PlayerGameInput_getPlayerInputId
#endif
#ifndef NoMenuInputProcessor_add
#define NoMenuInputProcessor_add GameInput_add
#endif
#ifndef NoMenuInputProcessor_addForRemoval
#define NoMenuInputProcessor_addForRemoval GameInput_addForRemoval
#endif
#ifndef NoMenuInputProcessor_isForRemoval
#define NoMenuInputProcessor_isForRemoval GameInput_isForRemoval
#endif
#ifndef NoMenuInputProcessor_clear
#define NoMenuInputProcessor_clear GameInput_clear
#endif
#ifndef NoMenuInputProcessor_removeNonAIInputGameKeyEvents
#define NoMenuInputProcessor_removeNonAIInputGameKeyEvents GameInput_removeNonAIInputGameKeyEvents
#endif
#ifndef NoMenuInputProcessor_update
#define NoMenuInputProcessor_update GameInput_update
#endif
#ifndef NoMenuInputProcessor_getRemovalGameKeyEventList
#define NoMenuInputProcessor_getRemovalGameKeyEventList GameInput_getRemovalGameKeyEventList
#endif
#ifndef NoMenuInputProcessor_getGameKeyEventList
#define NoMenuInputProcessor_getGameKeyEventList GameInput_getGameKeyEventList
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void NoMenuInputProcessor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void NoMenuInputProcessor_register(void);


#endif // ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_NOMENUINPUTPROCESSOR_H
