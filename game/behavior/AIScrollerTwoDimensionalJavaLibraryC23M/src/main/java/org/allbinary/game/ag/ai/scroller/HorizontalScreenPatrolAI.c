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
// package org.allbinary.game.ag.ai.scroller

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Canvas.h"
#include "org/allbinary/game/ai/BasicAI.h"
#include "org/allbinary/game/input/GameInput.h"
#include "org/allbinary/game/layer/AllBinaryGameLayerManager.h"
#include "org/allbinary/game/rand/MyRandomFactory.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#include "org/allbinary/media/audio/PlayerQueue.h"
#include "org/allbinary/media/audio/SecondaryPlayerQueueFactory.h"
#include "org/allbinary/media/audio/Sound.h"
#include "org/allbinary/time/TimeDelayHelper.h"
#include "org/allbinary/util/ABHashtable.h"

typedef struct HorizontalScreenPatrolAI HorizontalScreenPatrolAI;
struct HorizontalScreenPatrolAI {
    BasicAI base;
    int32_t keyDirection;
    DisplayInfoSingleton* displayInfoSingleton;
    int32_t firingX;
    int32_t firedIndex;
    int32_t MAX_FIRE;
    TimeDelayHelper* timeDelayHelper;
    PlayerQueue* secondaryPlayerQueue;
    Sound* sound;
};

int32_t HorizontalScreenPatrolAI_SOUND;

HorizontalScreenPatrolAI* HorizontalScreenPatrolAI_new(ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

void HorizontalScreenPatrolAI_init(HorizontalScreenPatrolAI* this, ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);
void HorizontalScreenPatrolAI_processAI(HorizontalScreenPatrolAI* this, AllBinaryLayerManager* allBinaryLayerManager);
void HorizontalScreenPatrolAI_nextDirection(HorizontalScreenPatrolAI* this);

// Static fields with runtime initializers: call this once at startup
void HorizontalScreenPatrolAI_staticInit(void) {
    HorizontalScreenPatrolAI_SOUND = SmallIntegerSingletonFactory_getAt(SmallIntegerSingletonFactory_getInstance(), 433);
}

static void HorizontalScreenPatrolAI_initFields(HorizontalScreenPatrolAI* this) {
    this->keyDirection = Canvas_LEFT;
    this->displayInfoSingleton = DisplayInfoSingleton_getInstance();
    this->firingX = DisplayInfoSingleton_getLastHalfWidth(this->displayInfoSingleton);
    this->firedIndex = 0;
    this->MAX_FIRE = 28;
    this->timeDelayHelper = TimeDelayHelper_new(240);
    this->secondaryPlayerQueue = SecondaryPlayerQueueFactory_getInstance();
    
}


void HorizontalScreenPatrolAI_init(HorizontalScreenPatrolAI* this, ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
        BasicAI_init(&this->base, ownerLayerInterface, gameInput);
        HorizontalScreenPatrolAI_initFields(this);
        this->sound = ((Sound*) ABHashtable_get(hashtable, HorizontalScreenPatrolAI_SOUND));
        if (this->sound == nullptr) {
            java_throw(java_exception_new("Exception", "No Sound Provided!!"));
        }
}

HorizontalScreenPatrolAI* HorizontalScreenPatrolAI_new(ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
    HorizontalScreenPatrolAI* this = calloc(1, sizeof(HorizontalScreenPatrolAI));
    HorizontalScreenPatrolAI_init(this, hashtable, ownerLayerInterface, gameInput);
    return this;
}


// throws Exception
void HorizontalScreenPatrolAI_processAI(HorizontalScreenPatrolAI* this, AllBinaryLayerManager* allBinaryLayerManager) {
        BasicAI_processKeyAI((&this->base), this->keyDirection);
        if (TimeDelayHelper_isTimeTNT(this->timeDelayHelper)) {
            AllBinaryLayer* layerInterface = HorizontalScreenPatrolAI_getOwnerLayerInterface(this);
            int32_t currentOwnerLayerX = AllBinaryLayer_getXP(layerInterface);
            if (currentOwnerLayerX < -AllBinaryLayer_getWidth(layerInterface)) {
                int32_t y = MyRandomFactory_getAbsoluteNextIntAllowZero(MyRandomFactory_getInstance(), 50);
                AllBinaryLayer_setPosition(layerInterface, DisplayInfoSingleton_getLastWidth(this->displayInfoSingleton) + AllBinaryLayer_getWidth(layerInterface) + 50, y, AllBinaryLayer_getZP(layerInterface));
                this->firedIndex = 0;
                this->firingX = DisplayInfoSingleton_getLastHalfWidth(this->displayInfoSingleton) + MyRandomFactory_getNextInt(MyRandomFactory_getInstance(), DisplayInfoSingleton_getLastHalfWidth(this->displayInfoSingleton));
                PlayerQueue_add(this->secondaryPlayerQueue, this->sound);
            }
            if (currentOwnerLayerX < this->firingX && currentOwnerLayerX > -AllBinaryLayer_getWidth(layerInterface)) {
                BasicAI_processKeyAI((&this->base), Canvas_KEY_NUM1);
                AllBinaryGameLayerManager* gameLayerManager = ((AllBinaryGameLayerManager*) allBinaryLayerManager);
                int32_t FIRE = (JAVA_CALL(AllBinaryGameLayerManager_getGameInfo(gameLayerManager), getCurrentLevel) + 12) >> 2;
                if (FIRE > this->MAX_FIRE) {
                    FIRE = this->MAX_FIRE;
                }
                if (this->firedIndex > FIRE) {
                    this->firedIndex = 0;
                    this->firingX = Integer_MIN_VALUE;
                }
                this->firedIndex++;
            }
        }
}


void HorizontalScreenPatrolAI_nextDirection(HorizontalScreenPatrolAI* this) {
}

