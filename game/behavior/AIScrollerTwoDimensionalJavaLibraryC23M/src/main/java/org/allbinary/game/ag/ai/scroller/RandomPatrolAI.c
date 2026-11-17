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
#include "org/allbinary/game/input/GameInput.h"
#include "org/allbinary/game/rand/MyRandomFactory.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/game/ag/ai/scroller/BasePatrolAI.h"

typedef struct RandomPatrolAI RandomPatrolAI;
struct RandomPatrolAI {
    BasePatrolAI base;
    bool changedDirection;
};


RandomPatrolAI* RandomPatrolAI_new(ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

void RandomPatrolAI_init(RandomPatrolAI* this, ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);
static void RandomPatrolAI_updateRandomDistance(RandomPatrolAI* this);
void RandomPatrolAI_processAI(RandomPatrolAI* this, AllBinaryLayerManager* allBinaryLayerManager);
void RandomPatrolAI_nextDirection(RandomPatrolAI* this);

static void RandomPatrolAI_initFields(RandomPatrolAI* this) {
    this->changedDirection = true;
}


void RandomPatrolAI_init(RandomPatrolAI* this, ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
        BasePatrolAI_init(&this->base, hashtable, ownerLayerInterface, gameInput);
        RandomPatrolAI_initFields(this);
        RandomPatrolAI_updateRandomDistance(this);
}

RandomPatrolAI* RandomPatrolAI_new(ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
    RandomPatrolAI* this = calloc(1, sizeof(RandomPatrolAI));
    RandomPatrolAI_init(this, hashtable, ownerLayerInterface, gameInput);
    return this;
}


static void RandomPatrolAI_updateRandomDistance(RandomPatrolAI* this) {
        this->currentDistance = MyRandomFactory_getAbsoluteNextInt(MyRandomFactory_getInstance(), JAVA_CALL(this->maxDistance, intValue));
}


// throws Exception
void RandomPatrolAI_processAI(RandomPatrolAI* this, AllBinaryLayerManager* allBinaryLayerManager) {
        BasePatrolAI_update((&this->base));
        BasePatrolAI_processKeyAI((&this->base), this->keyDirection);
        if (this->changedDirection) {
            BasePatrolAI_processKeyAI((&this->base), Canvas_KEY_NUM1);
            RandomPatrolAI_updateRandomDistance(this);
            this->changedDirection = false;
        }
}


void RandomPatrolAI_nextDirection(RandomPatrolAI* this) {
        BasePatrolAI_nextDirection((&this->base));
        this->changedDirection = true;
}

