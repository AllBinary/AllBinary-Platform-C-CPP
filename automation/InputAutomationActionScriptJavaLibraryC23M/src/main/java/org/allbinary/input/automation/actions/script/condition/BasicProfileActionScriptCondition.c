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
// #include "java/awt/event/ActionEvent.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
// #include "javax/swing/tree/TreePath.h"
#include "org/allbinary/input/automation/actions/script/JTreeInterfaceFactory.h"
#include "org/allbinary/input/automation/actions/script/ProfileActionScriptItem.h"
#include "org/allbinary/input/automation/actions/script/ProfileActionScriptNodeInterface.h"
#include "org/allbinary/input/automation/actions/script/condition/processors/ProfileActionScriptProcessorInterface.h"
#include "org/allbinary/input/automation/actions/script/condition/processors/input/GenericProfileActionScriptInputData.h"
#include "org/allbinary/input/automation/actions/script/condition/processors/input/KeyboardActionScriptInput.h"
#include "org/allbinary/input/automation/actions/script/condition/processors/input/MouseActionScriptInput.h"
#include "org/allbinary/input/automation/actions/script/condition/processors/input/ProfileActionScriptInputFactory.h"
#include "org/allbinary/input/automation/module/actions/script/condition/processors/output/GenericProfileActionScriptOutputData.h"
#include "org/allbinary/input/automation/module/actions/script/condition/processors/output/ImageActionScriptOutput.h"
#include "org/allbinary/input/automation/module/actions/script/condition/processors/output/ProfileActionScriptOutputFactory.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "org/w3c/dom/NodeList.h"
#include "org/allbinary/input/automation/actions/script/condition/ProfileActionScriptConditionInterface.h"

typedef struct BasicProfileActionScriptCondition BasicProfileActionScriptCondition;
struct BasicProfileActionScriptCondition {
    ProfileActionScriptItem base;
    ProfileActionScriptConditionInterface ProfileActionScriptConditionInterface_interface;
    LogUtil* logUtil;
    BasicArrayList* profileActionProcessorInterfaceVector;
    BasicArrayList* profileActionConditionInterfaceVector;
};


BasicProfileActionScriptCondition* BasicProfileActionScriptCondition_new(const char* label, Node* node);

void BasicProfileActionScriptCondition_init(BasicProfileActionScriptCondition* this, const char* label, Node* node);
void BasicProfileActionScriptCondition_addProcessorNodes(BasicProfileActionScriptCondition* this, Node* node);

BasicProfileActionScriptCondition* BasicProfileActionScriptCondition_new1(const char* label);
void BasicProfileActionScriptCondition_init1(BasicProfileActionScriptCondition* this, const char* label);
static void BasicProfileActionScriptCondition_init(BasicProfileActionScriptCondition* this);
static JMenu* BasicProfileActionScriptCondition_getConditionJPopupMenu(BasicProfileActionScriptCondition* this);
static JMenu* BasicProfileActionScriptCondition_getInputJPopupMenu(BasicProfileActionScriptCondition* this);
static JMenu* BasicProfileActionScriptCondition_getOutputJPopupMenu(BasicProfileActionScriptCondition* this);
void BasicProfileActionScriptCondition_addProcessor(BasicProfileActionScriptCondition* this, ProfileActionScriptProcessorInterface* profileActionProcessorInterface);
void BasicProfileActionScriptCondition_removeProcessor(BasicProfileActionScriptCondition* this, ProfileActionScriptProcessorInterface* profileActionProcessorInterface);
void BasicProfileActionScriptCondition_removeCondition(BasicProfileActionScriptCondition* this, ProfileActionScriptNodeInterface* profileActionScriptNodeInterface);
void BasicProfileActionScriptCondition_addCondition(BasicProfileActionScriptCondition* this, ProfileActionScriptNodeInterface* profileActionScriptNodeInterface);
Node* BasicProfileActionScriptCondition_toXmlNode(BasicProfileActionScriptCondition* this, Document* document);
BasicArrayList* BasicProfileActionScriptCondition_getProfileActionConditionInterfaceVector(BasicProfileActionScriptCondition* this);
void BasicProfileActionScriptCondition_setProfileActionConditionInterfaceVector(BasicProfileActionScriptCondition* this, BasicArrayList* profileActionConditionInterfaceVector);
void BasicProfileActionScriptCondition_actionPerformed(BasicProfileActionScriptCondition* this, ActionEvent* actionEvent);
BasicArrayList* BasicProfileActionScriptCondition_getProfileActionProcessorInterfaceVector(BasicProfileActionScriptCondition* this);
void BasicProfileActionScriptCondition_setProfileActionProcessorInterfaceVector(BasicProfileActionScriptCondition* this, BasicArrayList* profileActionProcessorInterfaceVector);
static void BasicProfileActionScriptCondition_updateTree(BasicProfileActionScriptCondition* this);
bool BasicProfileActionScriptCondition_shouldProcess(BasicProfileActionScriptCondition* this, int64_t frame);
void BasicProfileActionScriptCondition_process(BasicProfileActionScriptCondition* this, int64_t frame);

