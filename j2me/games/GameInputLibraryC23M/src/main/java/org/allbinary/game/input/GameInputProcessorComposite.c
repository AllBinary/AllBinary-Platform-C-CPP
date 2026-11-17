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
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/game/input/PlayerGameInput.h"

typedef struct GameInputProcessorComposite GameInputProcessorComposite;
struct GameInputProcessorComposite {
    PlayerGameInput base;
    const char* name;
    GameInputProcessorInterface* gameInputProcessorInterface;
    const char* NAME_LABEL;
};


GameInputProcessorComposite* GameInputProcessorComposite_new(const char* name, GameInputProcessorInterface* gameInputProcessorInterface);

void GameInputProcessorComposite_init(GameInputProcessorComposite* this, const char* name, GameInputProcessorInterface* gameInputProcessorInterface);
void GameInputProcessorComposite_update(GameInputProcessorComposite* this);
const char* GameInputProcessorComposite_toString(GameInputProcessorComposite* this);

static void GameInputProcessorComposite_initFields(GameInputProcessorComposite* this) {
    
    
    this->NAME_LABEL = " GameInputProcessorInterface: ";
}


void GameInputProcessorComposite_init(GameInputProcessorComposite* this, const char* name, GameInputProcessorInterface* gameInputProcessorInterface) {
        PlayerGameInput_init(&this->base, BasicArrayListD_new(), BasicArrayListD_new(), -1);
        GameInputProcessorComposite_initFields(this);
        this->name = name;
        this->gameInputProcessorInterface = gameInputProcessorInterface;
}

GameInputProcessorComposite* GameInputProcessorComposite_new(const char* name, GameInputProcessorInterface* gameInputProcessorInterface) {
    GameInputProcessorComposite* this = calloc(1, sizeof(GameInputProcessorComposite));
    GameInputProcessorComposite_init(this, name, gameInputProcessorInterface);
    return this;
}


// synchronized
void GameInputProcessorComposite_update(GameInputProcessorComposite* this) {
        JAVA_TRY {
            BasicArrayList* list = GameInputProcessorComposite_getGameKeyEventList(this);
            GameInputProcessorInterface_onInput(this->gameInputProcessorInterface, list);
        } JAVA_CATCH(Exception, e) {
            JAVA_CALL(this->logUtil, put, this->commonStrings->EXCEPTION, this, this->commonStrings->UPDATE, e);
        } JAVA_END_TRY;
}


const char* GameInputProcessorComposite_toString(GameInputProcessorComposite* this) {
        return JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), PlayerGameInput_toString((&this->base))), append, this->NAME_LABEL), append, this->name), toString);
}

