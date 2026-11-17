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
// package org.allbinary.game

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/business/advertisement/GameAdStateBase.h"
#include "org/allbinary/business/advertisement/AdConfiguration.h"
#include "org/allbinary/input/event/VirtualKeyboardEvent.h"
#include "org/allbinary/input/event/VirtualKeyboardEventHandler.h"
#include "org/allbinary/input/event/VirtualKeyboardEventListenerInterface.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"

typedef struct GameAdState GameAdState;
struct GameAdState {
    GameAdStateBase base;
    VirtualKeyboardEventListenerInterface VirtualKeyboardEventListenerInterface_interface;
};


GameAdState* GameAdState_new(AdConfiguration* adConfiguration);

void GameAdState_init(GameAdState* this, AdConfiguration* adConfiguration);
void GameAdState_onVirtualKeyboardEvent(GameAdState* this, VirtualKeyboardEvent* virtualKeyboardEvent);
void GameAdState_onEvent(GameAdState* this, AllBinaryEventObject* eventObject);


void GameAdState_init(GameAdState* this, AdConfiguration* adConfiguration) {
        GameAdStateBase_init(&this->base, adConfiguration);
        VirtualKeyboardEventHandler_addListenerInterface(VirtualKeyboardEventHandler_getInstance(), this);
}

GameAdState* GameAdState_new(AdConfiguration* adConfiguration) {
    GameAdState* this = calloc(1, sizeof(GameAdState));
    GameAdState_init(this, adConfiguration);
    return this;
}


// throws Exception
void GameAdState_onVirtualKeyboardEvent(GameAdState* this, VirtualKeyboardEvent* virtualKeyboardEvent) {
}


void GameAdState_onEvent(GameAdState* this, AllBinaryEventObject* eventObject) {
        GameAdStateBase_onEvent((&this->base), eventObject);
}

