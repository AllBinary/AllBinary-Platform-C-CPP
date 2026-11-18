// Generated Code Do Not Modify
#include "org/allbinary/game/layer/identification/GroupLayerManagerListener.h"
#include "org/allbinary/game/identification/Group.h"
#include "org/allbinary/game/identification/GroupInterfaceCompositeInterface.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/event/LayerManagerEvent.h"
#include "org/allbinary/layer/event/LayerManagerEventHandler.h"
#include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/EventStrings.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#if __has_include("org/allbinary/layer/event/LayerManagerEventHandler.h")
#include "org/allbinary/layer/event/LayerManagerEventHandler.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/util/event/EventStrings.h")
#include "org/allbinary/logic/util/event/EventStrings.h"
#endif
#if __has_include("org/allbinary/game/identification/Group.h")
#include "org/allbinary/game/identification/Group.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/game/identification/Group.h")
#include "org/allbinary/game/identification/Group.h"
#endif
#if __has_include("org/allbinary/string/CommonSeps.h")
#include "org/allbinary/string/CommonSeps.h"
#endif
#if __has_include("org/allbinary/string/CommonLabels.h")
#include "org/allbinary/string/CommonLabels.h"
#endif


static GroupLayerManagerListener* GroupLayerManagerListener_SINGLETON;







static BasicArrayList* GroupLayerManagerListener_getListById(GroupLayerManagerListener* this, int32_t groupId);

static int32_t GroupLayerManagerListener_getGroupSizeById(GroupLayerManagerListener* this, int32_t groupId);


static bool GroupLayerManagerListener_isIdInList(GroupLayerManagerListener* this, int32_t id, BasicArrayList* excludeGroupList);







void GroupLayerManagerListener_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    GroupLayerManagerListener_SINGLETON = GroupLayerManagerListener_new();
}

void GroupLayerManagerListener_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GroupLayerManagerListener", "LayerManagerEventListener");
    java_register_method("GroupLayerManagerListener", "clear", (void*) GroupLayerManagerListener_clear);
    java_register_method("GroupLayerManagerListener", "getGroupSizeFromInterface", (void*) GroupLayerManagerListener_getGroupSizeFromInterface);
    java_register_method("GroupLayerManagerListener", "getGroupSize", (void*) GroupLayerManagerListener_getGroupSize);
    java_register_method("GroupLayerManagerListener", "getList", (void*) GroupLayerManagerListener_getList);
    java_register_method("GroupLayerManagerListener", "getListById", (void*) GroupLayerManagerListener_getListById);
    java_register_method("GroupLayerManagerListener", "getGroupSizeById", (void*) GroupLayerManagerListener_getGroupSizeById);
    java_register_method("GroupLayerManagerListener", "areAllOtherGroupsEmpty", (void*) GroupLayerManagerListener_areAllOtherGroupsEmpty);
    java_register_method("GroupLayerManagerListener", "isIdInList", (void*) GroupLayerManagerListener_isIdInList);
    java_register_method("GroupLayerManagerListener", "areAllOtherGroupsLessThan", (void*) GroupLayerManagerListener_areAllOtherGroupsLessThan);
    java_register_method("GroupLayerManagerListener", "init", (void*) GroupLayerManagerListener_initMethod);
    java_register_method("GroupLayerManagerListener", "onEvent", (void*) GroupLayerManagerListener_onEvent);
    java_register_method("GroupLayerManagerListener", "onCreateLayerManagerEvent", (void*) GroupLayerManagerListener_onCreateLayerManagerEvent);
    java_register_method("GroupLayerManagerListener", "onDeleteLayerManagerEvent", (void*) GroupLayerManagerListener_onDeleteLayerManagerEvent);
    java_register_method("GroupLayerManagerListener", "log", (void*) GroupLayerManagerListener_log);
}

static void GroupLayerManagerListener_initFields(GroupLayerManagerListener* this) {
    this->logUtil = LogUtil_getInstance();
    this->list = BasicArrayListD_new();
}


