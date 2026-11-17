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
// package org.allbinary.game.displayable.canvas

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/graphics/form/item/CommandTextItemArrayFactory.h"
#include "org/allbinary/graphics/form/item/LimitCommandsVisitor.h"

typedef struct GameLimitedCommandTextItemArrayFactory GameLimitedCommandTextItemArrayFactory;
struct GameLimitedCommandTextItemArrayFactory {
    CommandTextItemArrayFactory* commandTextItemArrayFactory;
};

static GameLimitedCommandTextItemArrayFactory* GameLimitedCommandTextItemArrayFactory_instance;

GameLimitedCommandTextItemArrayFactory* GameLimitedCommandTextItemArrayFactory_new(void);
GameLimitedCommandTextItemArrayFactory* GameLimitedCommandTextItemArrayFactory_getInstance(void);
CommandTextItemArrayFactory* GameLimitedCommandTextItemArrayFactory_getCommandTextItemArrayFactory(GameLimitedCommandTextItemArrayFactory* this);

// Static fields with runtime initializers: call this once at startup
void GameLimitedCommandTextItemArrayFactory_staticInit(void) {
    GameLimitedCommandTextItemArrayFactory_instance = GameLimitedCommandTextItemArrayFactory_new();
}

static void GameLimitedCommandTextItemArrayFactory_initFields(GameLimitedCommandTextItemArrayFactory* this) {
    this->commandTextItemArrayFactory = CommandTextItemArrayFactory_new(LimitCommandsVisitor_new());
}

void GameLimitedCommandTextItemArrayFactory_init(GameLimitedCommandTextItemArrayFactory* this) {
    GameLimitedCommandTextItemArrayFactory_initFields(this);
}

GameLimitedCommandTextItemArrayFactory* GameLimitedCommandTextItemArrayFactory_new(void) {
    GameLimitedCommandTextItemArrayFactory* this = calloc(1, sizeof(GameLimitedCommandTextItemArrayFactory));
    GameLimitedCommandTextItemArrayFactory_init(this);
    return this;
}


GameLimitedCommandTextItemArrayFactory* GameLimitedCommandTextItemArrayFactory_getInstance(void) {
        return GameLimitedCommandTextItemArrayFactory_instance;
}


CommandTextItemArrayFactory* GameLimitedCommandTextItemArrayFactory_getCommandTextItemArrayFactory(GameLimitedCommandTextItemArrayFactory* this) {
        return this->commandTextItemArrayFactory;
}