static void BasicProfileActionScriptCondition_initFields(BasicProfileActionScriptCondition* this) {
    this->logUtil = LogUtil_getInstance();
    this->profileActionProcessorInterfaceVector = nullptr;
    this->profileActionConditionInterfaceVector = nullptr;
}


void BasicProfileActionScriptCondition_init(BasicProfileActionScriptCondition* this, const char* label, Node* node) {
        ProfileActionScriptItem_init(&this->base, label, node);
        BasicProfileActionScriptCondition_initFields(this);
        BasicProfileActionScriptCondition_init(this);
        NodeList* nodeList = Node_getChildNodes(node);
        for (int32_t index = 0; index < NodeList_getLength(nodeList); index++) {
            Node* actionItemNode = NodeList_item(nodeList, index);
            if (Node_getNodeType(actionItemNode) == Node_ELEMENT_NODE) {
                if (JAVA_CALL(Node_getNodeName(actionItemNode), compareTo, GenericProfileActionScriptConditionData_NAME) == 0) {
                    BasicProfileActionScriptCondition_addCondition(this, ProfileActionScriptConditionFactory_getInstance(actionItemNode));
                } else if (JAVA_CALL(Node_getNodeName(actionItemNode), compareTo, GenericProfileActionScriptInputData_NAME) == 0) {
                    BasicProfileActionScriptCondition_addProcessor(this, ProfileActionScriptInputFactory_getInstance(actionItemNode));
                } else if (JAVA_CALL(Node_getNodeName(actionItemNode), compareTo, GenericProfileActionScriptOutputData_NAME) == 0) {
                    BasicProfileActionScriptCondition_addProcessor(this, ProfileActionScriptOutputFactory_getInstance(actionItemNode));
                }
            }
        }
}

BasicProfileActionScriptCondition* BasicProfileActionScriptCondition_new(const char* label, Node* node) {
    BasicProfileActionScriptCondition* this = calloc(1, sizeof(BasicProfileActionScriptCondition));
    BasicProfileActionScriptCondition_init(this, label, node);
    return this;
}


// throws Exception
void BasicProfileActionScriptCondition_addProcessorNodes(BasicProfileActionScriptCondition* this, Node* node) {
        NodeList* nodeList = Node_getChildNodes(node);
        for (int32_t index = 0; index < NodeList_getLength(nodeList); index++) {
            Node* processorActionItemNode = NodeList_item(nodeList, index);
            if (JAVA_CALL(Node_getNodeName(processorActionItemNode), compareTo, GenericProfileActionScriptInputData_NAME) == 0) {
                BasicProfileActionScriptCondition_addProcessor(this, ProfileActionScriptInputFactory_getInstance(processorActionItemNode));
            } else if (JAVA_CALL(Node_getNodeName(processorActionItemNode), compareTo, GenericProfileActionScriptOutputData_NAME) == 0) {
                BasicProfileActionScriptCondition_addProcessor(this, ProfileActionScriptOutputFactory_getInstance(processorActionItemNode));
            }
        }
}


void BasicProfileActionScriptCondition_init1(BasicProfileActionScriptCondition* this, const char* label) {
        ProfileActionScriptItem_init(&this->base, label);
        BasicProfileActionScriptCondition_initFields(this);
        BasicProfileActionScriptCondition_init(this);
}

BasicProfileActionScriptCondition* BasicProfileActionScriptCondition_new1(const char* label) {
    BasicProfileActionScriptCondition* this = calloc(1, sizeof(BasicProfileActionScriptCondition));
    BasicProfileActionScriptCondition_init1(this, label);
    return this;
}


