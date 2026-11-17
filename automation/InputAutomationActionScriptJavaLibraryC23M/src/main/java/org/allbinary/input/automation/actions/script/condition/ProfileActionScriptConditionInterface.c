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
// package org.allbinary.input.automation.actions.script.condition

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/input/automation/actions/script/ProfileActionScriptItemInterface.h"
#include "org/allbinary/input/automation/actions/script/ProfileActionScriptNodeInterface.h"
#include "org/allbinary/input/automation/actions/script/condition/processors/ProfileActionScriptProcessorInterface.h"
#include "org/allbinary/input/automation/actions/script/condition/CustomTreeNodeInterface.h"

typedef struct ProfileActionScriptConditionInterface ProfileActionScriptConditionInterface;
struct ProfileActionScriptConditionInterface {
    void (*addProcessor)(void* this, ProfileActionScriptProcessorInterface* profileActionProcessorInterface);
    void (*removeProcessor)(void* this, ProfileActionScriptProcessorInterface* profileActionProcessorInterface);
    bool (*shouldProcess)(void* this, int64_t frame);
};


