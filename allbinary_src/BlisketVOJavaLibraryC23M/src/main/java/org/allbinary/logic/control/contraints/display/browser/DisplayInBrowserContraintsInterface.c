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

typedef struct DisplayInBrowserContraintsInterface DisplayInBrowserContraintsInterface;
struct DisplayInBrowserContraintsInterface {
    bool (*isMountable)(void* this);
    bool (*isFrameable)(void* this);
    bool (*isQuickFrameable)(void* this);
    void (*setMountable)(void* this, bool canBeMounted);
    void (*setFrameable)(void* this, bool canBeFramed);
    void (*setQuickFrameable)(void* this, bool canBeQuickFramed);
    void (*setMountedLink)(void* this, const char* mountedLink);
    const char* (*getMountedLink)(void* this);
};


