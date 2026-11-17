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
// #include "javax/microedition/lcdui/NullImage.h"
#include "org/allbinary/MIDPUtil.h"
#include "org/allbinary/game/configuration/GameConfigurationGauge.h"
#include "org/allbinary/game/configuration/GameConfigurationUtil.h"
#include "org/allbinary/graphics/displayable/screen/CommandForm.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/HashtableUtil.h"

typedef struct GameFeatureFormUtil GameFeatureFormUtil;
struct GameFeatureFormUtil {
    LogUtil* logUtil;
    MIDPUtil* meUtil;
};

static GameFeatureFormUtil* GameFeatureFormUtil_instance;

GameFeatureFormUtil* GameFeatureFormUtil_new(void);
GameFeatureFormUtil* GameFeatureFormUtil_getInstance(void);
ChoiceGroup* GameFeatureFormUtil_getChoiceGroup(GameFeatureFormUtil* this, ABHashtable* hashtable, const char* name, int32_t option);
void GameFeatureFormUtil_addChoiceGroup(GameFeatureFormUtil* this, CommandForm* form, ABHashtable* hashtable, int32_t option);
void GameFeatureFormUtil_setDefault(GameFeatureFormUtil* this, CommandForm* form);

// Static fields with runtime initializers: call this once at startup
void GameFeatureFormUtil_staticInit(void) {
    GameFeatureFormUtil_instance = GameFeatureFormUtil_new();
}

static void GameFeatureFormUtil_initFields(GameFeatureFormUtil* this) {
    this->logUtil = LogUtil_getInstance();
    this->meUtil = MIDPUtil_getInstance();
}

void GameFeatureFormUtil_init(GameFeatureFormUtil* this) {
    GameFeatureFormUtil_initFields(this);
}

GameFeatureFormUtil* GameFeatureFormUtil_new(void) {
    GameFeatureFormUtil* this = calloc(1, sizeof(GameFeatureFormUtil));
    GameFeatureFormUtil_init(this);
    return this;
}


GameFeatureFormUtil* GameFeatureFormUtil_getInstance(void) {
        return GameFeatureFormUtil_instance;
}


ChoiceGroup* GameFeatureFormUtil_getChoiceGroup(GameFeatureFormUtil* this, ABHashtable* hashtable, const char* name, int32_t option) {
        StringMaker* stringMaker = StringMaker_new();
        ChoiceGroup* choiceGroup = ChoiceGroup_new(name, option, StringUtil_getArrayInstance(StringUtil_getInstance()), NullImage_NULL_IMAGE_ARRAY);
        BasicArrayList* list = ((BasicArrayList*) ABHashtable_get(hashtable, ((Any*) name)));
        Features* features = Features_getInstance();
        const char* ADD_CHOICE = ": Adding Choice: ";
        const char* GET_CHOICE_GROUP = "getChoiceGroup";
        int32_t size = BasicArrayList_size(list);
        for (int32_t index = 0; index < size; index++) {
            Feature* gameFeature = ((Feature*) list->objectArray[index]);
            StringMaker_delete(stringMaker, 0, StringMaker_length(stringMaker));
            LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(stringMaker, name), append, ADD_CHOICE), append, Feature_toString(gameFeature)), toString), this, GET_CHOICE_GROUP);
            ChoiceGroup_append(choiceGroup, Feature_toString(gameFeature), NullImage_NULL_IMAGE);
            if (Features_isFeature(features, gameFeature)) {
                ChoiceGroup_setSelectedIndex(choiceGroup, index, true);
            }
        }
        return choiceGroup;
}


void GameFeatureFormUtil_addChoiceGroup(GameFeatureFormUtil* this, CommandForm* form, ABHashtable* hashtable, int32_t option) {
        StringMaker* stringMaker = StringMaker_new();
        const char* ADDING_CHOICE_GROUP = "Adding Choice Group: ";
        const char* ADD_CHOICE_GROUP = "addChoiceGroup";
        int32_t size = ABHashtable_size(hashtable);
        Any** objectArray = HashtableUtil_getKeysAsArray(HashtableUtil_getInstance(), hashtable);
        const char* name = nullptr;
        for (int32_t index = 0; index < size; index++) {
            name = ((const char*) objectArray[index]);
            StringMaker_delete(stringMaker, 0, StringMaker_length(stringMaker));
            LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(stringMaker, ADDING_CHOICE_GROUP), append, name), toString), this, ADD_CHOICE_GROUP);
            MIDPUtil_appendItem(this->meUtil, form, GameFeatureFormUtil_getChoiceGroup(this, hashtable, name, option));
        }
}


// throws Exception
void GameFeatureFormUtil_setDefault(GameFeatureFormUtil* this, CommandForm* form) {
        int32_t size = CommandForm_size(form);
        for (int32_t index = 0; index < size; index++) {
            Item* item = CommandForm_get(form, index);
            if (java_instanceof(item, "GameConfigurationGauge")) {
                GameConfigurationUtil_setDefault(GameConfigurationUtil_getInstance(), ((GameConfigurationGauge*) item));
            } else if (java_instanceof(item, "ChoiceGroup")) {
                GameFeatureUtil_setDefault(GameFeatureUtil_getInstance(), ((ChoiceGroup*) item));
            }
        }
}

