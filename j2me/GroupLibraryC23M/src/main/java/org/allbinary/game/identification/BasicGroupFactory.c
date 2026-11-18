// Generated Code Do Not Modify
#include "org/allbinary/game/identification/BasicGroupFactory.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/game/identification/Group.h"
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif


static void* BasicGroupFactory_instance;


void BasicGroupFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    BasicGroupFactory_instance = NullUtil_getInstance()->NULL_OBJECT;
}

void BasicGroupFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("BasicGroupFactory", nullptr);
}

static void BasicGroupFactory_initFields(BasicGroupFactory* this) {
    this->NAME = "GROUP_NAME";
    this->NO_SUCH_GROUP = "No Such Group: ";
    this->GOOD = Group_new("Good Guys", ((int16_t) 0));
    this->ENEMY = Group_new("Bad Guys", ((int16_t) 1));
    this->ENEMY_ON_LEVEL = Group_new("Bad Guys on Level", ((int16_t) 2));
    this->NONE = Group_new("Not On A Team", ((int16_t) 3));
    this->GOOD_ARRAY = ((Group**) java_array_from(sizeof(Group*), sizeof((Group*[]){ this->GOOD }) / sizeof(Group*), (Group*[]){ this->GOOD }));
    this->ENEMY_ARRAY = ((Group**) java_array_from(sizeof(Group*), sizeof((Group*[]){ this->ENEMY }) / sizeof(Group*), (Group*[]){ this->ENEMY }));
    this->ENEMY_ON_LEVEL_ARRAY = ((Group**) java_array_from(sizeof(Group*), sizeof((Group*[]){ this->ENEMY, this->ENEMY_ON_LEVEL }) / sizeof(Group*), (Group*[]){ this->ENEMY, this->ENEMY_ON_LEVEL }));
    this->NONE_ARRAY = ((Group**) java_array_from(sizeof(Group*), sizeof((Group*[]){ this->NONE }) / sizeof(Group*), (Group*[]){ this->NONE }));
}

void BasicGroupFactory_init(BasicGroupFactory* this) {
    BasicGroupFactory_register();
    BasicGroupFactory_initFields(this);
}

BasicGroupFactory* BasicGroupFactory_new(void) {
    BasicGroupFactory* this = java_object_alloc(sizeof(BasicGroupFactory), "BasicGroupFactory");
    BasicGroupFactory_init(this);
    return this;
}


BasicGroupFactory* BasicGroupFactory_getInstance(void) {
        if ((BasicGroupFactory_staticInit(), BasicGroupFactory_instance) == NullUtil_getInstance()->NULL_OBJECT) {
            BasicGroupFactory_instance = BasicGroupFactory_new();
        }
        return ((BasicGroupFactory*) (BasicGroupFactory_staticInit(), BasicGroupFactory_instance));
}

