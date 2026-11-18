// Generated Code Do Not Modify
#include "org/allbinary/game/identification/Group.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/game/identification/GroupInterface.h"
#include "org/allbinary/game/identification/GroupCommonFactory.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif








void Group_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void Group_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("Group", nullptr);
    java_register_method("Group", "getGroupName", (void*) Group_getGroupName);
    java_register_method("Group", "setName", (void*) Group_setName);
    java_register_method("Group", "getGroupId", (void*) Group_getGroupId);
    java_register_method("Group", "toString", (void*) Group_toString);
}

static void Group_initFields(Group* this) {
    this->name = StringUtil_getInstance()->EMPTY_STRING;
    
    this->string = StringUtil_getInstance()->EMPTY_STRING;
}


void Group_init(Group* this, const char* teamName, int16_t teamId) {
    Group_register();
    Group_initFields(this);
        this->teamId = teamId;
        Group_setName(this, teamName);
}

Group* Group_new(const char* teamName, int16_t teamId) {
    Group* this = java_object_alloc(sizeof(Group), "Group");
    Group_init(this, teamName, teamId);
    return this;
}


const char* Group_getGroupName(Group* this) {
        return this->name;
}


void Group_setName(Group* this, const char* name) {
        this->name = name;
        GroupCommonFactory* groupCommonFactory = GroupCommonFactory_getInstance();
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, groupCommonFactory->GROUP_NAME_LABEL);
        StringMaker_append(stringBuffer, this->name);
        StringMaker_append(stringBuffer, groupCommonFactory->ID_LABEL);
        StringMaker_appendshort(stringBuffer, this->teamId);
        this->string = java_string_of(stringBuffer);
}


int16_t Group_getGroupId(Group* this) {
        return this->teamId;
}


const char* Group_toString(Group* this) {
        return this->string;
}

