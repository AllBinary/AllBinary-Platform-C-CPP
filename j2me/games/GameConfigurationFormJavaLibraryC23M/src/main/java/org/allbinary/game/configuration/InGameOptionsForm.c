// Generated Code Do Not Modify
#include "org/allbinary/game/configuration/InGameOptionsForm.h"
#include "javax/microedition/lcdui/Choice.h"
#include "javax/microedition/lcdui/Command.h"
#include "javax/microedition/lcdui/CommandListener.h"
#include "org/allbinary/game/commands/GameCommandsFactory.h"
#include "org/allbinary/game/configuration/feature/GameFeatureFormUtil.h"
#include "org/allbinary/game/configuration/feature/InGameFeatureChoiceGroups.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/logic/string/StringUtil.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/InGameFeatureChoiceGroups.h")
#include "org/allbinary/game/configuration/feature/InGameFeatureChoiceGroups.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/InGameFeatureChoiceGroups.h")
#include "org/allbinary/game/configuration/feature/InGameFeatureChoiceGroups.h"
#endif
#if __has_include("org/allbinary/game/commands/GameCommandsFactory.h")
#include "org/allbinary/game/commands/GameCommandsFactory.h"
#endif


Command* InGameOptionsForm_DISPLAY;
Command* InGameOptionsForm_SAVE;
Command* InGameOptionsForm_DEFAULT;



void InGameOptionsForm_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    InGameOptionsForm_DISPLAY = Command_new4("Options In Game", StringUtil_getInstance()->EMPTY_STRING, (Command_staticInit(), Command_SCREEN), 1);
    InGameOptionsForm_SAVE = Command_new4("Save", StringUtil_getInstance()->EMPTY_STRING, (Command_staticInit(), Command_SCREEN), 1);
    InGameOptionsForm_DEFAULT = Command_new4("Default", StringUtil_getInstance()->EMPTY_STRING, (Command_staticInit(), Command_SCREEN), 1);
}

void InGameOptionsForm_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("InGameOptionsForm", "CommandForm");
    java_register_method("InGameOptionsForm", "initCommands", (void*) InGameOptionsForm_initCommands);
}


void InGameOptionsForm_init(InGameOptionsForm* this, CommandListener* commandListener, const char* title, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor) {
    InGameOptionsForm_register();
        CommandForm_init(&this->base, commandListener, title, backgrounBasicColor, foregroundBasicColor);
        LogUtil_putF(this->base.logUtil, this->base.commonStrings->START, this, this->base.commonStrings->CONSTRUCTOR);
        GameFeatureFormUtil* gameFeatureFormUtil = GameFeatureFormUtil_getInstance();
        GameFeatureFormUtil_addChoiceGroup(gameFeatureFormUtil, this, InGameFeatureChoiceGroups_get(InGameFeatureChoiceGroups_getExclusiveInstance()), (Choice_staticInit(), Choice_EXCLUSIVE));
        GameFeatureFormUtil_addChoiceGroup(gameFeatureFormUtil, this, InGameFeatureChoiceGroups_get(InGameFeatureChoiceGroups_getMultipleInstance()), (Choice_staticInit(), Choice_MULTIPLE));
        InGameOptionsForm_initCommands(this, commandListener);
}

InGameOptionsForm* InGameOptionsForm_new(CommandListener* commandListener, const char* title, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor) {
    InGameOptionsForm* this = java_object_alloc(sizeof(InGameOptionsForm), "InGameOptionsForm");
    InGameOptionsForm_init(this, commandListener, title, backgrounBasicColor, foregroundBasicColor);
    return this;
}


void InGameOptionsForm_initCommands(InGameOptionsForm* this, CommandListener* cmdListener) {
        CommandForm_removeAllCommands(this);
        CommandForm_addCommand(this, GameCommandsFactory_getInstance()->CLOSE_AND_SHOW_GAME_CANVAS);
        CommandForm_addCommand(this, (InGameOptionsForm_staticInit(), InGameOptionsForm_DEFAULT));
        Displayable_setCommandListener(this, cmdListener);
}

