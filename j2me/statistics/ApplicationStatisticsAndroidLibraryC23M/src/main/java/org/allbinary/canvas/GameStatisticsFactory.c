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
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/canvas/AndroidGameStatistics.h"

//ActualPlatform
typedef struct GameStatisticsFactory GameStatisticsFactory;
struct GameStatisticsFactory {
    AndroidGameStatistics base;
    StringMaker* stringBuffer;
};

static AndroidGameStatistics* GameStatisticsFactory_SINGLETON;

GameStatisticsFactory* GameStatisticsFactory_new(void);
AndroidGameStatistics* GameStatisticsFactory_getInstance(void);
void GameStatisticsFactory_add(GameStatisticsFactory* this, const char* string);
const char* GameStatisticsFactory_toString(GameStatisticsFactory* this);

// Static fields with runtime initializers: call this once at startup
void GameStatisticsFactory_staticInit(void) {
    GameStatisticsFactory_SINGLETON = GameStatisticsFactory_new();
}

static void GameStatisticsFactory_initFields(GameStatisticsFactory* this) {
    this->stringBuffer = StringMaker_new();
}

void GameStatisticsFactory_init(GameStatisticsFactory* this) {
    AndroidGameStatistics_init(&this->base);
    GameStatisticsFactory_initFields(this);
}

GameStatisticsFactory* GameStatisticsFactory_new(void) {
    GameStatisticsFactory* this = calloc(1, sizeof(GameStatisticsFactory));
    GameStatisticsFactory_init(this);
    return this;
}


AndroidGameStatistics* GameStatisticsFactory_getInstance(void) {
        return GameStatisticsFactory_SINGLETON;
}


void GameStatisticsFactory_add(GameStatisticsFactory* this, const char* string) {
        if (StringMaker_length(this->stringBuffer) > 12000) {
            StringMaker_delete(this->stringBuffer, 0, StringMaker_length(this->stringBuffer));
            StringMaker_append(this->stringBuffer, "Old Stats Cleared");
        }
        StringMaker_append(this->stringBuffer, string);
}


const char* GameStatisticsFactory_toString(GameStatisticsFactory* this) {
        return JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), AndroidGameStatistics_toString((&this->base))), append, StringMaker_toString(this->stringBuffer)), toString);
}

