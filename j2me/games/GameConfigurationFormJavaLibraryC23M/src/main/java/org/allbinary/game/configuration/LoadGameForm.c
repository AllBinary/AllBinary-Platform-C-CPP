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
// #include "javax/microedition/lcdui/Item.h"
// #include "javax/microedition/lcdui/NullImage.h"
// #include "javax/microedition/lcdui/StringItem.h"
#include "org/allbinary/MIDPUtil.h"
#include "org/allbinary/game/commands/GameCommandsFactory.h"
#include "org/allbinary/game/configuration/persistance/GamePersistanceSingleton.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/displayable/screen/CommandForm.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/util/BasicArrayList.h"

typedef struct LoadGameForm LoadGameForm;
struct LoadGameForm {
    CommandForm base;
    MIDPUtil* meUtil;
    bool areChoices;
};


LoadGameForm* LoadGameForm_new(CommandListener* commandListener, const char* title, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor);

void LoadGameForm_init(LoadGameForm* this, CommandListener* commandListener, const char* title, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor);
void LoadGameForm_initCommands(LoadGameForm* this, CommandListener* cmdListener);
void LoadGameForm_update(LoadGameForm* this);
static void LoadGameForm_add(LoadGameForm* this, BasicArrayList* list, const char* name, int32_t option);
static ChoiceGroup* LoadGameForm_getChoiceGroup(LoadGameForm* this, BasicArrayList* list, const char* name, int32_t option);
int32_t LoadGameForm_getSelectedId(LoadGameForm* this);
int32_t LoadGameForm_getSelectedText(LoadGameForm* this);

static void LoadGameForm_initFields(LoadGameForm* this) {
    this->meUtil = MIDPUtil_getInstance();
    this->areChoices = false;
}


void LoadGameForm_init(LoadGameForm* this, CommandListener* commandListener, const char* title, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor) {
        CommandForm_init(&this->base, commandListener, title, backgrounBasicColor, foregroundBasicColor);
        LoadGameForm_initFields(this);
        JAVA_CALL(this->logUtil, putF, this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
        LoadGameForm_update(this);
        LoadGameForm_initCommands(this, commandListener);
}

LoadGameForm* LoadGameForm_new(CommandListener* commandListener, const char* title, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor) {
    LoadGameForm* this = calloc(1, sizeof(LoadGameForm));
    LoadGameForm_init(this, commandListener, title, backgrounBasicColor, foregroundBasicColor);
    return this;
}


void LoadGameForm_initCommands(LoadGameForm* this, CommandListener* cmdListener) {
        GameCommandsFactory* gameCommandsFactory = GameCommandsFactory_getInstance();
        LoadGameForm_removeAllCommands(this);
        LoadGameForm_addCommand(this, gameCommandsFactory->LOAD_FILE);
        LoadGameForm_addCommand(this, gameCommandsFactory->DELETE_FILE);
        LoadGameForm_addCommand(this, gameCommandsFactory->CLOSE_AND_SHOW_GAME_CANVAS);
        LoadGameForm_setCommandListener(this, cmdListener);
}


// throws Exception
void LoadGameForm_update(LoadGameForm* this) {
        BasicArrayList* list = GamePersistanceSingleton_getIds(GamePersistanceSingleton_getInstance());
        LoadGameForm_deleteAll(this);
        if (BasicArrayList_size(list) > 0) {
            LoadGameForm_add(this, list, "Select A Saved Game", Choice_EXCLUSIVE);
            this->areChoices = true;
        } else {
            MIDPUtil_appendItem(this->meUtil, this, StringItem_new("No Saved Games", StringUtil_getInstance()->EMPTY_STRING, Item_PLAIN));
            this->areChoices = false;
        }
        CommandForm_update((&this->base));
}


static void LoadGameForm_add(LoadGameForm* this, BasicArrayList* list, const char* name, int32_t option) {
        ChoiceGroup* choiceGroup = LoadGameForm_getChoiceGroup(this, list, name, option);
        if (BasicArrayList_size(list) > 0) {
            ChoiceGroup_setSelectedIndex(choiceGroup, 0, true);
        }
        MIDPUtil_appendItem(this->meUtil, this, choiceGroup);
}


static ChoiceGroup* LoadGameForm_getChoiceGroup(LoadGameForm* this, BasicArrayList* list, const char* name, int32_t option) {
        const char* METHOD_NAME = "getChoiceGroup";
        const char* ADDING_CHOICE = "Adding Choice: ";
        ChoiceGroup* choiceGroup = ChoiceGroup_new(name, option, StringUtil_getArrayInstance(StringUtil_getInstance()), NullImage_NULL_IMAGE_ARRAY);
        int32_t size = BasicArrayList_size(list);
        for (int32_t index = 0; index < size; index++) {
            Any* anyType = list->objectArray[index];
            JAVA_CALL(this->logUtil, putF, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), ADDING_CHOICE), append, Any_toString(anyType)), toString), this, METHOD_NAME);
            ChoiceGroup_append(choiceGroup, Any_toString(anyType), NullImage_NULL_IMAGE);
        }
        return choiceGroup;
}


int32_t LoadGameForm_getSelectedId(LoadGameForm* this) {
        if (this->areChoices) {
            ChoiceGroup* choiceGroup = ((ChoiceGroup*) LoadGameForm_get(this, 0));
            return ChoiceGroup_getSelectedIndex(choiceGroup);
        } else {
            return -1;
        }
}


int32_t LoadGameForm_getSelectedText(LoadGameForm* this) {
        if (this->areChoices) {
            ChoiceGroup* choiceGroup = ((ChoiceGroup*) LoadGameForm_get(this, 0));
            int32_t value = JAVA_CALL(java_string_of(ChoiceGroup_getString(choiceGroup, ChoiceGroup_getSelectedIndex(choiceGroup))), intValue);
            return value;
        } else {
            return -1;
        }
}