GroupLayerManagerListener* GroupLayerManagerListener_getInstance(void) {
        return (GroupLayerManagerListener_staticInit(), GroupLayerManagerListener_SINGLETON);
}


void GroupLayerManagerListener_init(GroupLayerManagerListener* this) {
    GroupLayerManagerListener_register();
    LayerManagerEventListener_init(&this->base);
    GroupLayerManagerListener_initFields(this);
        LayerManagerEventHandler_addListener(LayerManagerEventHandler_getInstance(), this);
}

GroupLayerManagerListener* GroupLayerManagerListener_new(void) {
    GroupLayerManagerListener* this = java_object_alloc(sizeof(GroupLayerManagerListener), "GroupLayerManagerListener");
    GroupLayerManagerListener_init(this);
    return this;
}


void GroupLayerManagerListener_clear(GroupLayerManagerListener* this) {
        BasicArrayList* groupList = nullptr;
        int32_t size = BasicArrayList_size(this->list);
        for (int32_t index = size - 1; index >= 0; index--) {
            groupList = ((BasicArrayList*) this->list->objectArray[index]);
            BasicArrayList_clear(groupList);
        }
}


int32_t GroupLayerManagerListener_getGroupSizeFromInterface(GroupLayerManagerListener* this, GroupInterfaceCompositeInterface* groupInterfaceCompositeInterface) {
        Group** groupInterfaceArray = GroupInterfaceCompositeInterface_getGroupInterface(groupInterfaceCompositeInterface);
        return GroupLayerManagerListener_getGroupSize(this, groupInterfaceArray[0]);
}


int32_t GroupLayerManagerListener_getGroupSize(GroupLayerManagerListener* this, Group* groupInterface) {
        int32_t id = ((int32_t) Group_getGroupId(groupInterface));
        return GroupLayerManagerListener_getGroupSizeById(this, id);
}


BasicArrayList* GroupLayerManagerListener_getList(GroupLayerManagerListener* this, Group* groupInterface) {
        int32_t id = ((int32_t) Group_getGroupId(groupInterface));
        return GroupLayerManagerListener_getListById(this, id);
}


static BasicArrayList* GroupLayerManagerListener_getListById(GroupLayerManagerListener* this, int32_t groupId) {
        BasicArrayList* groupList = ((BasicArrayList*) this->list->objectArray[groupId]);
        return groupList;
}


static int32_t GroupLayerManagerListener_getGroupSizeById(GroupLayerManagerListener* this, int32_t groupId) {
        BasicArrayList* groupList = ((BasicArrayList*) this->list->objectArray[groupId]);
        int32_t size = BasicArrayList_size(groupList);
        return size;
}


bool GroupLayerManagerListener_areAllOtherGroupsEmpty(GroupLayerManagerListener* this, Group* groupInterface) {
        int32_t id = ((int32_t) Group_getGroupId(groupInterface));
        int32_t size = BasicArrayList_size(this->list);
        for (int32_t index = size - 1; index >= 0; index--) {
            if (id != index) {
                int32_t groupSize = GroupLayerManagerListener_getGroupSizeById(this, index);
                if (groupSize != 0) {
                    LogUtil_putF(this->logUtil, java_string_of(StringMaker_appendint(StringMaker_append(StringMaker_new(), "Group Size: "), groupSize)), this, "areAllOtherGroupsEmpty");
                    return false;
                }
            }
        }
        return true;
}


static bool GroupLayerManagerListener_isIdInList(GroupLayerManagerListener* this, int32_t id, BasicArrayList* excludeGroupList) {
        int32_t size = BasicArrayList_size(excludeGroupList);
        Group** groupInterfaceArray = nullptr;
        Group* groupInterface = nullptr;
        int32_t groupId = 0;
        for (int32_t index = size - 1; index >= 0; index--) {
            groupInterfaceArray = ((Group**) excludeGroupList->objectArray[index]);
            int32_t size2 = java_array_length(groupInterfaceArray);
            for (int32_t index2 = 0; index2 < size2; index2++) {
                groupInterface = groupInterfaceArray[index2];
                groupId = ((int32_t) Group_getGroupId(groupInterface));
                if (groupId == id) {
                    return true;
                }
            }
        }
        return false;
}


