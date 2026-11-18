// Generated Code Do Not Modify
#include "org/allbinary/game/commands/GameCommandsFactory.h"
#include "javax/microedition/lcdui/Command.h"
#include "org/allbinary/graphics/displayable/CanvasStrings.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/string/CommonStrings.h")
#include "org/allbinary/string/CommonStrings.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/CanvasStrings.h")
#include "org/allbinary/graphics/displayable/CanvasStrings.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/CanvasStrings.h")
#include "org/allbinary/graphics/displayable/CanvasStrings.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/string/CommonStrings.h")
#include "org/allbinary/string/CommonStrings.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif


static void* GameCommandsFactory_instance;



void GameCommandsFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    GameCommandsFactory_instance = NullUtil_getInstance()->NULL_OBJECT;
}

void GameCommandsFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameCommandsFactory", nullptr);
}

static void GameCommandsFactory_initFields(GameCommandsFactory* this) {
    this->TOGGLE_FULLSCREEN = Command_new4("Toggle FullScreen", StringUtil_getInstance()->EMPTY_STRING, (Command_staticInit(), Command_SCREEN), 1);
    this->TOGGLE_KEYBOARD = Command_new4("Keyboard", StringUtil_getInstance()->EMPTY_STRING, (Command_staticInit(), Command_SCREEN), 1);
    this->SET_MENU_DISPLAYABLE = Command_new4("Set Menu Displayable", StringUtil_getInstance()->EMPTY_STRING, (Command_staticInit(), Command_SCREEN), 1);
    this->APPLICATION_UPDATE = Command_new4(CommonStrings_getInstance()->UPDATE, StringUtil_getInstance()->EMPTY_STRING, (Command_staticInit(), Command_SCREEN), 1);
    this->DISPLAY_ABOUT = Command_new4(CanvasStrings_getInstance()->ABOUT, StringUtil_getInstance()->EMPTY_STRING, (Command_staticInit(), Command_SCREEN), 2);
    this->OPEN_WEB_URL = Command_new4("Open Web URL", StringUtil_getInstance()->EMPTY_STRING, (Command_staticInit(), Command_SCREEN), 2);
    this->CLOSE_OPTIONS = Command_new4("Back", StringUtil_getInstance()->EMPTY_STRING, (Command_staticInit(), Command_SCREEN), 1);
    this->DISPLAY_OPTIONS = Command_new4(CanvasStrings_getInstance()->OPTIONS, StringUtil_getInstance()->EMPTY_STRING, (Command_staticInit(), Command_SCREEN), 2);
    this->START_TRACE = Command_new4("Start Trace", StringUtil_getInstance()->EMPTY_STRING, (Command_staticInit(), Command_SCREEN), 1);
    this->STOP_TRACE = Command_new4("Stop Trace", StringUtil_getInstance()->EMPTY_STRING, (Command_staticInit(), Command_SCREEN), 1);
    this->DEFAULT_OPTIONS = Command_new4("Default", StringUtil_getInstance()->EMPTY_STRING, (Command_staticInit(), Command_SCREEN), 1);
    this->SHOW_GAME_CANVAS = Command_new4("Back to Game", StringUtil_getInstance()->EMPTY_STRING, (Command_staticInit(), Command_SCREEN), 1);
    this->CLOSE_AND_SHOW_GAME_CANVAS = Command_new4("Back", StringUtil_getInstance()->EMPTY_STRING, (Command_staticInit(), Command_SCREEN), 1);
    this->QUIT_COMMAND = Command_new4("Quit", StringUtil_getInstance()->EMPTY_STRING, (Command_staticInit(), Command_STOP), 1);
    this->RESTART_COMMAND = Command_new4("Restart", StringUtil_getInstance()->EMPTY_STRING, (Command_staticInit(), Command_SCREEN), 0);
    this->DISPLAY_SAVE_FORM = Command_new4("Save To", StringUtil_getInstance()->EMPTY_STRING, (Command_staticInit(), Command_SCREEN), 3);
    this->SAVE = Command_new4("Save", StringUtil_getInstance()->EMPTY_STRING, (Command_staticInit(), Command_SCREEN), 3);
    this->DISPLAY_LOAD_FORM = Command_new4("Load", StringUtil_getInstance()->EMPTY_STRING, (Command_staticInit(), Command_SCREEN), 3);
    this->LOAD_FILE = Command_new4("Load File", StringUtil_getInstance()->EMPTY_STRING, (Command_staticInit(), Command_SCREEN), 3);
    this->DELETE_FILE = Command_new4("Delete File", StringUtil_getInstance()->EMPTY_STRING, (Command_staticInit(), Command_SCREEN), 1);
    this->EXIT_COMMAND = Command_new4("Exit", StringUtil_getInstance()->EMPTY_STRING, (Command_staticInit(), Command_EXIT), 2);
    this->EXIT_WITHOUT_PROGRESS_COMMAND = Command_new4("Exit Without Progress", StringUtil_getInstance()->EMPTY_STRING, (Command_staticInit(), Command_EXIT), 2);
    this->START_COMMAND = Command_new4(CommonStrings_getInstance()->START, StringUtil_getInstance()->EMPTY_STRING, (Command_staticInit(), Command_SCREEN), 1);
    this->CONTINUE_COMMAND = Command_new4("Continue", StringUtil_getInstance()->EMPTY_STRING, (Command_staticInit(), Command_SCREEN), 1);
    this->SELECT_COMMAND = Command_new4("Select", StringUtil_getInstance()->EMPTY_STRING, (Command_staticInit(), Command_SCREEN), 1);
    this->FEATURE_UPDATE = Command_new4("Feature Update", StringUtil_getInstance()->EMPTY_STRING, (Command_staticInit(), Command_SCREEN), 1);
    this->BUY_COMMAND = Command_new4("BUY", StringUtil_getInstance()->EMPTY_STRING, (Command_staticInit(), Command_SCREEN), 1);
}


GameCommandsFactory* GameCommandsFactory_getInstance(void) {
        if ((GameCommandsFactory_staticInit(), GameCommandsFactory_instance) == NullUtil_getInstance()->NULL_OBJECT) {
            GameCommandsFactory_instance = GameCommandsFactory_new();
        }
        return ((GameCommandsFactory*) (GameCommandsFactory_staticInit(), GameCommandsFactory_instance));
}


void GameCommandsFactory_init(GameCommandsFactory* this) {
    GameCommandsFactory_register();
    GameCommandsFactory_initFields(this);
}

GameCommandsFactory* GameCommandsFactory_new(void) {
    GameCommandsFactory* this = java_object_alloc(sizeof(GameCommandsFactory), "GameCommandsFactory");
    GameCommandsFactory_init(this);
    return this;
}

