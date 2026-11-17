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
// package org.allbinary.game.displayable.canvas

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/business/advertisement/GameAdStateFactory.h"
#include "org/allbinary/game/GameAdState.h"
#include "org/allbinary/game/configuration/feature/Features.h"
#include "org/allbinary/graphics/opengles/CurrentDisplayableFactory.h"
#include "org/allbinary/graphics/opengles/OpenGLFeatureFactory.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/game/displayable/canvas/DemoGameBehavior.h"

typedef struct BaseGameBehavior BaseGameBehavior;
struct BaseGameBehavior {
    DemoGameBehavior base;
};

static BaseGameBehavior* BaseGameBehavior_instanceC;

BaseGameBehavior* BaseGameBehavior_new(void);
DemoGameBehavior* BaseGameBehavior_getInstance(void);
void BaseGameBehavior_init(BaseGameBehavior* this);
void BaseGameBehavior_pause(BaseGameBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas);
void BaseGameBehavior_unPause(BaseGameBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas);
void BaseGameBehavior_updateTouch(BaseGameBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas);
void BaseGameBehavior_updateScreenButtonPaintable(BaseGameBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas);
void BaseGameBehavior_setGameState(BaseGameBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas);
void BaseGameBehavior_removeAllGameKeyInputListeners(BaseGameBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas);
void BaseGameBehavior_updateEndGameProcessor(BaseGameBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas);
void BaseGameBehavior_buildGame(BaseGameBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas);
void BaseGameBehavior_run(BaseGameBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas);
void BaseGameBehavior_setHighScore(BaseGameBehavior* this, AbeClientInformationInterface* abeClientInformation, AllBinaryGameCanvas* allBinaryGameCanvas, const char* name, int64_t score, bool autoSubmit, bool isLast);

// Static fields with runtime initializers: call this once at startup
void BaseGameBehavior_staticInit(void) {
    BaseGameBehavior_instanceC = BaseGameBehavior_new();
}

void BaseGameBehavior_init(BaseGameBehavior* this) {
    DemoGameBehavior_init(&this->base);
}

BaseGameBehavior* BaseGameBehavior_new(void) {
    BaseGameBehavior* this = calloc(1, sizeof(BaseGameBehavior));
    BaseGameBehavior_init(this);
    return this;
}


DemoGameBehavior* BaseGameBehavior_getInstance(void) {
        return BaseGameBehavior_instanceC;
}


// throws Exception
void BaseGameBehavior_init(BaseGameBehavior* this) {
        GameAdState* gameAdState = GameAdStateFactory_getCurrentInstance(GameAdStateFactory_getInstance());
        GameAdState_playingAdState(gameAdState);
}


void BaseGameBehavior_pause(BaseGameBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas) {
        Features* features = Features_getInstance();
        if (Features_isDefault(features, OpenGLFeatureFactory_getInstance()->OPENGL_AS_GAME_THREAD)) {
            CurrentDisplayableFactory* currentDisplayableFactory = CurrentDisplayableFactory_getInstance();
            CurrentDisplayableFactory_setRunnable(currentDisplayableFactory, allBinaryGameCanvas->gamePauseRunnable);
        }
}


void BaseGameBehavior_unPause(BaseGameBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas) {
        if (Features_isDefault(Features_getInstance(), OpenGLFeatureFactory_getInstance()->OPENGL_AS_GAME_THREAD)) {
            CurrentDisplayableFactory* currentDisplayableFactory = CurrentDisplayableFactory_getInstance();
            CurrentDisplayableFactory_setRunnable(currentDisplayableFactory, allBinaryGameCanvas->gameRunnable);
            CurrentDisplayableFactory_setDisplayable(currentDisplayableFactory, allBinaryGameCanvas);
        }
}


// throws Exception
void BaseGameBehavior_updateTouch(BaseGameBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas) {
        AllBinaryGameCanvas_updateTouch2(allBinaryGameCanvas);
}


// throws Exception
void BaseGameBehavior_updateScreenButtonPaintable(BaseGameBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas) {
        AllBinaryGameCanvas_updateScreenButtonPaintable2(allBinaryGameCanvas);
}


// throws Exception
void BaseGameBehavior_setGameState(BaseGameBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas) {
        AllBinaryGameCanvas_updateGameState(allBinaryGameCanvas);
}


void BaseGameBehavior_removeAllGameKeyInputListeners(BaseGameBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas) {
        AllBinaryGameCanvas_removeAllGameKeyInputListeners2(allBinaryGameCanvas);
}


// throws Exception
void BaseGameBehavior_updateEndGameProcessor(BaseGameBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas) {
        AllBinaryGameCanvas_updateEndGameProcessor2(allBinaryGameCanvas);
}


// throws Exception
void BaseGameBehavior_buildGame(BaseGameBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas) {
        AllBinaryGameCanvas_buildGame2(allBinaryGameCanvas);
}


// throws Exception
void BaseGameBehavior_run(BaseGameBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas) {
        AllBinaryGameCanvas_run2(allBinaryGameCanvas);
}


// throws Exception
void BaseGameBehavior_setHighScore(BaseGameBehavior* this, AbeClientInformationInterface* abeClientInformation, AllBinaryGameCanvas* allBinaryGameCanvas, const char* name, int64_t score, bool autoSubmit, bool isLast) {
        AllBinaryGameCanvas_setHighScore2(allBinaryGameCanvas, abeClientInformation, name, score, autoSubmit, isLast);
}