bool GroupLayerManagerListener_areAllOtherGroupsLessThan(GroupLayerManagerListener* this, BasicArrayList* excludeGroupList, int32_t maxSize) {
        int32_t size = BasicArrayList_size(this->list);
        for (int32_t index = size - 1; index >= 0; index--) {
            if (!GroupLayerManagerListener_isIdInList(this, index, excludeGroupList)) {
                int32_t groupSize = GroupLayerManagerListener_getGroupSizeById(this, index);
                if (groupSize >= maxSize) {
                    return false;
                }
            }
        }
        return true;
}


void GroupLayerManagerListener_initMethod(GroupLayerManagerListener* this, int32_t total) {
        while (BasicArrayList_size(this->list) <= total + 1) {
            BasicArrayList_add(this->list, BasicArrayListD_new());
        }
}


void GroupLayerManagerListener_onEvent(GroupLayerManagerListener* this, AllBinaryEventObject* eventObject) {
        ForcedLogUtil_log(EventStrings_getInstance()->PERFORMANCE_MESSAGE, this);
}


// throws Exception
void GroupLayerManagerListener_onCreateLayerManagerEvent(GroupLayerManagerListener* this, LayerManagerEvent* layerManagerEvent) {
        AllBinaryLayer* layerInterface = LayerManagerEvent_getLayerInterface(layerManagerEvent);
        Group** groupInterfaceArray = AllBinaryLayer_getGroupInterface(layerInterface);
        int32_t size = java_array_length(groupInterfaceArray);
        int32_t id = 0;
        BasicArrayList* groupList = nullptr;
        for (int32_t index = 0; index < size; index++) {
            id = ((int32_t) Group_getGroupId(groupInterfaceArray[index]));
            groupList = ((BasicArrayList*) this->list->objectArray[id]);
            if (groupList == nullptr) {
                LogUtil_putF(this->logUtil, java_string_of(StringMaker_appendint(StringMaker_append(StringMaker_new(), "id: "), id)), this, "onCreateLayerManagerEvent");
            }
            if (!BasicArrayList_contains(groupList, layerInterface)) {
                BasicArrayList_add(groupList, layerInterface);
            } else {
            }
        }
}


// throws Exception
void GroupLayerManagerListener_onDeleteLayerManagerEvent(GroupLayerManagerListener* this, LayerManagerEvent* layerManagerEvent) {
        AllBinaryLayer* layerInterface = LayerManagerEvent_getLayerInterface(layerManagerEvent);
        Group** groupInterfaceArray = AllBinaryLayer_getGroupInterface(layerInterface);
        int32_t size = java_array_length(groupInterfaceArray);
        int32_t id = 0;
        BasicArrayList* groupList = nullptr;
        for (int32_t index = 0; index < size; index++) {
            id = ((int32_t) Group_getGroupId(groupInterfaceArray[index]));
            groupList = ((BasicArrayList*) this->list->objectArray[id]);
            BasicArrayList_remove(groupList, layerInterface);
        }
}


void GroupLayerManagerListener_log(GroupLayerManagerListener* this) {
        StringMaker* stringBuffer = StringMaker_new();
        const char* GROUP = "Group: ";
        const char* SPACE = CommonSeps_getInstance()->SPACE;
        const char* TOTAL_LABEL = CommonLabels_getInstance()->TOTAL_LABEL;
        int32_t size = BasicArrayList_size(this->list);
        for (int32_t index = size - 1; index >= 0; index--) {
            BasicArrayList* groupList = ((BasicArrayList*) this->list->objectArray[index]);
            StringMaker_append(stringBuffer, GROUP);
            StringMaker_appendint(stringBuffer, index);
            StringMaker_append(stringBuffer, SPACE);
            StringMaker_append(stringBuffer, TOTAL_LABEL);
            StringMaker_appendint(stringBuffer, BasicArrayList_size(groupList));
            StringMaker_append(stringBuffer, SPACE);
        }
        LogUtil_putF(this->logUtil, java_string_of(stringBuffer), this, "log");
}

