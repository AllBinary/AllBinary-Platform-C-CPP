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
// #include "java/util/Enumeration.h"
// #include "javax/microedition/lcdui/ChoiceGroup.h"
#include "org/allbinary/TsUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/EnumerationUtil.h"
#include "org/allbinary/util/HashtableUtil.h"

typedef struct GameFeatureUtil GameFeatureUtil;
struct GameFeatureUtil {
    LogUtil* logUtil;
    TsUtil* tsUtil;
    EnumerationUtil* enumerationUtil;
    const char* ON_GAME_FEATURE_CHANGE;
    const char* GAME_FEATURE_CHANGED;
};

static GameFeatureUtil* GameFeatureUtil_instance;

GameFeatureUtil* GameFeatureUtil_new(void);
GameFeatureUtil* GameFeatureUtil_getInstance(void);
void GameFeatureUtil_setDefault(GameFeatureUtil* this, ChoiceGroup* choiceGroup);
void GameFeatureUtil_updateMultiple(GameFeatureUtil* this, ChoiceGroup* choiceGroup);
void GameFeatureUtil_updateExclusiveForChoiceGroup(GameFeatureUtil* this, ChoiceGroup* choiceGroup);
bool GameFeatureUtil_isExclusive(GameFeatureUtil* this, const char* itemLabel);
static void GameFeatureUtil_updateExclusive(GameFeatureUtil* this, const char* selectedChoiceLabel);
void GameFeatureUtil_updateExclusiveList(GameFeatureUtil* this, Feature* gameFeature, BasicArrayList* list);

// Static fields with runtime initializers: call this once at startup
void GameFeatureUtil_staticInit(void) {
    GameFeatureUtil_instance = GameFeatureUtil_new();
}

static void GameFeatureUtil_initFields(GameFeatureUtil* this) {
    this->logUtil = LogUtil_getInstance();
    this->tsUtil = TsUtil_getInstance();
    this->enumerationUtil = EnumerationUtil_getInstance();
    this->ON_GAME_FEATURE_CHANGE = "onGameFeatureChange";
    this->GAME_FEATURE_CHANGED = "Game Feature Changed: ";
}

void GameFeatureUtil_init(GameFeatureUtil* this) {
    GameFeatureUtil_initFields(this);
}

GameFeatureUtil* GameFeatureUtil_new(void) {
    GameFeatureUtil* this = calloc(1, sizeof(GameFeatureUtil));
    GameFeatureUtil_init(this);
    return this;
}


GameFeatureUtil* GameFeatureUtil_getInstance(void) {
        return GameFeatureUtil_instance;
}


// throws Exception
void GameFeatureUtil_setDefault(GameFeatureUtil* this, ChoiceGroup* choiceGroup) {
        StringMaker* stringBuffer = StringMaker_new();
        const char* METHOD_NAME = "setDefault";
        const char* SELECTED_ARRAY_RETURN = "selectedArray_return[";
        const char* SELECTED_SEP = "] = ";
        bool* selectedArray_return = ((bool*) java_array_new(sizeof(bool), ChoiceGroup_size(choiceGroup)));
        int32_t total = ChoiceGroup_getSelectedFlags(choiceGroup, selectedArray_return);
        StringMaker_append(stringBuffer, "Multiple Total Choices: ");
        StringMaker_appendint(stringBuffer, total);
        LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, METHOD_NAME);
        Features* features = Features_getInstance();
        for (int32_t index = 0; index < java_array_length(selectedArray_return); index++) {
            bool isSelected = selectedArray_return[index];
            StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
            StringMaker_append(stringBuffer, SELECTED_ARRAY_RETURN);
            StringMaker_appendint(stringBuffer, index);
            StringMaker_append(stringBuffer, SELECTED_SEP);
            StringMaker_appendboolean(stringBuffer, isSelected);
            LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, METHOD_NAME);
            const char* selectedChoiceLabel = ChoiceGroup_getString(choiceGroup, index);
            Feature* gameFeature = Feature_getInstance(selectedChoiceLabel);
            if (Features_isDefault(features, gameFeature)) {
                Features_add(features, gameFeature);
                ChoiceGroup_setSelectedIndex(choiceGroup, index, true);
            } else {
                Features_remove(features, gameFeature);
                ChoiceGroup_setSelectedIndex(choiceGroup, index, false);
            }
        }
}


