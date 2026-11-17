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
// #include "javax/microedition/lcdui/Choice.h"
// #include "javax/microedition/lcdui/Command.h"
// #include "javax/microedition/lcdui/CommandListener.h"
// #include "javax/microedition/lcdui/Item.h"
// #include "javax/microedition/lcdui/TextField.h"
#include "org/allbinary/MIDPUtil.h"
#include "org/allbinary/game/commands/GameCommandsFactory.h"
#include "org/allbinary/game/configuration/feature/GameFeatureChoiceGroups.h"
#include "org/allbinary/game/configuration/feature/GameFeatureFormUtil.h"
#include "org/allbinary/game/configuration/feature/GameFeatureItemCommandListener.h"
#include "org/allbinary/game/configuration/feature/GameFeatureItemStateListener.h"
#include "org/allbinary/game/configuration/feature/SensorFeatureFactory.h"
#include "org/allbinary/game/configuration/persistance/GameConfigurationPersistanceSingleton.h"
#include "org/allbinary/game/configuration/persistance/KeyValuePersistance.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/displayable/command/MyCommandsFactory.h"
#include "org/allbinary/graphics/displayable/screen/CommandForm.h"
#include "org/allbinary/input/gyro/OrientationData.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/HashtableUtil.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/util/ABHashtable.h"

typedef struct GameOptionsForm GameOptionsForm;
struct GameOptionsForm {
    CommandForm base;
    MIDPUtil* meUtil;
};


GameOptionsForm* GameOptionsForm_new(CommandListener* commandListener, const char* title, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor);

void GameOptionsForm_init(GameOptionsForm* this, CommandListener* commandListener, const char* title, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor);
void GameOptionsForm_closeClientInformation(GameOptionsForm* this, AbeClientInformationInterface* abeClientInformation);
static void GameOptionsForm_addTextFieldsIfSimulated(GameOptionsForm* this);
static void GameOptionsForm_addTextFields(GameOptionsForm* this);
static void GameOptionsForm_addConfiguration(GameOptionsForm* this);
void GameOptionsForm_initCommands(GameOptionsForm* this, CommandListener* cmdListener);
void GameOptionsForm_save(GameOptionsForm* this, AbeClientInformationInterface* abeClientInformation);

static void GameOptionsForm_initFields(GameOptionsForm* this) {
    this->meUtil = MIDPUtil_getInstance();
}


