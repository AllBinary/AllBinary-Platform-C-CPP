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

typedef struct TimeIntervalActionScriptConditionData TimeIntervalActionScriptConditionData;
struct TimeIntervalActionScriptConditionData {
    char unused;
};

const char* TimeIntervalActionScriptConditionData_NAME = "TIME_INTERVAL_ACTION_CONDITION_NAME";
const char* TimeIntervalActionScriptConditionData_TIME = "TIME_INTERVAL_ACTION_CONDITION_TIME";

TimeIntervalActionScriptConditionData* TimeIntervalActionScriptConditionData_new(void);

void TimeIntervalActionScriptConditionData_init(TimeIntervalActionScriptConditionData* this);


void TimeIntervalActionScriptConditionData_init(TimeIntervalActionScriptConditionData* this) {
}

TimeIntervalActionScriptConditionData* TimeIntervalActionScriptConditionData_new(void) {
    TimeIntervalActionScriptConditionData* this = calloc(1, sizeof(TimeIntervalActionScriptConditionData));
    TimeIntervalActionScriptConditionData_init(this);
    return this;
}

