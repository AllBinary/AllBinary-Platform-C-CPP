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
// package org.allbinary.input.automation.actions.script.condition

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/data/tree/dom/DomNodeHelper.h"
#include "org/allbinary/data/tree/dom/DomSearchHelper.h"
#include "org/allbinary/data/tree/dom/ModDomHelper.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/time/TimeDelayHelper.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "org/w3c/dom/NodeList.h"
#include "org/allbinary/input/automation/actions/script/condition/BasicProfileActionScriptCondition.h"
#include "org/allbinary/input/automation/actions/script/condition/TimeIntervalActionScriptConditionInterface.h"

typedef struct TimeIntervalActionScriptCondition TimeIntervalActionScriptCondition;
struct TimeIntervalActionScriptCondition {
    BasicProfileActionScriptCondition base;
    TimeIntervalActionScriptConditionInterface TimeIntervalActionScriptConditionInterface_interface;
    LogUtil* logUtil;
    TimeIntervalActionScriptConditionJPanel* timeIntervalActionScriptConditionJPanel;
    TimeDelayHelper* timeHelper;
};

static const char* TimeIntervalActionScriptCondition_NAME = "Time Interval";

TimeIntervalActionScriptCondition* TimeIntervalActionScriptCondition_new(Node* node);

void TimeIntervalActionScriptCondition_init(TimeIntervalActionScriptCondition* this, Node* node);

TimeIntervalActionScriptCondition* TimeIntervalActionScriptCondition_new0();
void TimeIntervalActionScriptCondition_init0(TimeIntervalActionScriptCondition* this);
static void TimeIntervalActionScriptCondition_init(TimeIntervalActionScriptCondition* this);
void TimeIntervalActionScriptCondition_showDialog(TimeIntervalActionScriptCondition* this);
HashMap* TimeIntervalActionScriptCondition_toHashMap(TimeIntervalActionScriptCondition* this);
Node* TimeIntervalActionScriptCondition_toXmlNode(TimeIntervalActionScriptCondition* this, Document* document);
void TimeIntervalActionScriptCondition_log(TimeIntervalActionScriptCondition* this);
TimeDelayHelper* TimeIntervalActionScriptCondition_getTimeDelayHelper(TimeIntervalActionScriptCondition* this);
void TimeIntervalActionScriptCondition_setTimeDelayHelper(TimeIntervalActionScriptCondition* this, TimeDelayHelper* timeHelper);
bool TimeIntervalActionScriptCondition_shouldProcess(TimeIntervalActionScriptCondition* this, int64_t frame);

static void TimeIntervalActionScriptCondition_initFields(TimeIntervalActionScriptCondition* this) {
    this->logUtil = LogUtil_getInstance();
    this->timeIntervalActionScriptConditionJPanel = nullptr;
    this->timeHelper = nullptr;
}


void TimeIntervalActionScriptCondition_init(TimeIntervalActionScriptCondition* this, Node* node) {
        BasicProfileActionScriptCondition_init(&this->base, TimeIntervalActionScriptCondition_NAME, node);
        TimeIntervalActionScriptCondition_initFields(this);
        Node* actionNode = DomSearchHelper_getNode(TimeIntervalActionScriptConditionData_NAME, Node_getChildNodes(node));
        if (actionNode != nullptr) {
            NodeList* nodeList = Node_getChildNodes(actionNode);
            for (int32_t index = 0; index < NodeList_getLength(nodeList); index++) {
                Node* childNode = NodeList_item(nodeList, index);
                if (JAVA_CALL(Node_getNodeName(childNode), compareTo, TimeIntervalActionScriptConditionData_TIME) == 0) {
                    const char* interval = DomNodeHelper_getTextNodeValue(childNode);
                    TimeIntervalActionScriptCondition_setTimeDelayHelper(this, TimeDelayHelper_new(java_string_of(interval)));
                } else {
                    java_throw(java_exception_new("Exception", "Time Interval Action Script Condition Unknown Node"));
                }
            }
        } else {
            java_throw(java_exception_new("Exception", "Time Interval Action Script Condition Node Null"));
        }
        TimeIntervalActionScriptCondition_init(this);
}

