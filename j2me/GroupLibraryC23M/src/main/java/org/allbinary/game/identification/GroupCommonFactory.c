// Generated Code Do Not Modify
#include "org/allbinary/game/identification/GroupCommonFactory.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/logic/math/SmallIntegerSingletonFactory.h")
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#endif


static void* GroupCommonFactory_instance;


void GroupCommonFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    GroupCommonFactory_instance = NullUtil_getInstance()->NULL_OBJECT;
}

void GroupCommonFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GroupCommonFactory", nullptr);
}

static void GroupCommonFactory_initFields(GroupCommonFactory* this) {
    this->ID = SmallIntegerSingletonFactory_getAt(SmallIntegerSingletonFactory_getInstance(), 10);
    this->GROUP_NAME_LABEL = "Group Name: ";
    this->ID_LABEL = " Id: ";
    this->ADDING_LABEL = "Adding: ";
    this->TO_LABEL = " to: ";
}

void GroupCommonFactory_init(GroupCommonFactory* this) {
    GroupCommonFactory_register();
    GroupCommonFactory_initFields(this);
}

GroupCommonFactory* GroupCommonFactory_new(void) {
    GroupCommonFactory* this = java_object_alloc(sizeof(GroupCommonFactory), "GroupCommonFactory");
    GroupCommonFactory_init(this);
    return this;
}


GroupCommonFactory* GroupCommonFactory_getInstance(void) {
        if ((GroupCommonFactory_staticInit(), GroupCommonFactory_instance) == NullUtil_getInstance()->NULL_OBJECT) {
            GroupCommonFactory_instance = GroupCommonFactory_new();
        }
        return ((GroupCommonFactory*) (GroupCommonFactory_staticInit(), GroupCommonFactory_instance));
}