static void BasicProfileActionScriptCondition_init(BasicProfileActionScriptCondition* this) {
        BasicProfileActionScriptCondition_setProfileActionProcessorInterfaceVector(this, BasicArrayListD_new());
        BasicProfileActionScriptCondition_setProfileActionConditionInterfaceVector(this, BasicArrayListD_new());
        JAVA_CALL(BasicProfileActionScriptCondition_getJPopupMenu(this), add, BasicProfileActionScriptCondition_getConditionJPopupMenu(this));
        JAVA_CALL(BasicProfileActionScriptCondition_getJPopupMenu(this), add, BasicProfileActionScriptCondition_getInputJPopupMenu(this));
        JAVA_CALL(BasicProfileActionScriptCondition_getJPopupMenu(this), add, BasicProfileActionScriptCondition_getOutputJPopupMenu(this));
}


static JMenu* BasicProfileActionScriptCondition_getConditionJPopupMenu(BasicProfileActionScriptCondition* this) {
        JMenu* jMenu = JMenu_new(ProfileActionScriptItem_NEW_CONDITION);
        JMenuItem* jMenuItemColorAt = JMenuItem_new(ProfileActionScriptItem_NEW_COLOR_AT);
        JMenuItem* jMenuItemAlways = JMenuItem_new(ProfileActionScriptItem_NEW_ALWAYS);
        JMenuItem* jMenuItemTimeInterval = JMenuItem_new(ProfileActionScriptItem_NEW_TIME_INTERVAL);
        JMenuItem_addActionListener(jMenuItemColorAt, this);
        JMenuItem_addActionListener(jMenuItemAlways, this);
        JMenuItem_addActionListener(jMenuItemTimeInterval, this);
        JMenu_add(jMenu, jMenuItemColorAt);
        JMenu_add(jMenu, jMenuItemAlways);
        JMenu_add(jMenu, jMenuItemTimeInterval);
        return jMenu;
}


static JMenu* BasicProfileActionScriptCondition_getInputJPopupMenu(BasicProfileActionScriptCondition* this) {
        JMenu* jMenu = JMenu_new(ProfileActionScriptItem_NEW_INPUT);
        JMenuItem* jMenuItemKey = JMenuItem_new(ProfileActionScriptItem_NEW_KEY_INPUT);
        JMenuItem* jMenuItemMouse = JMenuItem_new(ProfileActionScriptItem_NEW_MOUSE_INPUT);
        JMenuItem* jMenuItemJoystick = JMenuItem_new(ProfileActionScriptItem_NEW_JOYSTICK_INPUT);
        JMenuItem_addActionListener(jMenuItemKey, this);
        JMenuItem_addActionListener(jMenuItemMouse, this);
        JMenuItem_addActionListener(jMenuItemJoystick, this);
        JMenu_add(jMenu, jMenuItemKey);
        JMenu_add(jMenu, jMenuItemMouse);
        JMenu_add(jMenu, jMenuItemJoystick);
        return jMenu;
}


static JMenu* BasicProfileActionScriptCondition_getOutputJPopupMenu(BasicProfileActionScriptCondition* this) {
        JMenu* jMenu = JMenu_new(ProfileActionScriptItem_NEW_OUTPUT);
        JMenuItem* jMenuItemImage = JMenuItem_new(ProfileActionScriptItem_NEW_IMAGE_OUTPUT);
        JMenuItem_addActionListener(jMenuItemImage, this);
        JMenu_add(jMenu, jMenuItemImage);
        return jMenu;
}


void BasicProfileActionScriptCondition_addProcessor(BasicProfileActionScriptCondition* this, ProfileActionScriptProcessorInterface* profileActionProcessorInterface) {
        LogUtil_putF(this->logUtil, this->commonStrings->START, this, "addInput");
        JAVA_CALL(BasicProfileActionScriptCondition_getProfileActionProcessorInterfaceVector(this), add, profileActionProcessorInterface);
        BasicProfileActionScriptCondition_add(this, profileActionProcessorInterface);
}


void BasicProfileActionScriptCondition_removeProcessor(BasicProfileActionScriptCondition* this, ProfileActionScriptProcessorInterface* profileActionProcessorInterface) {
        LogUtil_putF(this->logUtil, this->commonStrings->START, this, "removeInput");
        JAVA_CALL(BasicProfileActionScriptCondition_getProfileActionProcessorInterfaceVector(this), remove, profileActionProcessorInterface);
        BasicProfileActionScriptCondition_remove(this, profileActionProcessorInterface);
}


