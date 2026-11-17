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
// package org.allbinary.logic.control.contraints.display.browser

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct DisplayInBrowserContraintsData DisplayInBrowserContraintsData;
struct DisplayInBrowserContraintsData {
    char unused;
};

const char* DisplayInBrowserContraintsData_NAME = "DISPLAYBROWSERCONSTRAINTS_NAME";
const char* DisplayInBrowserContraintsData_FRAMEABLE = "DISPLAYBROWSERCONSTRAINTS_FRAMEABLE";
const char* DisplayInBrowserContraintsData_MOUNTABLE = "DISPLAYBROWSERCONSTRAINTS_MOUNTABLE";
const char* DisplayInBrowserContraintsData_QUICKFRAMEABLE = "DISPLAYBROWSERCONSTRAINTS_QUICKFRAMEABLE";
const char* DisplayInBrowserContraintsData_MOUNTABLELINK = "DISPLAYBROWSERCONSTRAINTS_MOUNTABLELINK";

DisplayInBrowserContraintsData* DisplayInBrowserContraintsData_new(void);

void DisplayInBrowserContraintsData_init(DisplayInBrowserContraintsData* this);


void DisplayInBrowserContraintsData_init(DisplayInBrowserContraintsData* this) {
}

DisplayInBrowserContraintsData* DisplayInBrowserContraintsData_new(void) {
    DisplayInBrowserContraintsData* this = calloc(1, sizeof(DisplayInBrowserContraintsData));
    DisplayInBrowserContraintsData_init(this);
    return this;
}

