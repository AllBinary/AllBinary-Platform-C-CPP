// Generated Code Do Not Modify
#include "org/allbinary/game/score/HighScoreCommandsBaseFactory.h"
#include "javax/microedition/lcdui/Command.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"






void HighScoreCommandsBaseFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void HighScoreCommandsBaseFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("HighScoreCommandsBaseFactory", nullptr);
    java_register_method("HighScoreCommandsBaseFactory", "isHighScoreCommand", (void*) HighScoreCommandsBaseFactory_isHighScoreCommand);
    java_register_method("HighScoreCommandsBaseFactory", "getIndex", (void*) HighScoreCommandsBaseFactory_getIndex);
}

static void HighScoreCommandsBaseFactory_initFields(HighScoreCommandsBaseFactory* this) {
    this->logUtil = LogUtil_getInstance();
    
}


void HighScoreCommandsBaseFactory_init(HighScoreCommandsBaseFactory* this, Command** HIGH_SCORE_COMMANDS) {
    HighScoreCommandsBaseFactory_register();
    HighScoreCommandsBaseFactory_initFields(this);
        this->HIGH_SCORE_COMMANDS = HIGH_SCORE_COMMANDS;
}

HighScoreCommandsBaseFactory* HighScoreCommandsBaseFactory_new(Command** HIGH_SCORE_COMMANDS) {
    HighScoreCommandsBaseFactory* this = java_object_alloc(sizeof(HighScoreCommandsBaseFactory), "HighScoreCommandsBaseFactory");
    HighScoreCommandsBaseFactory_init(this, HIGH_SCORE_COMMANDS);
    return this;
}


bool HighScoreCommandsBaseFactory_isHighScoreCommand(HighScoreCommandsBaseFactory* this, Command* command) {
        for (int32_t index = java_array_length(this->HIGH_SCORE_COMMANDS) - 1; index >= 0; index--) {
            if (command == this->HIGH_SCORE_COMMANDS[index]) {
                return true;
            }
        }
        return false;
}


// throws Exception
int32_t HighScoreCommandsBaseFactory_getIndex(HighScoreCommandsBaseFactory* this, Command* command) {
        for (int32_t index = java_array_length(this->HIGH_SCORE_COMMANDS) - 1; index >= 0; index--) {
            if (command == this->HIGH_SCORE_COMMANDS[index]) {
                return index;
            }
        }
        java_throw(java_exception_new("Exception", "No Such Command"));
}

