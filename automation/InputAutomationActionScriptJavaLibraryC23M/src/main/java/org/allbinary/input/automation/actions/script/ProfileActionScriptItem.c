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
// package org.allbinary.input.automation.actions.script

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/awt/event/ActionEvent.h"
// #include "java/awt/event/ActionListener.h"
// #include "javax/swing/tree/DefaultMutableTreeNode.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/w3c/dom/Node.h"
#include "org/allbinary/input/automation/actions/script/ProfileActionScriptItemInterface.h"

typedef struct ProfileActionScriptItem ProfileActionScriptItem;
struct ProfileActionScriptItem {
    DefaultMutableTreeNode base;
    ProfileActionScriptItemInterface ProfileActionScriptItemInterface_interface;
    ActionListener ActionListener_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    JPopupMenu* jPopupMenu;
};

static const char* ProfileActionScriptItem_EDIT = "Edit";
const char* ProfileActionScriptItem_DELETE = "Delete";
const char* ProfileActionScriptItem_NEW_CONDITION = "New Condition";
const char* ProfileActionScriptItem_NEW_INPUT = "New Input";
const char* ProfileActionScriptItem_NEW_OUTPUT = "New Output";
const char* ProfileActionScriptItem_NEW_COLOR_AT = "Color At";
const char* ProfileActionScriptItem_NEW_TIME_INTERVAL = "Time Interval";
const char* ProfileActionScriptItem_NEW_ALWAYS = "Always On/Off";
const char* ProfileActionScriptItem_NEW_KEY_INPUT = "Key";
const char* ProfileActionScriptItem_NEW_MOUSE_INPUT = "Mouse";
const char* ProfileActionScriptItem_NEW_JOYSTICK_INPUT = "Joystick";
const char* ProfileActionScriptItem_NEW_IMAGE_OUTPUT = "Image";

ProfileActionScriptItem* ProfileActionScriptItem_new(const char* label, Node* node);

void ProfileActionScriptItem_init(ProfileActionScriptItem* this, const char* label, Node* node);

ProfileActionScriptItem* ProfileActionScriptItem_new1(const char* label);
void ProfileActionScriptItem_init1(ProfileActionScriptItem* this, const char* label);
static void ProfileActionScriptItem_init(ProfileActionScriptItem* this);
void ProfileActionScriptItem_process(ProfileActionScriptItem* this, int64_t frame);
JPopupMenu* ProfileActionScriptItem_getJPopupMenu(ProfileActionScriptItem* this);
void ProfileActionScriptItem_showDialog(ProfileActionScriptItem* this);
void ProfileActionScriptItem_actionPerformed(ProfileActionScriptItem* this, ActionEvent* actionEvent);
void ProfileActionScriptItem_setJPopupMenu(ProfileActionScriptItem* this, JPopupMenu* jPopupMenu);

static void ProfileActionScriptItem_initFields(ProfileActionScriptItem* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->jPopupMenu = nullptr;
}


void ProfileActionScriptItem_init(ProfileActionScriptItem* this, const char* label, Node* node) {
        DefaultMutableTreeNode_init(&this->base, label);
        ProfileActionScriptItem_initFields(this);
        ProfileActionScriptItem_init(this);
        LogUtil_putF(this->logUtil, java_concat("Label: ", label), this, this->commonStrings->CONSTRUCTOR);
}

ProfileActionScriptItem* ProfileActionScriptItem_new(const char* label, Node* node) {
    ProfileActionScriptItem* this = calloc(1, sizeof(ProfileActionScriptItem));
    ProfileActionScriptItem_init(this, label, node);
    return this;
}


void ProfileActionScriptItem_init1(ProfileActionScriptItem* this, const char* label) {
        DefaultMutableTreeNode_init(&this->base, label);
        ProfileActionScriptItem_initFields(this);
        ProfileActionScriptItem_init(this);
        LogUtil_putF(this->logUtil, java_concat("Label: ", label), this, this->commonStrings->CONSTRUCTOR);
}

ProfileActionScriptItem* ProfileActionScriptItem_new1(const char* label) {
    ProfileActionScriptItem* this = calloc(1, sizeof(ProfileActionScriptItem));
    ProfileActionScriptItem_init1(this, label);
    return this;
}


static void ProfileActionScriptItem_init(ProfileActionScriptItem* this) {
        ProfileActionScriptItem_setJPopupMenu(this, JPopupMenu_new());
        JMenuItem* jMenuItemEdit = JMenuItem_new(ProfileActionScriptItem_EDIT);
        JMenuItem* jMenuItemDelete = JMenuItem_new(ProfileActionScriptItem_DELETE);
        JMenuItem_addActionListener(jMenuItemEdit, this);
        JMenuItem_addActionListener(jMenuItemDelete, this);
        JAVA_CALL(ProfileActionScriptItem_getJPopupMenu(this), add, jMenuItemEdit);
        JAVA_CALL(ProfileActionScriptItem_getJPopupMenu(this), add, jMenuItemDelete);
}


// throws Exception
void ProfileActionScriptItem_process(ProfileActionScriptItem* this, int64_t frame) {
        java_throw(java_exception_new("RuntimeException", ""));
}


JPopupMenu* ProfileActionScriptItem_getJPopupMenu(ProfileActionScriptItem* this) {
        return this->jPopupMenu;
}


void ProfileActionScriptItem_showDialog(ProfileActionScriptItem* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


void ProfileActionScriptItem_actionPerformed(ProfileActionScriptItem* this, ActionEvent* actionEvent) {
        if (JAVA_CALL(ActionEvent_getActionCommand(actionEvent), compareTo, ProfileActionScriptItem_EDIT) == 0) {
            ProfileActionScriptItem_showDialog(this);
        }
}


void ProfileActionScriptItem_setJPopupMenu(ProfileActionScriptItem* this, JPopupMenu* jPopupMenu) {
        this->jPopupMenu = jPopupMenu;
}

