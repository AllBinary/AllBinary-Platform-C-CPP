// Generated Code Do Not Modify
#include "org/allbinary/game/configuration/GameDifficultyOptions.h"
#include "javax/microedition/lcdui/Choice.h"
#include "javax/microedition/lcdui/ChoiceGroup.h"
#include "javax/microedition/lcdui/CommandListener.h"
#include "javax/microedition/lcdui/NullImage.h"
#include "org/allbinary/MIDPUtil.h"
#include "org/allbinary/game/commands/GameCommandsFactory.h"
#include "org/allbinary/game/configuration/persistance/GameDifficultyFactory.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/util/BasicArrayList.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif









static void GameDifficultyOptions_add(GameDifficultyOptions* this, BasicArrayList* list, const char* name, int32_t option);

static ChoiceGroup* GameDifficultyOptions_getChoiceGroup(GameDifficultyOptions* this, BasicArrayList* list, const char* name, int32_t option);




void GameDifficultyOptions_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void GameDifficultyOptions_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameDifficultyOptions", "CommandForm");
    java_register_method("GameDifficultyOptions", "open", (void*) GameDifficultyOptions_open);
    java_register_method("GameDifficultyOptions", "close", (void*) GameDifficultyOptions_close);
    java_register_method("GameDifficultyOptions", "save", (void*) GameDifficultyOptions_save);
    java_register_method("GameDifficultyOptions", "initCommands", (void*) GameDifficultyOptions_initCommands);
    java_register_method("GameDifficultyOptions", "update", (void*) GameDifficultyOptions_update);
    java_register_method("GameDifficultyOptions", "add", (void*) GameDifficultyOptions_add);
    java_register_method("GameDifficultyOptions", "getChoiceGroup", (void*) GameDifficultyOptions_getChoiceGroup);
    java_register_method("GameDifficultyOptions", "setSelectedId", (void*) GameDifficultyOptions_setSelectedId);
    java_register_method("GameDifficultyOptions", "getSelectedId", (void*) GameDifficultyOptions_getSelectedId);
    java_register_method("GameDifficultyOptions", "getSelectedText", (void*) GameDifficultyOptions_getSelectedText);
}

static void GameDifficultyOptions_initFields(GameDifficultyOptions* this) {
    this->meUtil = MIDPUtil_getInstance();
    
}


void GameDifficultyOptions_init(GameDifficultyOptions* this, CommandListener* commandListener, const char* title, BasicArrayList* list, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor) {
    GameDifficultyOptions_register();
        CommandForm_init(&this->base, commandListener, title, backgrounBasicColor, foregroundBasicColor);
        GameDifficultyOptions_initFields(this);
        LogUtil_putF(this->base.logUtil, this->base.commonStrings->START, this, this->base.commonStrings->CONSTRUCTOR);
        this->list = list;
        GameDifficultyOptions_update(this);
        GameDifficultyOptions_initCommands(this, commandListener);
        GameDifficultyFactory* gameDifficultyFactory = GameDifficultyFactory_getInstance();
        GameDifficultyOptions_setSelectedId(this, GameDifficultyFactory_getLevel(gameDifficultyFactory));
}

GameDifficultyOptions* GameDifficultyOptions_new(CommandListener* commandListener, const char* title, BasicArrayList* list, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor) {
    GameDifficultyOptions* this = java_object_alloc(sizeof(GameDifficultyOptions), "GameDifficultyOptions");
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
        CommandForm_removeAllCommands(this);
        CommandForm_addCommand(this, gameCommandsFactory->CLOSE_AND_SHOW_GAME_CANVAS);
        Displayable_setCommandListener(this, cmdListener);
}


// throws Exception
void GameDifficultyOptions_update(GameDifficultyOptions* this) {
        Form_deleteAll(this);
        GameDifficultyOptions_add(this, this->list, "Difficulty", (Choice_staticInit(), Choice_EXCLUSIVE));
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
        ChoiceGroup* choiceGroup = ChoiceGroup_new4(name, option, StringUtil_getArrayInstance(StringUtil_getInstance()), (NullImage_staticInit(), NullImage_NULL_IMAGE_ARRAY));
        int32_t size = BasicArrayList_size(list);
        void* anyType = nullptr;
        for (int32_t index = 0; index < size; index++) {
            anyType = list->objectArray[index];
            LogUtil_putF(this->base.logUtil, java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), NAME), java_object_toString(anyType))), this, METHOD_NAME);
            ChoiceGroup_append(choiceGroup, java_object_toString(anyType), (NullImage_staticInit(), NullImage_NULL_IMAGE));
        }
        return choiceGroup;
}


void GameDifficultyOptions_setSelectedId(GameDifficultyOptions* this, int32_t id) {
        ChoiceGroup* choiceGroup = ((ChoiceGroup*) Form_get(this, 0));
        ChoiceGroup_setSelectedIndex(choiceGroup, id, true);
}


int32_t GameDifficultyOptions_getSelectedId(GameDifficultyOptions* this) {
        ChoiceGroup* choiceGroup = ((ChoiceGroup*) Form_get(this, 0));
        return ChoiceGroup_getSelectedIndex(choiceGroup);
}


int32_t GameDifficultyOptions_getSelectedText(GameDifficultyOptions* this) {
        ChoiceGroup* choiceGroup = ((ChoiceGroup*) Form_get(this, 0));
        int32_t value = ((int32_t) (java_string_of(ChoiceGroup_getString(choiceGroup, ChoiceGroup_getSelectedIndex(choiceGroup)))));
        return value;
}

