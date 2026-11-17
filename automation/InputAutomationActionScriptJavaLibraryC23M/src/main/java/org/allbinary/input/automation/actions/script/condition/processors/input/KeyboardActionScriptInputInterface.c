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
#include "org/allbinary/input/automation/actions/script/condition/processors/input/ProfileActionScriptInputInterface.h"

typedef struct KeyboardActionScriptInputInterface KeyboardActionScriptInputInterface;
struct KeyboardActionScriptInputInterface {
    int32_t (*getDelayBetweenKeys)(void* this);
    int32_t* (*getKeyArray)(void* this);
    bool (*isPress)(void* this);
    bool (*isRelease)(void* this);
    bool (*isNormal)(void* this);
    void (*setPress)(void* this, bool press);
    void (*setRelease)(void* this, bool release);
    void (*setNormal)(void* this);
    const char* (*getText)(void* this);
    void (*setText)(void* this, const char* text);
    void (*log)(void* this);
};


