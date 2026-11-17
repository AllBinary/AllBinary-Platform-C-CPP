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
// package org.allbinary.input.automation.module.actions.script.condition.processors.output

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/input/automation/module/actions/script/condition/processors/output/ProfileActionScriptOutputInterface.h"

typedef struct ImageActionScriptOutputInterface ImageActionScriptOutputInterface;
struct ImageActionScriptOutputInterface {
    ImageTypes* (*getImageTypes)(void* this);
    void (*setImageTypes)(void* this, ImageTypes* imageTypes);
    bool (*isSaved)(void* this);
    void (*setSaved)(void* this, bool saved);
    bool (*isDisplay)(void* this);
    void (*setDisplay)(void* this, bool display);
    void (*log)(void* this);
};


