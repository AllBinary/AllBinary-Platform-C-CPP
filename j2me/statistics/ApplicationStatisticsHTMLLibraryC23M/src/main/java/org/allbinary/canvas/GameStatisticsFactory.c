// Generated Code Do Not Modify
#include "org/allbinary/canvas/GameStatisticsFactory.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/canvas/BaseGameStatistics.h"
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif


static GameStatisticsFactory* GameStatisticsFactory_instance;




void GameStatisticsFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    GameStatisticsFactory_instance = GameStatisticsFactory_new();
}

void GameStatisticsFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameStatisticsFactory", "BaseGameStatistics");
    java_register_method("GameStatisticsFactory", "add", (void*) GameStatisticsFactory_add);
    java_register_method("GameStatisticsFactory", "toString", (void*) GameStatisticsFactory_toString);
}

static void GameStatisticsFactory_initFields(GameStatisticsFactory* this) {
    this->stringBuffer = StringMaker_new();
}

void GameStatisticsFactory_init(GameStatisticsFactory* this) {
    GameStatisticsFactory_register();
    BaseGameStatistics_init(&this->base);
    GameStatisticsFactory_initFields(this);
}

GameStatisticsFactory* GameStatisticsFactory_new(void) {
    GameStatisticsFactory* this = java_object_alloc(sizeof(GameStatisticsFactory), "GameStatisticsFactory");
    GameStatisticsFactory_init(this);
    return this;
}


GameStatisticsFactory* GameStatisticsFactory_getInstance(void) {
        return (GameStatisticsFactory_staticInit(), GameStatisticsFactory_instance);
}


void GameStatisticsFactory_add(GameStatisticsFactory* this, const char* string) {
        if (StringMaker_length(this->stringBuffer) > 12000) {
            StringMaker_delete(this->stringBuffer, 0, StringMaker_length(this->stringBuffer));
            StringMaker_append(this->stringBuffer, "Old Stats Cleared");
        }
        StringMaker_append(this->stringBuffer, string);
}


const char* GameStatisticsFactory_toString(GameStatisticsFactory* this) {
        return java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), BaseGameStatistics_toString((&this->base))), java_string_of(this->stringBuffer)));
}

