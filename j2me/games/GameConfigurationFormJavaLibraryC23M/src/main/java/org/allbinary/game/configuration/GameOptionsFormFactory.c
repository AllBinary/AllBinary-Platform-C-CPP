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
// package org.allbinary.game.configuration

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/CommandListener.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/displayable/screen/CommandForm.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct GameOptionsFormFactory GameOptionsFormFactory;
struct GameOptionsFormFactory {
    LogUtil* logUtil;
};

static GameOptionsFormFactory* GameOptionsFormFactory_instance;

GameOptionsFormFactory* GameOptionsFormFactory_new(void);

void GameOptionsFormFactory_init(GameOptionsFormFactory* this);
GameOptionsFormFactory* GameOptionsFormFactory_getInstance(void);
CommandForm* GameOptionsFormFactory_init(GameOptionsFormFactory* this, CommandListener* commandListener, const char* title, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor);

// Static fields with runtime initializers: call this once at startup
void GameOptionsFormFactory_staticInit(void) {
    GameOptionsFormFactory_instance = GameOptionsFormFactory_new();
}

static void GameOptionsFormFactory_initFields(GameOptionsFormFactory* this) {
    this->logUtil = LogUtil_getInstance();
}


void GameOptionsFormFactory_init(GameOptionsFormFactory* this) {
    GameOptionsFormFactory_initFields(this);
}

GameOptionsFormFactory* GameOptionsFormFactory_new(void) {
    GameOptionsFormFactory* this = calloc(1, sizeof(GameOptionsFormFactory));
    GameOptionsFormFactory_init(this);
    return this;
}


GameOptionsFormFactory* GameOptionsFormFactory_getInstance(void) {
        return GameOptionsFormFactory_instance;
}


CommandForm* GameOptionsFormFactory_init(GameOptionsFormFactory* this, CommandListener* commandListener, const char* title, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor) {
        JAVA_TRY {
            return GameOptionsForm_new(commandListener, title, backgrounBasicColor, foregroundBasicColor);
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->INIT, e);
            return CommandForm_getNullCommandForm();
        } JAVA_END_TRY;
}

