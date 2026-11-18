// Generated Code Do Not Modify
#include "org/allbinary/game/identification/GroupFactory.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/game/identification/Group.h"
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif


static GroupFactory* GroupFactory_instance;





void GroupFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    GroupFactory_instance = GroupFactory_new();
}

void GroupFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GroupFactory", nullptr);
    java_register_method("GroupFactory", "getNextGroup", (void*) GroupFactory_getNextGroup);
    java_register_method("GroupFactory", "getNextGroupByName", (void*) GroupFactory_getNextGroupByName);
    java_register_method("GroupFactory", "init", (void*) GroupFactory_initMethod);
}

static void GroupFactory_initFields(GroupFactory* this) {
    this->logUtil = LogUtil_getInstance();
    this->NULL_GROUP_ARRAY = ((Group**) java_array_new(sizeof(Group*), 0));
    this->list = BasicArrayListD_new();
    this->index = 0;
}

void GroupFactory_init(GroupFactory* this) {
    GroupFactory_register();
    GroupFactory_initFields(this);
}

GroupFactory* GroupFactory_new(void) {
    GroupFactory* this = java_object_alloc(sizeof(GroupFactory), "GroupFactory");
    GroupFactory_init(this);
    return this;
}


GroupFactory* GroupFactory_getInstance(void) {
        return (GroupFactory_staticInit(), GroupFactory_instance);
}


Group* GroupFactory_getNextGroup(GroupFactory* this) {
        Group* group = ((Group*) this->list->objectArray[this->index]);
        this->index++;
        return group;
}


Group* GroupFactory_getNextGroupByName(GroupFactory* this, const char* name) {
        Group* group = GroupFactory_getNextGroup(this);
        Group_setName(group, name);
        return group;
}


void GroupFactory_initMethod(GroupFactory* this, int16_t groups, const char** nameArray) {
        StringMaker* stringMaker = StringMaker_new();
        StringUtil* stringUtil = StringUtil_getInstance();
        const char* TEAM = "Team ";
        BasicArrayList_clear(this->list);
        this->index = 0;
        int32_t size = BasicArrayList_size(this->list);
        const char* name = nullptr;
        while (size < ((int32_t) groups)) {
            name = stringUtil->EMPTY_STRING;
            if (size < java_array_length(nameArray)) {
                name = nameArray[size];
            } else {
                StringMaker_delete(stringMaker, 0, StringMaker_length(stringMaker));
                name = java_string_of(StringMaker_appendint(StringMaker_append(stringMaker, TEAM), size));
            }
            BasicArrayList_add(this->list, Group_new(name, ((int16_t) (size + 3))));
            size++;
        }
}

