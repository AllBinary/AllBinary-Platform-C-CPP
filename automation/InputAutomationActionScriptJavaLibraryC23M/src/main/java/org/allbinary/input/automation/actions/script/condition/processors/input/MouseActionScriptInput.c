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
// package org.allbinary.input.automation.actions.script.condition.processors.input

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/awt/event/InputEvent.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/data/tree/dom/DomNodeHelper.h"
#include "org/allbinary/data/tree/dom/DomSearchHelper.h"
#include "org/allbinary/data/tree/dom/ModDomHelper.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/java/bool/BooleanFactory.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "org/w3c/dom/NodeList.h"
#include "org/allbinary/input/automation/actions/script/condition/processors/input/BasicProfileActionScriptInput.h"
#include "org/allbinary/input/automation/actions/script/condition/processors/input/MouseActionScriptInputInterface.h"

typedef struct MouseActionScriptInput MouseActionScriptInput;
struct MouseActionScriptInput {
    BasicProfileActionScriptInput base;
    MouseActionScriptInputInterface MouseActionScriptInputInterface_interface;
    LogUtil* logUtil;
    Point* point;
    int32_t buttons;
    MouseActionScriptInputJPanel* mouseActionScriptInputJPanel;
};

static const char* MouseActionScriptInput_NAME = "Mouse";

MouseActionScriptInput* MouseActionScriptInput_new(Node* node);

void MouseActionScriptInput_init(MouseActionScriptInput* this, Node* node);

MouseActionScriptInput* MouseActionScriptInput_new0();
void MouseActionScriptInput_init0(MouseActionScriptInput* this);
void MouseActionScriptInput_setPoint(MouseActionScriptInput* this, Point* point);
Point* MouseActionScriptInput_getPoint(MouseActionScriptInput* this);
int32_t MouseActionScriptInput_getButtonClicks(MouseActionScriptInput* this);
void MouseActionScriptInput_setButtonClicks(MouseActionScriptInput* this, int32_t buttons);
void MouseActionScriptInput_showDialog(MouseActionScriptInput* this);
HashMap* MouseActionScriptInput_toHashMap(MouseActionScriptInput* this);
Node* MouseActionScriptInput_toXmlNode(MouseActionScriptInput* this, Document* document);
void MouseActionScriptInput_process(MouseActionScriptInput* this, int64_t frame);
void MouseActionScriptInput_log(MouseActionScriptInput* this);

static void MouseActionScriptInput_initFields(MouseActionScriptInput* this) {
    this->logUtil = LogUtil_getInstance();
    
    this->buttons = 0;
    
}


void MouseActionScriptInput_init(MouseActionScriptInput* this, Node* node) {
        BasicProfileActionScriptInput_init(&this->base, MouseActionScriptInput_NAME, node);
        MouseActionScriptInput_initFields(this);
        LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
        this->point = Point_new();
        Node* actionNode = DomSearchHelper_getNode(MouseActionScriptInputData_NAME, Node_getChildNodes(node));
        if (actionNode != nullptr) {
            NodeList* nodeList = Node_getChildNodes(actionNode);
            for (int32_t index = 0; index < NodeList_getLength(nodeList); index++) {
                Node* childNode = NodeList_item(nodeList, index);
                if (JAVA_CALL(Node_getNodeName(childNode), compareTo, MouseActionScriptInputData_BUTTONS) == 0) {
                    const char* buttons = DomNodeHelper_getTextNodeValue(childNode);
                    MouseActionScriptInput_setButtonClicks(this, JAVA_CALL(java_string_of(buttons), intValue));
                } else if (JAVA_CALL(Node_getNodeName(childNode), compareTo, MouseActionScriptInputData_MOVE) == 0) {
                    Node* mouseXNode = DomSearchHelper_getNode(MouseActionScriptInputData_MOVE_X, Node_getChildNodes(childNode));
                    const char* mouseXString = DomNodeHelper_getTextNodeValue(mouseXNode);
                    int32_t mouseXInteger = java_string_of(mouseXString);
                    Node* mouseYNode = DomSearchHelper_getNode(MouseActionScriptInputData_MOVE_Y, Node_getChildNodes(childNode));
                    const char* mouseYString = DomNodeHelper_getTextNodeValue(mouseYNode);
                    int32_t mouseYInteger = java_string_of(mouseYString);
                    Point* newPoint = Point_new(Integer_intValue(mouseXInteger), Integer_intValue(mouseYInteger));
                    MouseActionScriptInput_setPoint(this, newPoint);
                } else {
                    java_throw(java_exception_new("Exception", "Action Script Input Unknown Node"));
                }
            }
        } else {
            java_throw(java_exception_new("Exception", "Action Script Input Node Null"));
        }
        MouseActionScriptInput_setAllowsChildren(this, false);
        this->mouseActionScriptInputJPanel = MouseActionScriptInputJPanel_new(this);
}

