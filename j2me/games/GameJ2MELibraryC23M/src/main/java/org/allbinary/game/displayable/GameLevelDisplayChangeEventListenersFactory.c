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
// package org.allbinary.game.displayable

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/graphics/displayable/event/DisplayChangeEventHandler.h"
#include "org/allbinary/graphics/displayable/event/DisplayChangeEventListener.h"
#include "org/allbinary/logic/util/event/handler/BasicEventHandler.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"

typedef struct GameLevelDisplayChangeEventListenersFactory GameLevelDisplayChangeEventListenersFactory;
struct GameLevelDisplayChangeEventListenersFactory {
    BasicArrayList* list;
};

static GameLevelDisplayChangeEventListenersFactory* GameLevelDisplayChangeEventListenersFactory_instance;

GameLevelDisplayChangeEventListenersFactory* GameLevelDisplayChangeEventListenersFactory_new(void);
GameLevelDisplayChangeEventListenersFactory* GameLevelDisplayChangeEventListenersFactory_getInstance(void);
void GameLevelDisplayChangeEventListenersFactory_add(GameLevelDisplayChangeEventListenersFactory* this, DisplayChangeEventListener* displayChangeEventListener);
void GameLevelDisplayChangeEventListenersFactory_clear(GameLevelDisplayChangeEventListenersFactory* this);

// Static fields with runtime initializers: call this once at startup
void GameLevelDisplayChangeEventListenersFactory_staticInit(void) {
    GameLevelDisplayChangeEventListenersFactory_instance = GameLevelDisplayChangeEventListenersFactory_new();
}

static void GameLevelDisplayChangeEventListenersFactory_initFields(GameLevelDisplayChangeEventListenersFactory* this) {
    this->list = BasicArrayListD_new();
}

void GameLevelDisplayChangeEventListenersFactory_init(GameLevelDisplayChangeEventListenersFactory* this) {
    GameLevelDisplayChangeEventListenersFactory_initFields(this);
}

GameLevelDisplayChangeEventListenersFactory* GameLevelDisplayChangeEventListenersFactory_new(void) {
    GameLevelDisplayChangeEventListenersFactory* this = calloc(1, sizeof(GameLevelDisplayChangeEventListenersFactory));
    GameLevelDisplayChangeEventListenersFactory_init(this);
    return this;
}


GameLevelDisplayChangeEventListenersFactory* GameLevelDisplayChangeEventListenersFactory_getInstance(void) {
        return GameLevelDisplayChangeEventListenersFactory_instance;
}


void GameLevelDisplayChangeEventListenersFactory_add(GameLevelDisplayChangeEventListenersFactory* this, DisplayChangeEventListener* displayChangeEventListener) {
        BasicArrayList_add(this->list, displayChangeEventListener);
        DisplayChangeEventHandler_addListenerInterface(DisplayChangeEventHandler_getInstance(), displayChangeEventListener);
}


void GameLevelDisplayChangeEventListenersFactory_clear(GameLevelDisplayChangeEventListenersFactory* this) {
        BasicEventHandler* displayChangeEventHandler = DisplayChangeEventHandler_getInstance();
        DisplayChangeEventListener* displayChangeEventListener = nullptr;
        for (int32_t index = BasicArrayList_size(this->list); --index >= 0; ) {
            displayChangeEventListener = ((DisplayChangeEventListener*) this->list->objectArray[index]);
            BasicEventHandler_removeListener(displayChangeEventHandler, displayChangeEventListener);
        }
        BasicArrayList_clear(this->list);
}