void BasicProfileActionScriptCondition_removeCondition(BasicProfileActionScriptCondition* this, ProfileActionScriptNodeInterface* profileActionScriptNodeInterface) {
        LogUtil_putF(this->logUtil, this->commonStrings->START, this, "removeCondition");
        JAVA_CALL(BasicProfileActionScriptCondition_getProfileActionConditionInterfaceVector(this), remove, profileActionScriptNodeInterface);
        BasicProfileActionScriptCondition_remove(this, profileActionScriptNodeInterface);
}


void BasicProfileActionScriptCondition_addCondition(BasicProfileActionScriptCondition* this, ProfileActionScriptNodeInterface* profileActionScriptNodeInterface) {
        LogUtil_putF(this->logUtil, this->commonStrings->START, this, "addCondition");
        JAVA_CALL(BasicProfileActionScriptCondition_getProfileActionConditionInterfaceVector(this), add, profileActionScriptNodeInterface);
        BasicProfileActionScriptCondition_add(this, profileActionScriptNodeInterface);
}


// throws Exception
Node* BasicProfileActionScriptCondition_toXmlNode(BasicProfileActionScriptCondition* this, Document* document) {
        Node* node = Document_createElement(document, GenericProfileActionScriptConditionData_NAME);
        BasicArrayList* profileActionConditionInterfaceVector = BasicProfileActionScriptCondition_getProfileActionConditionInterfaceVector(this);
        int32_t size = BasicArrayList_size(profileActionConditionInterfaceVector);
        for (int32_t index = 0; index < size; index++) {
            ProfileActionScriptConditionInterface* profileActionConditionInterface = ((ProfileActionScriptConditionInterface*) BasicArrayList_get(profileActionConditionInterfaceVector, index));
            Node_appendChild(node, ProfileActionScriptConditionInterface_toXmlNode(profileActionConditionInterface, document));
        }
        BasicArrayList* profileActionProcessorInterfaceVector = BasicProfileActionScriptCondition_getProfileActionProcessorInterfaceVector(this);
        int32_t size2 = BasicArrayList_size(profileActionProcessorInterfaceVector);
        for (int32_t index = 0; index < size2; index++) {
            ProfileActionScriptProcessorInterface* profileActionProcessorInterface = ((ProfileActionScriptProcessorInterface*) BasicArrayList_get(profileActionProcessorInterfaceVector, index));
            Node_appendChild(node, ProfileActionScriptProcessorInterface_toXmlNode(profileActionProcessorInterface, document));
        }
        return node;
}


BasicArrayList* BasicProfileActionScriptCondition_getProfileActionConditionInterfaceVector(BasicProfileActionScriptCondition* this) {
        return this->profileActionConditionInterfaceVector;
}


void BasicProfileActionScriptCondition_setProfileActionConditionInterfaceVector(BasicProfileActionScriptCondition* this, BasicArrayList* profileActionConditionInterfaceVector) {
        this->profileActionConditionInterfaceVector = profileActionConditionInterfaceVector;
}


