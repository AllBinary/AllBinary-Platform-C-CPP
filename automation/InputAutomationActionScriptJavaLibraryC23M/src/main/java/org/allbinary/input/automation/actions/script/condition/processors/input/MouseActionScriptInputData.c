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
// package org.allbinary.input.automation.actions.script.condition.processors.input

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct MouseActionScriptInputData MouseActionScriptInputData;
struct MouseActionScriptInputData {
    char unused;
};

const char* MouseActionScriptInputData_NAME = "MOUSE_ACTION_INPUT_NAME";
const char* MouseActionScriptInputData_BUTTONS = "MOUSE_ACTION_INPUT_BUTTONS";
const char* MouseActionScriptInputData_MOVE = "MOUSE_ACTION_INPUT_MOVE";
const char* MouseActionScriptInputData_MOVE_X = "MOUSE_ACTION_INPUT_MOVE_X";
const char* MouseActionScriptInputData_MOVE_Y = "MOUSE_ACTION_INPUT_MOVE_Y";

MouseActionScriptInputData* MouseActionScriptInputData_new(void);

void MouseActionScriptInputData_init(MouseActionScriptInputData* this);


void MouseActionScriptInputData_init(MouseActionScriptInputData* this) {
}

MouseActionScriptInputData* MouseActionScriptInputData_new(void) {
    MouseActionScriptInputData* this = calloc(1, sizeof(MouseActionScriptInputData));
    MouseActionScriptInputData_init(this);
    return this;
}

