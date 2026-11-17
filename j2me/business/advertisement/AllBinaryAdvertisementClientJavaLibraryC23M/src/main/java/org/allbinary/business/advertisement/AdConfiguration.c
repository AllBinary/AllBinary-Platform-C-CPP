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
// package org.allbinary.business.advertisement

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/direction/Direction.h"
#include "org/allbinary/game/state/GameState.h"

typedef struct AdConfiguration AdConfiguration;
struct AdConfiguration {
    const char* INNERACTIVE;
    const char* LEADBOLT;
    const char* ADMOB;
};


AdConfiguration* AdConfiguration_new(Any** advertIdArray);

void AdConfiguration_init(AdConfiguration* this, Any** advertIdArray);
Direction** AdConfiguration_getValidAdSpots(AdConfiguration* this);
void AdConfiguration_process(AdConfiguration* this, GameState* gameState);
void AdConfiguration_processDemo(AdConfiguration* this, int32_t state);
void AdConfiguration_setShowAds(AdConfiguration* this);
void AdConfiguration_setToggleAds(AdConfiguration* this, bool showAds);
bool AdConfiguration_isShowAds(AdConfiguration* this);

static void AdConfiguration_initFields(AdConfiguration* this) {
    
    
    
}


void AdConfiguration_init(AdConfiguration* this, Any** advertIdArray) {
    AdConfiguration_initFields(this);
        this->INNERACTIVE = ((const char*) advertIdArray[0]);
        this->ADMOB = ((const char*) advertIdArray[1]);
        this->LEADBOLT = ((const char*) advertIdArray[2]);
}

AdConfiguration* AdConfiguration_new(Any** advertIdArray) {
    AdConfiguration* this = calloc(1, sizeof(AdConfiguration));
    AdConfiguration_init(this, advertIdArray);
    return this;
}


Direction** AdConfiguration_getValidAdSpots(AdConfiguration* this) {
        return ((Direction**) java_array_new(sizeof(Direction*), 0));
}


void AdConfiguration_process(AdConfiguration* this, GameState* gameState) {
}


void AdConfiguration_processDemo(AdConfiguration* this, int32_t state) {
}


void AdConfiguration_setShowAds(AdConfiguration* this) {
}


void AdConfiguration_setToggleAds(AdConfiguration* this, bool showAds) {
}


bool AdConfiguration_isShowAds(AdConfiguration* this) {
        return true;
}