void BasicProfileActionScriptCondition_actionPerformed(BasicProfileActionScriptCondition* this, ActionEvent* actionEvent) {
        JAVA_TRY {
            ProfileActionScriptItem_actionPerformed((&this->base), actionEvent);
            if (JAVA_CALL(ActionEvent_getActionCommand(actionEvent), compareTo, ProfileActionScriptItem_DELETE) == 0) {
                if (java_instanceof(BasicProfileActionScriptCondition_getParent(this), "ProfileActionScriptNodeInterface")) {
                    ProfileActionScriptNodeInterface* profileActionScriptNodeInterface = ((ProfileActionScriptNodeInterface*) BasicProfileActionScriptCondition_getParent(this));
                    ProfileActionScriptNodeInterface_removeCondition(profileActionScriptNodeInterface, this);
                    JAVA_CALL(JTreeInterfaceFactory_getJTreeInterface(JTreeInterfaceFactory_getInstance()), updateJTree);
                }
            } else if (JAVA_CALL(ActionEvent_getActionCommand(actionEvent), compareTo, ProfileActionScriptItem_NEW_COLOR_AT) == 0) {
                BasicProfileActionScriptCondition_addCondition(this, ColorAtActionScriptCondition_new());
                BasicProfileActionScriptCondition_updateTree(this);
            } else if (JAVA_CALL(ActionEvent_getActionCommand(actionEvent), compareTo, ProfileActionScriptItem_NEW_ALWAYS) == 0) {
                BasicProfileActionScriptCondition_addCondition(this, AlwaysActionScriptCondition_new());
                BasicProfileActionScriptCondition_updateTree(this);
            } else if (JAVA_CALL(ActionEvent_getActionCommand(actionEvent), compareTo, ProfileActionScriptItem_NEW_TIME_INTERVAL) == 0) {
                BasicProfileActionScriptCondition_addCondition(this, TimeIntervalActionScriptCondition_new());
                BasicProfileActionScriptCondition_updateTree(this);
            } else if (JAVA_CALL(ActionEvent_getActionCommand(actionEvent), compareTo, ProfileActionScriptItem_NEW_KEY_INPUT) == 0) {
                BasicProfileActionScriptCondition_addProcessor(this, KeyboardActionScriptInput_new());
                BasicProfileActionScriptCondition_updateTree(this);
            } else if (JAVA_CALL(ActionEvent_getActionCommand(actionEvent), compareTo, ProfileActionScriptItem_NEW_MOUSE_INPUT) == 0) {
                BasicProfileActionScriptCondition_addProcessor(this, MouseActionScriptInput_new());
                BasicProfileActionScriptCondition_updateTree(this);
            } else if (JAVA_CALL(ActionEvent_getActionCommand(actionEvent), compareTo, ProfileActionScriptItem_NEW_IMAGE_OUTPUT) == 0) {
                BasicProfileActionScriptCondition_addProcessor(this, ImageActionScriptOutput_new());
                BasicProfileActionScriptCondition_updateTree(this);
            }
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, "Error", this, "actionPerformed", e);
        } JAVA_END_TRY;
}


BasicArrayList* BasicProfileActionScriptCondition_getProfileActionProcessorInterfaceVector(BasicProfileActionScriptCondition* this) {
        return this->profileActionProcessorInterfaceVector;
}


void BasicProfileActionScriptCondition_setProfileActionProcessorInterfaceVector(BasicProfileActionScriptCondition* this, BasicArrayList* profileActionProcessorInterfaceVector) {
        this->profileActionProcessorInterfaceVector = profileActionProcessorInterfaceVector;
}


static void BasicProfileActionScriptCondition_updateTree(BasicProfileActionScriptCondition* this) {
        JAVA_CALL(JTreeInterfaceFactory_getJTreeInterface(JTreeInterfaceFactory_getInstance()), updateJTree);
        TreePath* treePath = TreePath_new(this);
        JAVA_CALL(JAVA_CALL(JTreeInterfaceFactory_getJTreeInterface(JTreeInterfaceFactory_getInstance()), getActionScriptJTree), expandPath, treePath);
}


// throws Exception
bool BasicProfileActionScriptCondition_shouldProcess(BasicProfileActionScriptCondition* this, int64_t frame) {
        BasicArrayList* profileActionConditionInterfaceVector = BasicProfileActionScriptCondition_getProfileActionConditionInterfaceVector(this);
        int32_t size = BasicArrayList_size(profileActionConditionInterfaceVector);
        for (int32_t index = 0; index < size; index++) {
            ProfileActionScriptConditionInterface* profileActionScriptConditionInterface = ((ProfileActionScriptConditionInterface*) BasicArrayList_get(profileActionConditionInterfaceVector, index));
            if (!ProfileActionScriptConditionInterface_shouldProcess(profileActionScriptConditionInterface, frame)) {
                return false;
            }
        }
        return true;
}


// throws Exception
void BasicProfileActionScriptCondition_process(BasicProfileActionScriptCondition* this, int64_t frame) {
        LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "Start - Processing "), appendint, JAVA_CALL(BasicProfileActionScriptCondition_getProfileActionProcessorInterfaceVector(this), size)), append, " inputs"), toString), this, this->commonStrings->PROCESS);
        BasicArrayList* profileActionProcessorInterfaceVector = BasicProfileActionScriptCondition_getProfileActionProcessorInterfaceVector(this);
        int32_t size = BasicArrayList_size(profileActionProcessorInterfaceVector);
        for (int32_t index = 0; index < size; index++) {
            ProfileActionScriptProcessorInterface* profileActionScriptProcessorInterface = ((ProfileActionScriptProcessorInterface*) BasicArrayList_get(profileActionProcessorInterfaceVector, index));
            ProfileActionScriptProcessorInterface_process(profileActionScriptProcessorInterface, frame);
        }
}

