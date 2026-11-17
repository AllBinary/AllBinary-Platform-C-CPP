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
// package org.allbinary.game.configuration.feature

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Command.h"
// #include "javax/microedition/lcdui/Item.h"
// #include "javax/microedition/lcdui/ItemCommandListener.h"
#include "org/allbinary/game/configuration/GameConfigurationGauge.h"
#include "org/allbinary/game/configuration/GameConfigurationUtil.h"
#include "org/allbinary/game/configuration/GameOptionsForm.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/midlet/MidletStrings.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct GameFeatureItemCommandListener GameFeatureItemCommandListener;
struct GameFeatureItemCommandListener {
    ItemCommandListener ItemCommandListener_interface;
    LogUtil* logUtil;
    GameOptionsForm* gameOptionsForm;
};


GameFeatureItemCommandListener* GameFeatureItemCommandListener_new(GameOptionsForm* gameOptionsForm);

void GameFeatureItemCommandListener_init(GameFeatureItemCommandListener* this, GameOptionsForm* gameOptionsForm);
void GameFeatureItemCommandListener_commandAction(GameFeatureItemCommandListener* this, Command* command, Item* item);

static void GameFeatureItemCommandListener_initFields(GameFeatureItemCommandListener* this) {
    this->logUtil = LogUtil_getInstance();
    
}


void GameFeatureItemCommandListener_init(GameFeatureItemCommandListener* this, GameOptionsForm* gameOptionsForm) {
    GameFeatureItemCommandListener_initFields(this);
        this->gameOptionsForm = gameOptionsForm;
}

GameFeatureItemCommandListener* GameFeatureItemCommandListener_new(GameOptionsForm* gameOptionsForm) {
    GameFeatureItemCommandListener* this = calloc(1, sizeof(GameFeatureItemCommandListener));
    GameFeatureItemCommandListener_init(this, gameOptionsForm);
    return this;
}


void GameFeatureItemCommandListener_commandAction(GameFeatureItemCommandListener* this, Command* command, Item* item) {
        JAVA_TRY {
            const char* itemLabel = Item_getLabel(item);
            LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), CommonLabels_getInstance()->ITEM_LABEL), append, itemLabel), toString), this, MidletStrings_getInstance()->COMMAND_ACTION);
            if (java_instanceof(item, "GameConfigurationGauge")) {
                GameConfigurationUtil_change(GameConfigurationUtil_getInstance(), this->gameOptionsForm, ((GameConfigurationGauge*) item));
            }
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, MidletStrings_getInstance()->COMMAND_ACTION, e);
        } JAVA_END_TRY;
}

