// Generated Code Do Not Modify
#include "org/allbinary/game/displayable/canvas/GameLimitedCommandTextItemArrayFactory.h"
#include "org/allbinary/graphics/form/item/CommandTextItemArrayFactory.h"
#include "org/allbinary/graphics/form/item/LimitCommandsVisitor.h"


static GameLimitedCommandTextItemArrayFactory* GameLimitedCommandTextItemArrayFactory_instance;



void GameLimitedCommandTextItemArrayFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    GameLimitedCommandTextItemArrayFactory_instance = GameLimitedCommandTextItemArrayFactory_new();
}

void GameLimitedCommandTextItemArrayFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameLimitedCommandTextItemArrayFactory", nullptr);
    java_register_method("GameLimitedCommandTextItemArrayFactory", "getCommandTextItemArrayFactory", (void*) GameLimitedCommandTextItemArrayFactory_getCommandTextItemArrayFactory);
}

static void GameLimitedCommandTextItemArrayFactory_initFields(GameLimitedCommandTextItemArrayFactory* this) {
    this->commandTextItemArrayFactory = CommandTextItemArrayFactory_new(LimitCommandsVisitor_new());
}

void GameLimitedCommandTextItemArrayFactory_init(GameLimitedCommandTextItemArrayFactory* this) {
    GameLimitedCommandTextItemArrayFactory_register();
    GameLimitedCommandTextItemArrayFactory_initFields(this);
}

GameLimitedCommandTextItemArrayFactory* GameLimitedCommandTextItemArrayFactory_new(void) {
    GameLimitedCommandTextItemArrayFactory* this = java_object_alloc(sizeof(GameLimitedCommandTextItemArrayFactory), "GameLimitedCommandTextItemArrayFactory");
    GameLimitedCommandTextItemArrayFactory_init(this);
    return this;
}


GameLimitedCommandTextItemArrayFactory* GameLimitedCommandTextItemArrayFactory_getInstance(void) {
        return (GameLimitedCommandTextItemArrayFactory_staticInit(), GameLimitedCommandTextItemArrayFactory_instance);
}


CommandTextItemArrayFactory* GameLimitedCommandTextItemArrayFactory_getCommandTextItemArrayFactory(GameLimitedCommandTextItemArrayFactory* this) {
        return this->commandTextItemArrayFactory;
}

