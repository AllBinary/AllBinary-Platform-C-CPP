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
// #include "javax/microedition/lcdui/ChoiceGroup.h"
// #include "javax/microedition/lcdui/Item.h"
// #include "javax/microedition/lcdui/ItemStateListener.h"
#include "org/allbinary/game/configuration/GameConfigurationGauge.h"
#include "org/allbinary/game/configuration/GameConfigurationUtil.h"
#include "org/allbinary/game/configuration/GameOptionsForm.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"

typedef struct GameFeatureItemStateListener GameFeatureItemStateListener;
struct GameFeatureItemStateListener {
    ItemStateListener ItemStateListener_interface;
    LogUtil* logUtil;
    GameOptionsForm* gameOptionsForm;
};

static BasicArrayList* GameFeatureItemStateListener_toggleList;

GameFeatureItemStateListener* GameFeatureItemStateListener_new(GameOptionsForm* gameOptionsForm);

void GameFeatureItemStateListener_init(GameFeatureItemStateListener* this, GameOptionsForm* gameOptionsForm);
void GameFeatureItemStateListener_add(GameFeature* gameFeature);
void GameFeatureItemStateListener_itemStateChanged(GameFeatureItemStateListener* this, Item* item);

// Static fields with runtime initializers: call this once at startup
void GameFeatureItemStateListener_staticInit(void) {
    GameFeatureItemStateListener_toggleList = BasicArrayListD_new();
}

static void GameFeatureItemStateListener_initFields(GameFeatureItemStateListener* this) {
    this->logUtil = LogUtil_getInstance();
    
}


void GameFeatureItemStateListener_init(GameFeatureItemStateListener* this, GameOptionsForm* gameOptionsForm) {
    GameFeatureItemStateListener_initFields(this);
        this->gameOptionsForm = gameOptionsForm;
        GameFeatureFactory* gameFeatureFactory = GameFeatureFactory_getInstance();
        GameFeatureItemStateListener_add(gameFeatureFactory->ARTIFICIAL_INTELLEGENCE_PROCESSOR);
        GameFeatureItemStateListener_add(gameFeatureFactory->COLLIDABLE_INTERFACE_LAYER_PROCESSOR);
        GameFeatureItemStateListener_add(gameFeatureFactory->DAMAGE_FLOATERS);
        GameFeatureItemStateListener_add(gameFeatureFactory->DROPPED_ITEMS);
        GameFeatureItemStateListener_add(gameFeatureFactory->GAME_INPUT_LAYER_PROCESSOR);
        GameFeatureItemStateListener_add(gameFeatureFactory->HEALTH_BARS);
        GameFeatureItemStateListener_add(gameFeatureFactory->SOUND);
        GameFeatureItemStateListener_add(gameFeatureFactory->TICKABLE_LAYER_PROCESSOR);
}

GameFeatureItemStateListener* GameFeatureItemStateListener_new(GameOptionsForm* gameOptionsForm) {
    GameFeatureItemStateListener* this = calloc(1, sizeof(GameFeatureItemStateListener));
    GameFeatureItemStateListener_init(this, gameOptionsForm);
    return this;
}


void GameFeatureItemStateListener_add(GameFeature* gameFeature) {
        if (!JAVA_CALL(GameFeatureItemStateListener_toggleList, contains, gameFeature)) {
            JAVA_CALL(GameFeatureItemStateListener_toggleList, add, gameFeature);
        }
}


void GameFeatureItemStateListener_itemStateChanged(GameFeatureItemStateListener* this, Item* item) {
        JAVA_TRY {
            const char* itemLabel = Item_getLabel(item);
            LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), CommonLabels_getInstance()->ITEM_LABEL), append, itemLabel), toString), this, "itemStateChanged");
            if (java_instanceof(item, "GameConfigurationGauge")) {
                GameConfigurationUtil_change(GameConfigurationUtil_getInstance(), this->gameOptionsForm, ((GameConfigurationGauge*) item));
            } else if (java_instanceof(item, "ChoiceGroup")) {
                GameFeatureUtil* gameFeatureUtil = GameFeatureUtil_getInstance();
                if (GameFeatureUtil_isExclusive(gameFeatureUtil, itemLabel)) {
                    GameFeatureUtil_updateExclusiveForChoiceGroup(gameFeatureUtil, ((ChoiceGroup*) item));
                } else {
                    GameFeatureUtil_updateMultiple(gameFeatureUtil, ((ChoiceGroup*) item));
                }
            }
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, "itemStateChanged", e);
        } JAVA_END_TRY;
}

