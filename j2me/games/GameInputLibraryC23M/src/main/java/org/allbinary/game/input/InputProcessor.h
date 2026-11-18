#ifndef ORG_ALLBINARY_GAME_INPUT_INPUTPROCESSOR_H
#define ORG_ALLBINARY_GAME_INPUT_INPUTPROCESSOR_H
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
typedef struct GameInputStrings GameInputStrings;
typedef struct Canvas Canvas;
#if __has_include("org/allbinary/game/input/GameInputStrings.h")
#include "org/allbinary/game/input/GameInputStrings.h"
#endif

typedef struct InputProcessor InputProcessor;
struct InputProcessor {
    GameInputStrings* gameInputStrings;
};


InputProcessor* InputProcessor_new(void);
void InputProcessor_init(InputProcessor* this);

void InputProcessor_keyPressedByDevice(InputProcessor* this, int32_t keyCode, int32_t deviceId);

void InputProcessor_keyReleasedByDevice(InputProcessor* this, Canvas* canvas, int32_t keyCode, int32_t deviceId);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void InputProcessor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void InputProcessor_register(void);


#endif // ORG_ALLBINARY_GAME_INPUT_INPUTPROCESSOR_H
