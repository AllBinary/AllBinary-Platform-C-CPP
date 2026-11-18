// Generated Code Do Not Modify
#include "org/allbinary/game/configuration/SaveGameForm.h"
#include "javax/microedition/lcdui/CommandListener.h"
#include "javax/microedition/lcdui/TextField.h"
#include "org/allbinary/MIDPUtil.h"
#include "org/allbinary/game/commands/GameCommandsFactory.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/logic/ABSystemWrapper.h"
#if __has_include("org/allbinary/logic/ABSystemWrapper.h")
#include "org/allbinary/logic/ABSystemWrapper.h"
#endif


static CommandForm* SaveGameForm_FORM;





void SaveGameForm_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    SaveGameForm_FORM = CommandForm_getNullCommandForm();
}

void SaveGameForm_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("SaveGameForm", "CommandForm");
    java_register_method("SaveGameForm", "initCommands", (void*) SaveGameForm_initCommands);
}

static void SaveGameForm_initFields(SaveGameForm* this) {
    this->meUtil = MIDPUtil_getInstance();
}


// throws Exception
CommandForm* SaveGameForm_createForm(CommandListener* commandListener, const char* title, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor) {
        SaveGameForm_FORM = SaveGameForm_new(commandListener, title, backgrounBasicColor, foregroundBasicColor);
        return (SaveGameForm_staticInit(), SaveGameForm_FORM);
}


CommandForm* SaveGameForm_getInstance(void) {
        return (SaveGameForm_staticInit(), SaveGameForm_FORM);
}


void SaveGameForm_init(SaveGameForm* this, CommandListener* commandListener, const char* title, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor) {
    SaveGameForm_register();
        CommandForm_init(&this->base, commandListener, title, backgrounBasicColor, foregroundBasicColor);
        SaveGameForm_initFields(this);
        LogUtil_putF(this->base.logUtil, this->base.commonStrings->START, this, this->base.commonStrings->CONSTRUCTOR);
        const char* timeString = java_string_of(ABSystemWrapper_currentTimeMillis(ABSystemWrapper_getInstance()));
        MIDPUtil_appendItem(this->meUtil, this, TextField_new("Name: ", timeString, 30, (TextField_staticInit(), TextField_ANY)));
        SaveGameForm_initCommands(this, commandListener);
}

SaveGameForm* SaveGameForm_new(CommandListener* commandListener, const char* title, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor) {
    SaveGameForm* this = java_object_alloc(sizeof(SaveGameForm), "SaveGameForm");
    SaveGameForm_init(this, commandListener, title, backgrounBasicColor, foregroundBasicColor);
    return this;
}


void SaveGameForm_initCommands(SaveGameForm* this, CommandListener* cmdListener) {
        GameCommandsFactory* gameCommandsFactory = GameCommandsFactory_getInstance();
        CommandForm_removeAllCommands(this);
        CommandForm_addCommand(this, gameCommandsFactory->SAVE);
        CommandForm_addCommand(this, gameCommandsFactory->CLOSE_AND_SHOW_GAME_CANVAS);
        Displayable_setCommandListener(this, cmdListener);
}