// throws Exception
void GameFeatureUtil_updateMultiple(GameFeatureUtil* this, ChoiceGroup* choiceGroup) {
        StringMaker* stringBuffer = StringMaker_new();
        const char* METHOD_NAME = "updateMultiple";
        const char* SELECTED_ARRAY_RETURN = "selectedArray_return[";
        const char* SELECTED_SEP = "] = ";
        bool* selectedArray_return = ((bool*) java_array_new(sizeof(bool), ChoiceGroup_size(choiceGroup)));
        int32_t total = ChoiceGroup_getSelectedFlags(choiceGroup, selectedArray_return);
        StringMaker_append(stringBuffer, "Multiple Total Choices: ");
        StringMaker_appendint(stringBuffer, total);
        LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, METHOD_NAME);
        Features* features = Features_getInstance();
        for (int32_t index = 0; index < java_array_length(selectedArray_return); index++) {
            bool isSelected = selectedArray_return[index];
            StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
            StringMaker_append(stringBuffer, SELECTED_ARRAY_RETURN);
            StringMaker_appendint(stringBuffer, index);
            StringMaker_append(stringBuffer, SELECTED_SEP);
            StringMaker_appendboolean(stringBuffer, isSelected);
            LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, METHOD_NAME);
            const char* selectedChoiceLabel = ChoiceGroup_getString(choiceGroup, index);
            Feature* gameFeature = Feature_getInstance(selectedChoiceLabel);
            if (!isSelected && Features_isFeature(features, gameFeature)) {
                Features_remove(features, gameFeature);
            } else if (isSelected && !Features_isFeature(features, gameFeature)) {
                Features_add(features, gameFeature);
            }
        }
}


// throws Exception
void GameFeatureUtil_updateExclusiveForChoiceGroup(GameFeatureUtil* this, ChoiceGroup* choiceGroup) {
        StringMaker* stringBuffer = StringMaker_new();
        const char* METHOD_NAME = "updateExclusive";
        const char* SELECTED_ARRAY_RETURN = "selectedArray_return[";
        const char* SELECTED_SEP = "] = ";
        bool* selectedArray_return = ((bool*) java_array_new(sizeof(bool), ChoiceGroup_size(choiceGroup)));
        int32_t total = ChoiceGroup_getSelectedFlags(choiceGroup, selectedArray_return);
        StringMaker_append(stringBuffer, "Exclusive Total Choices: 1==");
        StringMaker_appendint(stringBuffer, total);
        LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, METHOD_NAME);
        for (int32_t index = 0; index < java_array_length(selectedArray_return); index++) {
            bool isSelected = selectedArray_return[index];
            StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
            StringMaker_append(stringBuffer, SELECTED_ARRAY_RETURN);
            StringMaker_appendint(stringBuffer, index);
            StringMaker_append(stringBuffer, SELECTED_SEP);
            StringMaker_appendboolean(stringBuffer, isSelected);
            LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, METHOD_NAME);
            if (isSelected) {
                const char* selectedChoiceLabel = ChoiceGroup_getString(choiceGroup, index);
                GameFeatureUtil_updateExclusive(this, selectedChoiceLabel);
            }
        }
}


bool GameFeatureUtil_isExclusive(GameFeatureUtil* this, const char* itemLabel) {
        Enumeration* enumeration = JAVA_CALL(JAVA_CALL(GameFeatureChoiceGroups_getExclusiveInstance(), get), keys);
        const char* name = nullptr;
        while (EnumerationUtil_hasMoreElements(this->enumerationUtil, enumeration)) {
            name = ((const char*) EnumerationUtil_nextElement(this->enumerationUtil, enumeration));
            if (TsUtil_compareTo(this->tsUtil, itemLabel, name) == 0) {
                return true;
            }
        }
        return false;
}


// throws Exception
static void GameFeatureUtil_updateExclusive(GameFeatureUtil* this, const char* selectedChoiceLabel) {
        LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), CommonLabels_getInstance()->ITEM_LABEL), append, selectedChoiceLabel), toString), this, "updateExclusive");
        Feature* gameFeature = Feature_getInstance(selectedChoiceLabel);
        ABHashtable* hashtable = JAVA_CALL(GameFeatureChoiceGroups_getExclusiveInstance(), get);
        Any** objectArray = HashtableUtil_getKeysAsArray(HashtableUtil_getInstance(), hashtable);
        BasicArrayList* basicArrayList = nullptr;
        Any* anyType = nullptr;
        int32_t size = java_array_length(objectArray);
        for (int32_t index = 0; index < size; index++) {
            anyType = ((Any*) objectArray[index]);
            basicArrayList = ((BasicArrayList*) ABHashtable_get(hashtable, anyType));
            GameFeatureUtil_updateExclusiveList(this, gameFeature, basicArrayList);
        }
}


// throws Exception
void GameFeatureUtil_updateExclusiveList(GameFeatureUtil* this, Feature* gameFeature, BasicArrayList* list) {
        if (BasicArrayList_contains(list, gameFeature)) {
            Features* features = Features_getInstance();
            int32_t addIndex = BasicArrayList_indexOf(list, gameFeature);
            int32_t size = BasicArrayList_size(list);
            for (int32_t index = 0; index < size; index++) {
                if (addIndex != index) {
                    Features_remove(features, ((Feature*) list->objectArray[index]));
                } else {
                    Features_add(features, ((Feature*) list->objectArray[index]));
                }
            }
        }
}

