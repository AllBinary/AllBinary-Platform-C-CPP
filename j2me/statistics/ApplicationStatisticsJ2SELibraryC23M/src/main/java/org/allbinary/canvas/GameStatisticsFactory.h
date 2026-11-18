#ifndef ORG_ALLBINARY_CANVAS_GAMESTATISTICSFACTORY_H
#define ORG_ALLBINARY_CANVAS_GAMESTATISTICSFACTORY_H
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
// package org.allbinary.canvas

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct BaseGameStatistics BaseGameStatistics;
typedef struct StringMaker StringMaker;
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#include "org/allbinary/canvas/BaseGameStatistics.h"

//ActualPlatform
typedef struct GameStatisticsFactory GameStatisticsFactory;
struct GameStatisticsFactory {
    BaseGameStatistics base;
    StringMaker* stringBuffer;
};


GameStatisticsFactory* GameStatisticsFactory_new(void);
void GameStatisticsFactory_init(GameStatisticsFactory* this);

GameStatisticsFactory* GameStatisticsFactory_getInstance(void);

void GameStatisticsFactory_add(GameStatisticsFactory* this, const char* string);

const char* GameStatisticsFactory_toString(GameStatisticsFactory* this);
#ifndef GameStatisticsFactory_process
#define GameStatisticsFactory_process BaseGameStatistics_process
#endif
#ifndef GameStatisticsFactory_nextFrame
#define GameStatisticsFactory_nextFrame BaseGameStatistics_nextFrame
#endif
#ifndef GameStatisticsFactory_nextRefresh
#define GameStatisticsFactory_nextRefresh BaseGameStatistics_nextRefresh
#endif
#ifndef GameStatisticsFactory_getRefreshRate
#define GameStatisticsFactory_getRefreshRate BaseGameStatistics_getRefreshRate
#endif
#ifndef GameStatisticsFactory_getTimeDelayHelper
#define GameStatisticsFactory_getTimeDelayHelper BaseGameStatistics_getTimeDelayHelper
#endif
#ifndef GameStatisticsFactory_to2DCharArray
#define GameStatisticsFactory_to2DCharArray BaseGameStatistics_to2DCharArray
#endif
#ifndef GameStatisticsFactory_toStringArray
#define GameStatisticsFactory_toStringArray BaseGameStatistics_toStringArray
#endif
#ifndef GameStatisticsFactory_toStringAt
#define GameStatisticsFactory_toStringAt BaseGameStatistics_toStringAt
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameStatisticsFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GameStatisticsFactory_register(void);


#endif // ORG_ALLBINARY_CANVAS_GAMESTATISTICSFACTORY_H
