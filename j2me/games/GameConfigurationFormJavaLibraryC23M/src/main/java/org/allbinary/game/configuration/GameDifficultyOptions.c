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
// #include "javax/microedition/lcdui/ChoiceGroup.h"
// #include "javax/microedition/lcdui/CommandListener.h"
// #include "javax/microedition/lcdui/NullImage.h"
#include "org/allbinary/MIDPUtil.h"
#include "org/allbinary/game/commands/GameCommandsFactory.h"
#include "org/allbinary/game/configuration/persistance/GameDifficultyFactory.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/displayable/screen/CommandForm.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/util/BasicArrayList.h"

typedef struct GameDifficultyOptions GameDifficultyOptions;
struct GameDifficultyOptions {
    CommandForm base;
    MIDPUtil* meUtil;
    BasicArrayList* list;
};


GameDifficultyOptions* GameDifficultyOptions_new(CommandListener* commandListener, const char* title, BasicArrayList* list, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor);

void GameDifficultyOptions_init(GameDifficultyOptions* this, CommandListener* commandListener, const char* title, BasicArrayList* list, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor);
void GameDifficultyOptions_open(GameDifficultyOptions* this);
void GameDifficultyOptions_close(GameDifficultyOptions* this);
void GameDifficultyOptions_save(GameDifficultyOptions* this);
void GameDifficultyOptions_initCommands(GameDifficultyOptions* this, CommandListener* cmdListener);
void GameDifficultyOptions_update(GameDifficultyOptions* this);
static void GameDifficultyOptions_add(GameDifficultyOptions* this, BasicArrayList* list, const char* name, int32_t option);
static ChoiceGroup* GameDifficultyOptions_getChoiceGroup(GameDifficultyOptions* this, BasicArrayList* list, const char* name, int32_t option);
void GameDifficultyOptions_setSelectedId(GameDifficultyOptions* this, int32_t id);
int32_t GameDifficultyOptions_getSelectedId(GameDifficultyOptions* this);
int32_t GameDifficultyOptions_getSelectedText(GameDifficultyOptions* this);

static void GameDifficultyOptions_initFields(GameDifficultyOptions* this) {
    this->meUtil = MIDPUtil_getInstance();
    
}


void GameDifficultyOptions_init(GameDifficultyOptions* this, CommandListener* commandListener, const char* title, BasicArrayList* list, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor) {
        CommandForm_init(&this->base, commandListener, title, backgrounBasicColor, foregroundBasicColor);
        GameDifficultyOptions_initFields(this);
        JAVA_CALL(this->logUtil, putF, this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
        this->list = list;
        GameDifficultyOptions_update(this);
        GameDifficultyOptions_initCommands(this, commandListener);
        GameDifficultyFactory* gameDifficultyFactory = GameDifficultyFactory_getInstance();
        GameDifficultyOptions_setSelectedId(this, GameDifficultyFactory_getLevel(gameDifficultyFactory));
}

GameDifficultyOptions* GameDifficultyOptions_new(CommandListener* commandListener, const char* title, BasicArrayList* list, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor) {
    GameDifficultyOptions* this = calloc(1, sizeof(GameDifficultyOptions));
    GameDifficultyOptions_init(this, commandListener, title, list, backgrounBasicColor, foregroundBasicColor);
    return this;
}


void GameDifficultyOptions_open(GameDifficultyOptions* this) {
        CommandForm_open((&this->base));
}


// throws Exception
void GameDifficultyOptions_close(GameDifficultyOptions* this) {
        CommandForm_close((&this->base));
        GameDifficultyOptions_save(this);
}


// throws Exception
void GameDifficultyOptions_save(GameDifficultyOptions* this) {
        GameDifficultyFactory* gameDifficultyFactory = GameDifficultyFactory_getInstance();
        GameDifficultyFactory_setLevel(gameDifficultyFactory, GameDifficultyOptions_getSelectedId(this));
}


void GameDifficultyOptions_initCommands(GameDifficultyOptions* this, CommandListener* cmdListener) {
        GameCommandsFactory* gameCommandsFactory = GameCommandsFactory_getInstance();
        GameDifficultyOptions_removeAllCommands(this);
        GameDifficultyOptions_addCommand(this, gameCommandsFactory->CLOSE_AND_SHOW_GAME_CANVAS);
        GameDifficultyOptions_setCommandListener(this, cmdListener);
}


// throws Exception
void GameDifficultyOptions_update(GameDifficultyOptions* this) {
        GameDifficultyOptions_deleteAll(this);
        GameDifficultyOptions_add(this, this->list, "Difficulty", Choice_EXCLUSIVE);
        CommandForm_update((&this->base));
}


static void GameDifficultyOptions_add(GameDifficultyOptions* this, BasicArrayList* list, const char* name, int32_t option) {
        ChoiceGroup* choiceGroup = GameDifficultyOptions_getChoiceGroup(this, list, name, option);
        if (BasicArrayList_size(list) > 0) {
            ChoiceGroup_setSelectedIndex(choiceGroup, 0, true);
        }
        MIDPUtil_appendItem(this->meUtil, this, choiceGroup);
}


static ChoiceGroup* GameDifficultyOptions_getChoiceGroup(GameDifficultyOptions* this, BasicArrayList* list, const char* name, int32_t option) {
        const char* METHOD_NAME = "addChoiceGroup";
        const char* NAME = "Adding Choice: ";
        ChoiceGroup* choiceGroup = ChoiceGroup_new(name, option, StringUtil_getArrayInstance(StringUtil_getInstance()), NullImage_NULL_IMAGE_ARRAY);
        int32_t size = BasicArrayList_size(list);
        Any* anyType = nullptr;
        for (int32_t index = 0; index < size; index++) {
            anyType = list->objectArray[index];
            JAVA_CALL(this->logUtil, putF, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), NAME), append, Any_toString(anyType)), toString), this, METHOD_NAME);
            ChoiceGroup_append(choiceGroup, Any_toString(anyType), NullImage_NULL_IMAGE);
        }
        return choiceGroup;
}


void GameDifficultyOptions_setSelectedId(GameDifficultyOptions* this, int32_t id) {
        ChoiceGroup* choiceGroup = ((ChoiceGroup*) GameDifficultyOptions_get(this, 0));
        ChoiceGroup_setSelectedIndex(choiceGroup, id, true);
}


int32_t GameDifficultyOptions_getSelectedId(GameDifficultyOptions* this) {
        ChoiceGroup* choiceGroup = ((ChoiceGroup*) GameDifficultyOptions_get(this, 0));
        return ChoiceGroup_getSelectedIndex(choiceGroup);
}


int32_t GameDifficultyOptions_getSelectedText(GameDifficultyOptions* this) {
        ChoiceGroup* choiceGroup = ((ChoiceGroup*) GameDifficultyOptions_get(this, 0));
        int32_t value = JAVA_CALL(java_string_of(ChoiceGroup_getString(choiceGroup, ChoiceGroup_getSelectedIndex(choiceGroup))), intValue);
        return value;
}

