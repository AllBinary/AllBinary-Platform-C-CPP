// Generated Code Do Not Modify
#include "org/allbinary/game/configuration/feature/GameFeatureChoiceGroups.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/util/BasicArrayList.h"
#if __has_include("org/allbinary/logic/StdUtil.h")
#include "org/allbinary/logic/StdUtil.h"
#endif


static GameFeatureChoiceGroups* GameFeatureChoiceGroups_gameFeatureChoiceGroupsExclusive;
static GameFeatureChoiceGroups* GameFeatureChoiceGroups_gameFeatureChoiceGroupsMultiple;






void GameFeatureChoiceGroups_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    GameFeatureChoiceGroups_gameFeatureChoiceGroupsExclusive = GameFeatureChoiceGroups_new();
    GameFeatureChoiceGroups_gameFeatureChoiceGroupsMultiple = GameFeatureChoiceGroups_new();
}

void GameFeatureChoiceGroups_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameFeatureChoiceGroups", nullptr);
    java_register_method("GameFeatureChoiceGroups", "get", (void*) GameFeatureChoiceGroups_get);
    java_register_method("GameFeatureChoiceGroups", "add", (void*) GameFeatureChoiceGroups_add);
}

static void GameFeatureChoiceGroups_initFields(GameFeatureChoiceGroups* this) {
    this->hashtable = StdUtil_createHashtable(StdUtil_getInstance());
}


void GameFeatureChoiceGroups_init(GameFeatureChoiceGroups* this) {
    GameFeatureChoiceGroups_register();
    GameFeatureChoiceGroups_initFields(this);
}

GameFeatureChoiceGroups* GameFeatureChoiceGroups_new(void) {
    GameFeatureChoiceGroups* this = java_object_alloc(sizeof(GameFeatureChoiceGroups), "GameFeatureChoiceGroups");
    GameFeatureChoiceGroups_init(this);
    return this;
}


GameFeatureChoiceGroups* GameFeatureChoiceGroups_getExclusiveInstance(void) {
        return (GameFeatureChoiceGroups_staticInit(), GameFeatureChoiceGroups_gameFeatureChoiceGroupsExclusive);
}


GameFeatureChoiceGroups* GameFeatureChoiceGroups_getMultipleInstance(void) {
        return (GameFeatureChoiceGroups_staticInit(), GameFeatureChoiceGroups_gameFeatureChoiceGroupsMultiple);
}


ABHashtable* GameFeatureChoiceGroups_get(GameFeatureChoiceGroups* this) {
        return this->hashtable;
}


void GameFeatureChoiceGroups_add(GameFeatureChoiceGroups* this, const char* name, BasicArrayList* list) {
        Hashtable_put(this->hashtable, name, list);
}

