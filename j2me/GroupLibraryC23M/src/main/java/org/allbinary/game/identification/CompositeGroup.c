// Generated Code Do Not Modify
#include "org/allbinary/game/identification/CompositeGroup.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/game/identification/Group.h"
#include "org/allbinary/game/identification/GroupCommonFactory.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif








void CompositeGroup_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void CompositeGroup_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CompositeGroup", nullptr);
    java_register_method("CompositeGroup", "clear", (void*) CompositeGroup_clear);
    java_register_method("CompositeGroup", "add", (void*) CompositeGroup_add);
    java_register_method("CompositeGroup", "isInGroup", (void*) CompositeGroup_isInGroup);
    java_register_method("CompositeGroup", "getGroup", (void*) CompositeGroup_getGroup);
}

static void CompositeGroup_initFields(CompositeGroup* this) {
    this->logUtil = LogUtil_getInstance();
    
    this->list = BasicArrayListD_new();
}


void CompositeGroup_init(CompositeGroup* this, Group* groupInterface) {
    CompositeGroup_register();
    CompositeGroup_initFields(this);
        this->groupInterface = groupInterface;
}

CompositeGroup* CompositeGroup_new(Group* groupInterface) {
    CompositeGroup* this = java_object_alloc(sizeof(CompositeGroup), "CompositeGroup");
    CompositeGroup_init(this, groupInterface);
    return this;
}


void CompositeGroup_clear(CompositeGroup* this) {
        BasicArrayList_clear(this->list);
}


void CompositeGroup_add(CompositeGroup* this, Group* groupInterface) {
        CommonStrings* commonStrings = CommonStrings_getInstance();
        GroupCommonFactory* groupCommonFactory = GroupCommonFactory_getInstance();
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, groupCommonFactory->ADDING_LABEL);
        StringMaker_append(stringBuffer, java_string_of(groupInterface));
        StringMaker_append(stringBuffer, groupCommonFactory->TO_LABEL);
        StringMaker_append(stringBuffer, StringUtil_toString(StringUtil_getInstance(), this->groupInterface));
        LogUtil_putF(this->logUtil, java_string_of(stringBuffer), this, commonStrings->ADD);
        BasicArrayList_add(this->list, groupInterface);
}


bool CompositeGroup_isInGroup(CompositeGroup* this, Group* groupInterface) {
        if (BasicArrayList_contains(this->list, groupInterface)) {
            return true;
        } else {
            return false;
        }
}


Group* CompositeGroup_getGroup(CompositeGroup* this) {
        return this->groupInterface;
}

