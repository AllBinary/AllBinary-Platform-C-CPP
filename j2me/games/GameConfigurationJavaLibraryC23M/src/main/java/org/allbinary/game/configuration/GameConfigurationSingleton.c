// Generated Code Do Not Modify
#include "org/allbinary/game/configuration/GameConfigurationSingleton.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/game/configuration/GameConfiguration.h"
#if __has_include("org/allbinary/logic/StdUtil.h")
#include "org/allbinary/logic/StdUtil.h"
#endif


static GameConfigurationSingleton* GameConfigurationSingleton_SINGLETON;







void GameConfigurationSingleton_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    GameConfigurationSingleton_SINGLETON = GameConfigurationSingleton_new();
}

void GameConfigurationSingleton_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameConfigurationSingleton", nullptr);
    java_register_method("GameConfigurationSingleton", "getInstanceByName", (void*) GameConfigurationSingleton_getInstanceByName);
    java_register_method("GameConfigurationSingleton", "getOptionsBasicArrayList", (void*) GameConfigurationSingleton_getOptionsBasicArrayList);
    java_register_method("GameConfigurationSingleton", "add", (void*) GameConfigurationSingleton_add);
    java_register_method("GameConfigurationSingleton", "getHashtable", (void*) GameConfigurationSingleton_getHashtable);
}

static void GameConfigurationSingleton_initFields(GameConfigurationSingleton* this) {
    
    
}


GameConfigurationSingleton* GameConfigurationSingleton_getInstance(void) {
        return (GameConfigurationSingleton_staticInit(), GameConfigurationSingleton_SINGLETON);
}


void GameConfigurationSingleton_init(GameConfigurationSingleton* this) {
    GameConfigurationSingleton_register();
    GameConfigurationSingleton_initFields(this);
        this->list = BasicArrayListD_new();
        this->hashtable = StdUtil_createHashtable(StdUtil_getInstance());
}

GameConfigurationSingleton* GameConfigurationSingleton_new(void) {
    GameConfigurationSingleton* this = java_object_alloc(sizeof(GameConfigurationSingleton), "GameConfigurationSingleton");
    GameConfigurationSingleton_init(this);
    return this;
}


GameConfiguration* GameConfigurationSingleton_getInstanceByName(GameConfigurationSingleton* this, const char* name) {
        return ((GameConfiguration*) Hashtable_get(this->hashtable, name));
}


BasicArrayList* GameConfigurationSingleton_getOptionsBasicArrayList(GameConfigurationSingleton* this) {
        return this->list;
}


void GameConfigurationSingleton_add(GameConfigurationSingleton* this, GameConfiguration* gameConfiguration) {
        BasicArrayList_add(this->list, gameConfiguration);
}


ABHashtable* GameConfigurationSingleton_getHashtable(GameConfigurationSingleton* this) {
        return this->hashtable;
}

