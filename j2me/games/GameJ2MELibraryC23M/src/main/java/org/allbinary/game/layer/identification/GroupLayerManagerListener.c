/*
 *
 * AllBinary Open License Version 1
 * Copyright (c) 2011 AllBinary
 * 
 * By agreeing to this license you and any business entity you represent are
 * legally bound to the AllBinary Open License Version 1 legal agreement.
 * 
 * You may obtain the AllBinary Open License Version 1 legal agreement from
 * AllBinary or the root directory of AllBinary's AllBinary Platform repository.
 * 
 * Created By: Travis Berthelot
 *  
 */
// Generated Code Do Not Modify
// package org.allbinary.game.layer.identification

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/identification/Group.h"
#include "org/allbinary/game/identification/GroupInterfaceCompositeInterface.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/event/LayerManagerEvent.h"
#include "org/allbinary/layer/event/LayerManagerEventHandler.h"
#include "org/allbinary/layer/event/LayerManagerEventListener.h"
#include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/EventStrings.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"

typedef struct GroupLayerManagerListener GroupLayerManagerListener;
struct GroupLayerManagerListener {
    LayerManagerEventListener base;
    LogUtil* logUtil;
    BasicArrayList* list;
};

static GroupLayerManagerListener* GroupLayerManagerListener_SINGLETON;

GroupLayerManagerListener* GroupLayerManagerListener_new(void);
GroupLayerManagerListener* GroupLayerManagerListener_getInstance(void);

void GroupLayerManagerListener_init(GroupLayerManagerListener* this);
void GroupLayerManagerListener_clear(GroupLayerManagerListener* this);
int32_t GroupLayerManagerListener_getGroupSizeFromInterface(GroupLayerManagerListener* this, GroupInterfaceCompositeInterface* groupInterfaceCompositeInterface);
int32_t GroupLayerManagerListener_getGroupSize(GroupLayerManagerListener* this, Group* groupInterface);
BasicArrayList* GroupLayerManagerListener_getList(GroupLayerManagerListener* this, Group* groupInterface);
static BasicArrayList* GroupLayerManagerListener_getListById(GroupLayerManagerListener* this, int32_t groupId);
static int32_t GroupLayerManagerListener_getGroupSizeById(GroupLayerManagerListener* this, int32_t groupId);
bool GroupLayerManagerListener_areAllOtherGroupsEmpty(GroupLayerManagerListener* this, Group* groupInterface);
static bool GroupLayerManagerListener_isIdInList(GroupLayerManagerListener* this, int32_t id, BasicArrayList* excludeGroupList);
bool GroupLayerManagerListener_areAllOtherGroupsLessThan(GroupLayerManagerListener* this, BasicArrayList* excludeGroupList, int32_t maxSize);
void GroupLayerManagerListener_init(GroupLayerManagerListener* this, int32_t total);
void GroupLayerManagerListener_onEvent(GroupLayerManagerListener* this, AllBinaryEventObject* eventObject);
void GroupLayerManagerListener_onCreateLayerManagerEvent(GroupLayerManagerListener* this, LayerManagerEvent* layerManagerEvent);
void GroupLayerManagerListener_onDeleteLayerManagerEvent(GroupLayerManagerListener* this, LayerManagerEvent* layerManagerEvent);
void GroupLayerManagerListener_log(GroupLayerManagerListener* this);

// Static fields with runtime initializers: call this once at startup
void GroupLayerManagerListener_staticInit(void) {
    GroupLayerManagerListener_SINGLETON = GroupLayerManagerListener_new();
}

static void GroupLayerManagerListener_initFields(GroupLayerManagerListener* this) {
    this->logUtil = LogUtil_getInstance();
    this->list = BasicArrayListD_new();
}


GroupLayerManagerListener* GroupLayerManagerListener_getInstance(void) {
        return GroupLayerManagerListener_SINGLETON;
}


void GroupLayerManagerListener_init(GroupLayerManagerListener* this) {
    LayerManagerEventListener_init(&this->base);
    GroupLayerManagerListener_initFields(this);
        LayerManagerEventHandler_addListener(LayerManagerEventHandler_getInstance(), this);
}

GroupLayerManagerListener* GroupLayerManagerListener_new(void) {
    GroupLayerManagerListener* this = calloc(1, sizeof(GroupLayerManagerListener));
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
                    LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "Group Size: "), appendint, groupSize), toString), this, "areAllOtherGroupsEmpty");
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


void GroupLayerManagerListener_init(GroupLayerManagerListener* this, int32_t total) {
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
            id = ((int32_t) JAVA_CALL(groupInterfaceArray[index], getGroupId));
            groupList = ((BasicArrayList*) this->list->objectArray[id]);
            if (groupList == nullptr) {
                LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "id: "), appendint, id), toString), this, "onCreateLayerManagerEvent");
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
            id = ((int32_t) JAVA_CALL(groupInterfaceArray[index], getGroupId));
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
        LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, "log");
}