void GameOptionsForm_init(GameOptionsForm* this, CommandListener* commandListener, const char* title, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor) {
        CommandForm_init(&this->base, commandListener, title, backgrounBasicColor, foregroundBasicColor);
        GameOptionsForm_initFields(this);
        JAVA_CALL(this->logUtil, putF, this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
        GameOptionsForm_addConfiguration(this);
        GameFeatureFormUtil* gameFeatureFormUtil = GameFeatureFormUtil_getInstance();
        GameFeatureFormUtil_addChoiceGroup(gameFeatureFormUtil, this, JAVA_CALL(GameFeatureChoiceGroups_getExclusiveInstance(), get), Choice_EXCLUSIVE);
        GameFeatureFormUtil_addChoiceGroup(gameFeatureFormUtil, this, JAVA_CALL(GameFeatureChoiceGroups_getMultipleInstance(), get), Choice_MULTIPLE);
        GameOptionsForm_initCommands(this, commandListener);
        GameOptionsForm_setItemStateListener(this, GameFeatureItemStateListener_new(this));
        GameOptionsForm_addTextFieldsIfSimulated(this);
}

GameOptionsForm* GameOptionsForm_new(CommandListener* commandListener, const char* title, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor) {
    GameOptionsForm* this = calloc(1, sizeof(GameOptionsForm));
    GameOptionsForm_init(this, commandListener, title, backgrounBasicColor, foregroundBasicColor);
    return this;
}


// throws Exception
void GameOptionsForm_closeClientInformation(GameOptionsForm* this, AbeClientInformationInterface* abeClientInformation) {
        CommandForm_close((&this->base));
        GameOptionsForm_save(this, abeClientInformation);
}


static void GameOptionsForm_addTextFieldsIfSimulated(GameOptionsForm* this) {
        const char* key = OrientationData_getInstance()->ORIENTATION_SENSOR_INPUT;
        ABHashtable* hashtable = JAVA_CALL(GameFeatureChoiceGroups_getExclusiveInstance(), get);
        if (hashtable != nullptr) {
            Any* listCanBeNull = ABHashtable_get(hashtable, key);
            if (listCanBeNull != nullptr) {
                BasicArrayList* list = ((BasicArrayList*) listCanBeNull);
                if (BasicArrayList_contains(list, SensorFeatureFactory_getInstance()->SIMULATED_ORIENTATION_SENSORS)) {
                    GameOptionsForm_addTextFields(this);
                }
            }
        }
}


static void GameOptionsForm_addTextFields(GameOptionsForm* this) {
        ABHashtable* hashtable = GameConfigurationTextInput_getHashtable();
        int32_t size = ABHashtable_size(hashtable);
        Any** objectArray = HashtableUtil_getKeysAsArray(HashtableUtil_getInstance(), hashtable);
        GameConfigurationTextInput* gameConfigurationTextInput = nullptr;
        TextField* textField = nullptr;
        for (int32_t index = 0; index < size; index++) {
            gameConfigurationTextInput = ((GameConfigurationTextInput*) ABHashtable_get(hashtable, ((Any*) objectArray[index])));
            textField = TextField_new(GameConfigurationTextInput_getLabel(gameConfigurationTextInput), GameConfigurationTextInput_getText(gameConfigurationTextInput), 30, TextField_ANY);
            MIDPUtil_appendItem(this->meUtil, this, textField);
        }
}


static void GameOptionsForm_addConfiguration(GameOptionsForm* this) {
        const char* METHOD_NAME = "addConfiguration";
        const char* NAME = "Name: ";
        BasicArrayList* list = GameConfigurationSingleton_getOptionsBasicArrayList(GameConfigurationSingleton_getInstance());
        Command* GAUGE_CHANGE = MyCommandsFactory_getInstance()->GAUGE_CHANGE;
        StringMaker* stringMaker = StringMaker_new();
        int32_t size = BasicArrayList_size(list);
        GameConfiguration* gameConfiguration = nullptr;
        GameConfigurationGauge* gauge = nullptr;
        for (int32_t index = 0; index < size; index++) {
            gameConfiguration = ((GameConfiguration*) list->objectArray[index]);
            StringMaker_delete(stringMaker, 0, StringMaker_length(stringMaker));
            JAVA_CALL(this->logUtil, putF, JAVA_CALL(JAVA_CALL(StringMaker_append(stringMaker, NAME), append, GameConfiguration_toString(gameConfiguration)), toString), this, METHOD_NAME);
            gauge = GameConfigurationGauge_new(gameConfiguration);
            GameConfigurationGauge_setDefaultCommand(gauge, GAUGE_CHANGE);
            GameConfigurationGauge_setItemCommandListener(gauge, GameFeatureItemCommandListener_new(this));
            MIDPUtil_appendItem(this->meUtil, this, gauge);
        }
}


void GameOptionsForm_initCommands(GameOptionsForm* this, CommandListener* cmdListener) {
        GameCommandsFactory* gameCommandsFactory = GameCommandsFactory_getInstance();
        GameOptionsForm_removeAllCommands(this);
        GameOptionsForm_addCommand(this, gameCommandsFactory->CLOSE_OPTIONS);
        GameOptionsForm_addCommand(this, gameCommandsFactory->DEFAULT_OPTIONS);
        GameOptionsForm_setCommandListener(this, cmdListener);
}


// throws Exception
void GameOptionsForm_save(GameOptionsForm* this, AbeClientInformationInterface* abeClientInformation) {
        int32_t size = GameOptionsForm_size(this);
        Item* item = nullptr;
        for (int32_t index = 0; index < size; index++) {
            item = GameOptionsForm_get(this, index);
            if (java_instanceof(item, "GameConfigurationGauge")) {
                GameConfigurationUtil_update(GameConfigurationUtil_getInstance(), ((GameConfigurationGauge*) item));
            } else if (java_instanceof(item, "TextField")) {
                GameConfigurationTextInput_update(((TextField*) item));
            }
        }
        GameConfigurationUtil_updateCompetitionValue(GameConfigurationUtil_getInstance());
        ABHashtable* hashtable = StdUtil_createHashtable(StdUtil_getInstance());
        GameConfiguration* SCALE = GameConfigurationCentral_getInstance()->SCALE;
        ABHashtable_put(hashtable, GameConfiguration_getName(SCALE), java_string_of(JAVA_CALL(GameConfiguration_getValue(SCALE), intValue)));
        KeyValuePersistance* keyValuePersistance = GameConfigurationPersistanceSingleton_getInstance();
        KeyValuePersistance_clear(keyValuePersistance);
        KeyValuePersistance_loadAll(keyValuePersistance, abeClientInformation);
        BasicArrayList* list = KeyValuePersistance_getIds(keyValuePersistance);
        KeyValuePersistance_save(keyValuePersistance, abeClientInformation, hashtable);
        int32_t size2 = BasicArrayList_size(list);
        int32_t integer = nullptr;
        for (int32_t index = 0; index < size2; index++) {
            integer = ((int32_t) list->objectArray[index]);
            KeyValuePersistance_delete(keyValuePersistance, abeClientInformation, Integer_intValue(integer));
        }
}

