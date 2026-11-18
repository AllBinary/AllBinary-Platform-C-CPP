#ifndef ORG_ALLBINARY_TIME_GAMETICKTIMEDELAYHELPER_H
#define ORG_ALLBINARY_TIME_GAMETICKTIMEDELAYHELPER_H
/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2022 AllBinary 
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
// package org.allbinary.time

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "java/lang/System.h"
#include "java/lang/Long.h"

typedef struct GameTickTimeDelayHelper GameTickTimeDelayHelper;
struct GameTickTimeDelayHelper {
    int64_t timeDelta;
    int64_t startTime;
    int64_t lastStartTime;
};


GameTickTimeDelayHelper* GameTickTimeDelayHelper_new(int64_t startTime);

void GameTickTimeDelayHelper_init(GameTickTimeDelayHelper* this, int64_t startTime);

int64_t GameTickTimeDelayHelper_setStartTime(GameTickTimeDelayHelper* this);

void GameTickTimeDelayHelper_loop(GameTickTimeDelayHelper* this);

int64_t GameTickTimeDelayHelper_getTimeFromStart(GameTickTimeDelayHelper* this);
#define GameTickTimeDelayHelper_new1 GameTickTimeDelayHelper_new
#define GameTickTimeDelayHelper_init1 GameTickTimeDelayHelper_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameTickTimeDelayHelper_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GameTickTimeDelayHelper_register(void);


#endif // ORG_ALLBINARY_TIME_GAMETICKTIMEDELAYHELPER_H
