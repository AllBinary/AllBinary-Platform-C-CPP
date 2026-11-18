// Generated Code Do Not Modify
#include "org/allbinary/game/score/HighScoreCommands.h"
#include "javax/microedition/lcdui/Command.h"
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


static HighScoreCommands* HighScoreCommands_instance;


void HighScoreCommands_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    HighScoreCommands_instance = HighScoreCommands_new();
}

void HighScoreCommands_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("HighScoreCommands", nullptr);
}

static void HighScoreCommands_initFields(HighScoreCommands* this) {
    this->DISPLAY = Command_new4("Scores", StringUtil_getInstance()->EMPTY_STRING, (Command_staticInit(), Command_SCREEN), 1);
    this->PERSONAL = Command_new4("Personal", StringUtil_getInstance()->EMPTY_STRING, (Command_staticInit(), Command_SCREEN), 1);
    this->WORLD = Command_new4("World", StringUtil_getInstance()->EMPTY_STRING, (Command_staticInit(), Command_SCREEN), 1);
}

void HighScoreCommands_init(HighScoreCommands* this) {
    HighScoreCommands_register();
    HighScoreCommands_initFields(this);
}

HighScoreCommands* HighScoreCommands_new(void) {
    HighScoreCommands* this = java_object_alloc(sizeof(HighScoreCommands), "HighScoreCommands");
    HighScoreCommands_init(this);
    return this;
}


HighScoreCommands* HighScoreCommands_getInstance(void) {
        return (HighScoreCommands_staticInit(), HighScoreCommands_instance);
}

