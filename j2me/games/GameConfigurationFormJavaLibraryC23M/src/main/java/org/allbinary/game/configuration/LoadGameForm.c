// Generated Code Do Not Modify
#include "org/allbinary/game/configuration/LoadGameForm.h"
#include "javax/microedition/lcdui/Choice.h"
#include "javax/microedition/lcdui/ChoiceGroup.h"
#include "javax/microedition/lcdui/CommandListener.h"
#include "javax/microedition/lcdui/Item.h"
#include "javax/microedition/lcdui/NullImage.h"
#include "javax/microedition/lcdui/StringItem.h"
#include "org/allbinary/MIDPUtil.h"
#include "org/allbinary/game/commands/GameCommandsFactory.h"
#include "org/allbinary/game/configuration/persistance/GamePersistanceSingleton.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/util/BasicArrayList.h"
#if __has_include("org/allbinary/game/configuration/persistance/GamePersistanceSingleton.h")
#include "org/allbinary/game/configuration/persistance/GamePersistanceSingleton.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif






static void LoadGameForm_add(LoadGameForm* this, BasicArrayList* list, const char* name, int32_t option);

static ChoiceGroup* LoadGameForm_getChoiceGroup(LoadGameForm* this, BasicArrayList* list, const char* name, int32_t option);



void LoadGameForm_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void LoadGameForm_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("LoadGameForm", "CommandForm");
    java_register_method("LoadGameForm", "initCommands", (void*) LoadGameForm_initCommands);
    java_register_method("LoadGameForm", "update", (void*) LoadGameForm_update);
    java_register_method("LoadGameForm", "add", (void*) LoadGameForm_add);
    java_register_method("LoadGameForm", "getChoiceGroup", (void*) LoadGameForm_getChoiceGroup);
    java_register_method("LoadGameForm", "getSelectedId", (void*) LoadGameForm_getSelectedId);
    java_register_method("LoadGameForm", "getSelectedText", (void*) LoadGameForm_getSelectedText);
}

static void LoadGameForm_initFields(LoadGameForm* this) {
    this->meUtil = MIDPUtil_getInstance();
    this->areChoices = false;
}


void LoadGameForm_init(LoadGameForm* this, CommandListener* commandListener, const char* title, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor) {
    LoadGameForm_register();
        CommandForm_init(&this->base, commandListener, title, backgrounBasicColor, foregroundBasicColor);
        LoadGameForm_initFields(this);
        LogUtil_putF(this->base.logUtil, this->base.commonStrings->START, this, this->base.commonStrings->CONSTRUCTOR);
        LoadGameForm_update(this);
        LoadGameForm_initCommands(this, commandListener);
}

LoadGameForm* LoadGameForm_new(CommandListener* commandListener, const char* title, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor) {
    LoadGameForm* this = java_object_alloc(sizeof(LoadGameForm), "LoadGameForm");
    LoadGameForm_init(this, commandListener, title, backgrounBasicColor, foregroundBasicColor);
    return this;
}


void LoadGameForm_initCommands(LoadGameForm* this, CommandListener* cmdListener) {
        GameCommandsFactory* gameCommandsFactory = GameCommandsFactory_getInstance();
        CommandForm_removeAllCommands(this);
        CommandForm_addCommand(this, gameCommandsFactory->LOAD_FILE);
        CommandForm_addCommand(this, gameCommandsFactory->DELETE_FILE);
        CommandForm_addCommand(this, gameCommandsFactory->CLOSE_AND_SHOW_GAME_CANVAS);
        Displayable_setCommandListener(this, cmdListener);
}


// throws Exception
void LoadGameForm_update(LoadGameForm* this) {
        BasicArrayList* list = BasicPersitance_getIds(GamePersistanceSingleton_getInstance());
        Form_deleteAll(this);
        if (BasicArrayList_size(list) > 0) {
            LoadGameForm_add(this, list, "Select A Saved Game", (Choice_staticInit(), Choice_EXCLUSIVE));
            this->areChoices = true;
        } else {
            MIDPUtil_appendItem(this->meUtil, this, StringItem_new3("No Saved Games", StringUtil_getInstance()->EMPTY_STRING, (Item_staticInit(), Item_PLAIN)));
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
        ChoiceGroup* choiceGroup = ChoiceGroup_new4(name, option, StringUtil_getArrayInstance(StringUtil_getInstance()), (NullImage_staticInit(), NullImage_NULL_IMAGE_ARRAY));
        int32_t size = BasicArrayList_size(list);
        for (int32_t index = 0; index < size; index++) {
            void* anyType = list->objectArray[index];
            LogUtil_putF(this->base.logUtil, java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), ADDING_CHOICE), java_object_toString(anyType))), this, METHOD_NAME);
            ChoiceGroup_append(choiceGroup, java_object_toString(anyType), (NullImage_staticInit(), NullImage_NULL_IMAGE));
        }
        return choiceGroup;
}


int32_t LoadGameForm_getSelectedId(LoadGameForm* this) {
        if (this->areChoices) {
            ChoiceGroup* choiceGroup = ((ChoiceGroup*) Form_get(this, 0));
            return ChoiceGroup_getSelectedIndex(choiceGroup);
        } else {
            return -1;
        }
}


int32_t LoadGameForm_getSelectedText(LoadGameForm* this) {
        if (this->areChoices) {
            ChoiceGroup* choiceGroup = ((ChoiceGroup*) Form_get(this, 0));
            int32_t value = ((int32_t) (java_string_of(ChoiceGroup_getString(choiceGroup, ChoiceGroup_getSelectedIndex(choiceGroup)))));
            return value;
        } else {
            return -1;
        }
}