MouseActionScriptInput* MouseActionScriptInput_new(Node* node) {
    MouseActionScriptInput* this = calloc(1, sizeof(MouseActionScriptInput));
    MouseActionScriptInput_init(this, node);
    return this;
}


void MouseActionScriptInput_init0(MouseActionScriptInput* this) {
        BasicProfileActionScriptInput_init(&this->base, MouseActionScriptInput_NAME);
        MouseActionScriptInput_initFields(this);
        this->point = Point_new();
        MouseActionScriptInput_setAllowsChildren(this, false);
        this->mouseActionScriptInputJPanel = MouseActionScriptInputJPanel_new(this);
}

MouseActionScriptInput* MouseActionScriptInput_new0(void) {
    MouseActionScriptInput* this = calloc(1, sizeof(MouseActionScriptInput));
    MouseActionScriptInput_init0(this);
    return this;
}


void MouseActionScriptInput_setPoint(MouseActionScriptInput* this, Point* point) {
        this->point = point;
}


Point* MouseActionScriptInput_getPoint(MouseActionScriptInput* this) {
        return this->point;
}


int32_t MouseActionScriptInput_getButtonClicks(MouseActionScriptInput* this) {
        return this->buttons;
}


void MouseActionScriptInput_setButtonClicks(MouseActionScriptInput* this, int32_t buttons) {
        this->buttons = buttons;
}


void MouseActionScriptInput_showDialog(MouseActionScriptInput* this) {
        JAVA_CALL(MouseActionScriptInputJPanel_getMouseActionJDialog(this->mouseActionScriptInputJPanel), setVisible, true);
}


HashMap* MouseActionScriptInput_toHashMap(MouseActionScriptInput* this) {
        HashMap* hashMap = StdUtil_createHashMap(StdUtil_getInstance());
        HashMap_put(hashMap, MouseActionScriptInputData_BUTTONS, java_string_of(MouseActionScriptInput_getButtonClicks(this)));
        LogUtil_putF(this->logUtil, java_concat("HashMap: ", HashMap_toString(hashMap)), this, "toHashMap()");
        return hashMap;
}


// throws Exception
Node* MouseActionScriptInput_toXmlNode(MouseActionScriptInput* this, Document* document) {
        Node* node = BasicProfileActionScriptInput_toXmlNode((&this->base), document);
        Node* mouseNode = ModDomHelper_createNodeWithValueNodes(document, MouseActionScriptInputData_NAME, MouseActionScriptInput_toHashMap(this));
        Node_appendChild(node, mouseNode);
        HashMap* hashMap = StdUtil_createHashMap(StdUtil_getInstance());
        HashMap_put(hashMap, MouseActionScriptInputData_MOVE_X, java_string_of(MouseActionScriptInput_getPoint(this)->x));
        HashMap_put(hashMap, MouseActionScriptInputData_MOVE_Y, java_string_of(MouseActionScriptInput_getPoint(this)->y));
        Node_appendChild(mouseNode, ModDomHelper_createNodeWithValueNodes(document, MouseActionScriptInputData_MOVE, hashMap));
        return node;
}


// throws Exception
void MouseActionScriptInput_process(MouseActionScriptInput* this, int64_t frame) {
        MouseInputAutomationProcessor_process(this);
}


void MouseActionScriptInput_log(MouseActionScriptInput* this) {
        StringMaker* buttonStringBuffer = StringMaker_new();
        StringMaker_append(buttonStringBuffer, "1: ");
        BooleanFactory* booleanFactory = BooleanFactory_getInstance();
        if ((MouseActionScriptInput_getButtonClicks(this) & InputEvent_BUTTON1_MASK) != 0) {
            StringMaker_append(buttonStringBuffer, booleanFactory->TRUE_STRING);
        } else {
            StringMaker_append(buttonStringBuffer, booleanFactory->FALSE_STRING);
        }
        StringMaker_append(buttonStringBuffer, " 2: ");
        if ((MouseActionScriptInput_getButtonClicks(this) & InputEvent_BUTTON2_MASK) != 0) {
            StringMaker_append(buttonStringBuffer, booleanFactory->TRUE_STRING);
        } else {
            StringMaker_append(buttonStringBuffer, booleanFactory->FALSE_STRING);
        }
        StringMaker_append(buttonStringBuffer, " 3: ");
        if ((MouseActionScriptInput_getButtonClicks(this) & InputEvent_BUTTON3_MASK) != 0) {
            StringMaker_append(buttonStringBuffer, booleanFactory->TRUE_STRING);
        } else {
            StringMaker_append(buttonStringBuffer, booleanFactory->FALSE_STRING);
        }
        LogUtil_putF(this->logUtil, java_concat(java_concat(java_concat(java_concat(java_concat("Input Type: ", JAVA_CALL(MouseActionScriptInput_getInputRobotInterface(this), getName)), " Point: "), java_string_of(MouseActionScriptInput_getPoint(this))), " Buttons Clicked: "), StringMaker_toString(buttonStringBuffer)), this, "log");
}