TimeIntervalActionScriptCondition* TimeIntervalActionScriptCondition_new(Node* node) {
    TimeIntervalActionScriptCondition* this = calloc(1, sizeof(TimeIntervalActionScriptCondition));
    TimeIntervalActionScriptCondition_init(this, node);
    return this;
}


void TimeIntervalActionScriptCondition_init0(TimeIntervalActionScriptCondition* this) {
        BasicProfileActionScriptCondition_init(&this->base, TimeIntervalActionScriptCondition_NAME);
        TimeIntervalActionScriptCondition_initFields(this);
        TimeIntervalActionScriptCondition_setTimeDelayHelper(this, TimeDelayHelper_new(0));
        TimeIntervalActionScriptCondition_init(this);
}

TimeIntervalActionScriptCondition* TimeIntervalActionScriptCondition_new0(void) {
    TimeIntervalActionScriptCondition* this = calloc(1, sizeof(TimeIntervalActionScriptCondition));
    TimeIntervalActionScriptCondition_init0(this);
    return this;
}


static void TimeIntervalActionScriptCondition_init(TimeIntervalActionScriptCondition* this) {
        this->timeIntervalActionScriptConditionJPanel = TimeIntervalActionScriptConditionJPanel_new(this);
}


void TimeIntervalActionScriptCondition_showDialog(TimeIntervalActionScriptCondition* this) {
        JAVA_CALL(TimeIntervalActionScriptConditionJPanel_getTimeIntervalActionJDialog(this->timeIntervalActionScriptConditionJPanel), setVisible, true);
}


HashMap* TimeIntervalActionScriptCondition_toHashMap(TimeIntervalActionScriptCondition* this) {
        HashMap* hashMap = StdUtil_createHashMap(StdUtil_getInstance());
        HashMap_put(hashMap, TimeIntervalActionScriptConditionData_TIME, java_string_of(this->timeHelper->delay));
        LogUtil_putF(this->logUtil, java_concat("HashMap: ", HashMap_toString(hashMap)), this, "toHashMap()");
        return hashMap;
}


// throws Exception
Node* TimeIntervalActionScriptCondition_toXmlNode(TimeIntervalActionScriptCondition* this, Document* document) {
        Node* node = BasicProfileActionScriptCondition_toXmlNode((&this->base), document);
        Node_appendChild(node, ModDomHelper_createNodeWithValueNodes(document, TimeIntervalActionScriptConditionData_NAME, TimeIntervalActionScriptCondition_toHashMap(this)));
        return node;
}


void TimeIntervalActionScriptCondition_log(TimeIntervalActionScriptCondition* this) {
        LogUtil_putF(this->logUtil, java_concat("Time Interval: ", java_string_of(this->timeHelper->delay)), this, "log");
}


TimeDelayHelper* TimeIntervalActionScriptCondition_getTimeDelayHelper(TimeIntervalActionScriptCondition* this) {
        return this->timeHelper;
}


void TimeIntervalActionScriptCondition_setTimeDelayHelper(TimeIntervalActionScriptCondition* this, TimeDelayHelper* timeHelper) {
        this->timeHelper = timeHelper;
}


// throws Exception
bool TimeIntervalActionScriptCondition_shouldProcess(TimeIntervalActionScriptCondition* this, int64_t frame) {
        TimeDelayHelper* timeHelper = TimeIntervalActionScriptCondition_getTimeDelayHelper(this);
        if (TimeDelayHelper_isTimeTNT(timeHelper)) {
            TimeDelayHelper_setStartTimeTNT(timeHelper);
            return BasicProfileActionScriptCondition_shouldProcess((&this->base), frame);
        }
        return false;
}

