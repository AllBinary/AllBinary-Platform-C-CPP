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
// package org.allbinary.game.input

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct GameInputProcessorUtil GameInputProcessorUtil;
struct GameInputProcessorUtil {
    char unused;
};


GameInputProcessorUtil* GameInputProcessorUtil_new(void);
void GameInputProcessorUtil_init(GameInputProcessor** inputProcessorArray);

void GameInputProcessorUtil_init(GameInputProcessorUtil* this) {
}

GameInputProcessorUtil* GameInputProcessorUtil_new(void) {
    GameInputProcessorUtil* this = calloc(1, sizeof(GameInputProcessorUtil));
    GameInputProcessorUtil_init(this);
    return this;
}


void GameInputProcessorUtil_init(GameInputProcessor** inputProcessorArray) {
        GameInputProcessor* noInputProcessor = GameInputProcessor_getInstance();
        int32_t total = InputFactory_getInstance()->MAX;
        for (int32_t index = 0; index < total; index++) {
            GameInputProcessor* inputProcessorCanBeNull = inputProcessorArray[index];
            if (inputProcessorCanBeNull == nullptr) {
                inputProcessorArray[index] = noInputProcessor;
            }
        }
}

