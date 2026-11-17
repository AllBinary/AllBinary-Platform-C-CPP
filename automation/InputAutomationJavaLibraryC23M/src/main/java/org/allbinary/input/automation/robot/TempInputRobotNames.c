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
// package org.allbinary.input.automation.robot

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct TempInputRobotNames TempInputRobotNames;
struct TempInputRobotNames {
    char unused;
};

const char* TempInputRobotNames_LOW_NAME = "Low Level";
const char* TempInputRobotNames_SYS_NAME = "System Drivers";
const char* TempInputRobotNames_DX_NAME = "DirectX";

TempInputRobotNames* TempInputRobotNames_new(void);

void TempInputRobotNames_init(TempInputRobotNames* this);


void TempInputRobotNames_init(TempInputRobotNames* this) {
}

TempInputRobotNames* TempInputRobotNames_new(void) {
    TempInputRobotNames* this = calloc(1, sizeof(TempInputRobotNames));
    TempInputRobotNames_init(this);
    return this;
}

