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
// package org.allbinary.game.ag.ai.tactical

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
#include "org/allbinary/game/ag/ai/InputProbability.h"
#include "org/allbinary/game/input/GameInput.h"
#include "org/allbinary/game/rand/MyRandomFactory.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/logic/util/visitor/Visitor.h"
#include "org/allbinary/time/GameTickTimeDelayHelperFactory.h"

typedef struct BasicRandomAI BasicRandomAI;
struct BasicRandomAI {
    BasicAI base;
    int32_t i_random;
    InputProbability* inputProbability;
    Visitor* visitor;
    int32_t* keyArray;
    MyRandomFactory* myRandomFactory;
};


BasicRandomAI* BasicRandomAI_new(AllBinaryLayer* ownerLayerInterface, GameInput* gameInput, InputProbability* inputProbability, Visitor* visitor);

void BasicRandomAI_init(BasicRandomAI* this, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput, InputProbability* inputProbability, Visitor* visitor);
void BasicRandomAI_processAI(BasicRandomAI* this, AllBinaryLayerManager* allBinaryLayerManager);

static void BasicRandomAI_initFields(BasicRandomAI* this) {
    this->i_random = 0;
    
    
    this->keyArray = ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ Canvas_UP, Canvas_DOWN, Canvas_LEFT, Canvas_RIGHT, Canvas_KEY_NUM1, Canvas_KEY_NUM7, Canvas_KEY_NUM9 }) / sizeof(int32_t), (int32_t[]){ Canvas_UP, Canvas_DOWN, Canvas_LEFT, Canvas_RIGHT, Canvas_KEY_NUM1, Canvas_KEY_NUM7, Canvas_KEY_NUM9 }));
    this->myRandomFactory = MyRandomFactory_getInstance();
}


void BasicRandomAI_init(BasicRandomAI* this, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput, InputProbability* inputProbability, Visitor* visitor) {
        BasicAI_init(&this->base, ownerLayerInterface, gameInput);
        BasicRandomAI_initFields(this);
        this->inputProbability = inputProbability;
        this->visitor = visitor;
}

BasicRandomAI* BasicRandomAI_new(AllBinaryLayer* ownerLayerInterface, GameInput* gameInput, InputProbability* inputProbability, Visitor* visitor) {
    BasicRandomAI* this = calloc(1, sizeof(BasicRandomAI));
    BasicRandomAI_init(this, ownerLayerInterface, gameInput, inputProbability, visitor);
    return this;
}


// throws Exception
void BasicRandomAI_processAI(BasicRandomAI* this, AllBinaryLayerManager* allBinaryLayerManager) {
        if (JAVA_CALL(InputProbability_getTimeDelayHelper(this->inputProbability), isTime, GameTickTimeDelayHelperFactory_getInstance()->startTime)) {
            this->i_random = MyRandomFactory_getAbsoluteNextInt(this->myRandomFactory, InputProbability_getMax(this->inputProbability));
            bool repeat = false;
            int32_t* repeatLikelyhoodIntegerArray = InputProbability_getRepeatLikelyhoodIntegerArray(this->inputProbability);
            if (BasicRandomAI_getLastKey(this) != -1 && JAVA_CALL(repeatLikelyhoodIntegerArray[BasicRandomAI_getLastKey(this)], intValue) >= this->i_random) {
                repeat = true;
            }
            if (!repeat) {
                int32_t** likelyhoodIntegerArray = InputProbability_getLikelyhoodIntegerArray(this->inputProbability);
                this->i_random = MyRandomFactory_getAbsoluteNextInt(this->myRandomFactory, InputProbability_getMax(this->inputProbability));
                int32_t size = java_array_length(this->keyArray);
                int32_t* likelyhoodIntegerKeyArray = nullptr;
                for (int32_t index = 0; index < size; index++) {
                    int32_t key = this->keyArray[index];
                    likelyhoodIntegerKeyArray = likelyhoodIntegerArray[key];
                    if (java_array_length(likelyhoodIntegerArray) >= key && likelyhoodIntegerKeyArray[0] != nullptr) {
                        if (this->i_random >= JAVA_CALL(likelyhoodIntegerKeyArray[0], intValue) && this->i_random < JAVA_CALL(likelyhoodIntegerKeyArray[1], intValue)) {
                            BasicRandomAI_setLastKey(this, key);
                            break;
                        }
                    }
                }
            }
            Visitor_visit(this->visitor, this);
        }
}

