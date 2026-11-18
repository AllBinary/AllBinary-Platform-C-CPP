// Generated Code Do Not Modify
#include "org/allbinary/game/score/HighScoreCommandsFactory.h"
#include "javax/microedition/lcdui/Command.h"
#include "org/allbinary/game/score/HighScoreCommandsBaseFactory.h"
#include "org/allbinary/game/score/HighScoreCommands.h"


static HighScoreCommandsFactory* HighScoreCommandsFactory_instance;



void HighScoreCommandsFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    HighScoreCommandsFactory_instance = HighScoreCommandsFactory_new();
}

void HighScoreCommandsFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("HighScoreCommandsFactory", "HighScoreCommandsBaseFactory");
}


HighScoreCommandsFactory* HighScoreCommandsFactory_getInstance(void) {
        return (HighScoreCommandsFactory_staticInit(), HighScoreCommandsFactory_instance);
}


void HighScoreCommandsFactory_init(HighScoreCommandsFactory* this) {
    HighScoreCommandsFactory_register();
        HighScoreCommandsBaseFactory_init(&this->base, ((Command**) java_array_from(sizeof(Command*), sizeof((Command*[]){ HighScoreCommands_getInstance()->PERSONAL, HighScoreCommands_getInstance()->WORLD }) / sizeof(Command*), (Command*[]){ HighScoreCommands_getInstance()->PERSONAL, HighScoreCommands_getInstance()->WORLD })));
}

HighScoreCommandsFactory* HighScoreCommandsFactory_new(void) {
    HighScoreCommandsFactory* this = java_object_alloc(sizeof(HighScoreCommandsFactory), "HighScoreCommandsFactory");
    HighScoreCommandsFactory_init(this);
    return this;
}

