#ifndef ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_ADCONFIGURATION_H
#define ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_ADCONFIGURATION_H
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
typedef struct Direction Direction;
typedef struct GameState GameState;

typedef struct AdConfiguration AdConfiguration;
struct AdConfiguration {
    const char* INNERACTIVE;
    const char* LEADBOLT;
    const char* ADMOB;
};


AdConfiguration* AdConfiguration_new(void** advertIdArray);

void AdConfiguration_init(AdConfiguration* this, void** advertIdArray);

Direction** AdConfiguration_getValidAdSpots(AdConfiguration* this);

void AdConfiguration_process(AdConfiguration* this, GameState* gameState);

void AdConfiguration_processDemo(AdConfiguration* this, int32_t state);

void AdConfiguration_setShowAds(AdConfiguration* this);

void AdConfiguration_setToggleAds(AdConfiguration* this, bool showAds);

bool AdConfiguration_isShowAds(AdConfiguration* this);
#define AdConfiguration_new1 AdConfiguration_new
#define AdConfiguration_init1 AdConfiguration_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AdConfiguration_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void AdConfiguration_register(void);


#endif // ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_ADCONFIGURATION_H
