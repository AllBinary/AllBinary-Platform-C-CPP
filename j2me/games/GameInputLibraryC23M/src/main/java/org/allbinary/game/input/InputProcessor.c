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

typedef struct InputProcessor InputProcessor;
struct InputProcessor {
    GameInputStrings* gameInputStrings;
};


InputProcessor* InputProcessor_new(void);
void InputProcessor_keyPressedByDevice(InputProcessor* this, int32_t keyCode, int32_t deviceId);
void InputProcessor_keyReleasedByDevice(InputProcessor* this, Canvas* canvas, int32_t keyCode, int32_t deviceId);

static void InputProcessor_initFields(InputProcessor* this) {
    this->gameInputStrings = GameInputStrings_getInstance();
}

void InputProcessor_init(InputProcessor* this) {
    InputProcessor_initFields(this);
}

InputProcessor* InputProcessor_new(void) {
    InputProcessor* this = calloc(1, sizeof(InputProcessor));
    InputProcessor_init(this);
    return this;
}


void InputProcessor_keyPressedByDevice(InputProcessor* this, int32_t keyCode, int32_t deviceId) {
}


void InputProcessor_keyReleasedByDevice(InputProcessor* this, Canvas* canvas, int32_t keyCode, int32_t deviceId) {
}

