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
// package org.allbinary.input.automation.module.generic.configuration.profile.actions.script

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/awt/event/MouseEvent.h"
// #include "javax/swing/tree/DefaultMutableTreeNode.h"
// #include "javax/swing/tree/DefaultTreeModel.h"
// #include "javax/swing/tree/TreePath.h"
#include "org/allbinary/input/automation/actions/script/JTreeInterface.h"
#include "org/allbinary/input/automation/actions/script/condition/CustomTreeNodeInterface.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/script/JPanel.h"

typedef struct GenericProfileActionScriptJPanel GenericProfileActionScriptJPanel;
struct GenericProfileActionScriptJPanel {
    JPanel base;
    JTreeInterface JTreeInterface_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    DefaultMutableTreeNode* defaultMutableTreeNode;
    GenericProfileActionScript* genericProfileActionScript;
    JTree* actionScriptJTree;
    JScrollPane* jScrollPane1;
};


GenericProfileActionScriptJPanel* GenericProfileActionScriptJPanel_new(void);

void GenericProfileActionScriptJPanel_init(GenericProfileActionScriptJPanel* this);
void GenericProfileActionScriptJPanel_updateJTree(GenericProfileActionScriptJPanel* this);
GenericProfileActionScript* GenericProfileActionScriptJPanel_getGenericProfileActionScript(GenericProfileActionScriptJPanel* this);
void GenericProfileActionScriptJPanel_setGenericProfileActionScript(GenericProfileActionScriptJPanel* this, GenericProfileActionScript* genericProfileActionScript);
JTree* GenericProfileActionScriptJPanel_getActionScriptJTree(GenericProfileActionScriptJPanel* this);
void GenericProfileActionScriptJPanel_setActionScriptJTree(GenericProfileActionScriptJPanel* this, JTree* actionScriptJTree);
static void GenericProfileActionScriptJPanel_initComponents(GenericProfileActionScriptJPanel* this);
static void GenericProfileActionScriptJPanel_actionScriptJTreeMouseReleased(GenericProfileActionScriptJPanel* this, MouseEvent* evt);
static void GenericProfileActionScriptJPanel_actionScriptJTreeMouseClicked(GenericProfileActionScriptJPanel* this, MouseEvent* evt);

static void GenericProfileActionScriptJPanel_initFields(GenericProfileActionScriptJPanel* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->defaultMutableTreeNode = DefaultMutableTreeNode_new("Root");
    this->genericProfileActionScript = nullptr;
    this->actionScriptJTree = nullptr;
    this->jScrollPane1 = nullptr;
}


void GenericProfileActionScriptJPanel_init(GenericProfileActionScriptJPanel* this) {
    JPanel_init(&this->base);
    GenericProfileActionScriptJPanel_initFields(this);
        LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
        GenericProfileActionScriptJPanel_initComponents(this);
}

GenericProfileActionScriptJPanel* GenericProfileActionScriptJPanel_new(void) {
    GenericProfileActionScriptJPanel* this = calloc(1, sizeof(GenericProfileActionScriptJPanel));
    GenericProfileActionScriptJPanel_init(this);
    return this;
}


void GenericProfileActionScriptJPanel_updateJTree(GenericProfileActionScriptJPanel* this) {
        DefaultTreeModel* defaultTreeModel = DefaultTreeModel_new(GenericProfileActionScriptJPanel_getGenericProfileActionScript(this));
        JAVA_CALL(GenericProfileActionScriptJPanel_getActionScriptJTree(this), setModel, defaultTreeModel);
        GenericProfileActionScriptJPanel_repaint(this);
        LogUtil_putF(this->logUtil, "Updated UI", this, "updateJTree");
}


GenericProfileActionScript* GenericProfileActionScriptJPanel_getGenericProfileActionScript(GenericProfileActionScriptJPanel* this) {
        return this->genericProfileActionScript;
}


void GenericProfileActionScriptJPanel_setGenericProfileActionScript(GenericProfileActionScriptJPanel* this, GenericProfileActionScript* genericProfileActionScript) {
        this->genericProfileActionScript = genericProfileActionScript;
}


JTree* GenericProfileActionScriptJPanel_getActionScriptJTree(GenericProfileActionScriptJPanel* this) {
        return this->actionScriptJTree;
}


void GenericProfileActionScriptJPanel_setActionScriptJTree(GenericProfileActionScriptJPanel* this, JTree* actionScriptJTree) {
        this->actionScriptJTree = actionScriptJTree;
}


static void GenericProfileActionScriptJPanel_initComponents(GenericProfileActionScriptJPanel* this) {
        this->jScrollPane1 = JScrollPane_new();
        this->actionScriptJTree = JTree_new();
        GenericProfileActionScriptJPanel_setLayout(this, GridLayout_new(1, 0));
        JTree_setPreferredSize(this->actionScriptJTree, Dimension_new(500, 500));
        JTree_addMouseListener(this->actionScriptJTree, MouseAdapter_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void GenericProfileActionScriptJPanel_mouseClicked(GenericProfileActionScriptJPanel* this, MouseEvent* evt) {
                GenericProfileActionScriptJPanel_actionScriptJTreeMouseClicked(this, evt);
        }
            

        void GenericProfileActionScriptJPanel_mouseReleased(GenericProfileActionScriptJPanel* this, MouseEvent* evt) {
                GenericProfileActionScriptJPanel_actionScriptJTreeMouseReleased(this, evt);
        }
#endif
);
        JScrollPane_setViewportView(this->jScrollPane1, this->actionScriptJTree);
        GenericProfileActionScriptJPanel_add(this, this->jScrollPane1);
}


static void GenericProfileActionScriptJPanel_actionScriptJTreeMouseReleased(GenericProfileActionScriptJPanel* this, MouseEvent* evt) {
        int32_t button = MouseEvent_getButton(evt);
        if (button == MouseEvent_BUTTON3) {
            TreePath* treePath = JAVA_CALL(GenericProfileActionScriptJPanel_getActionScriptJTree(this), getSelectionPath);
            if (treePath != nullptr) {
                Any* anyType = TreePath_getLastPathComponent(treePath);
                if (java_instanceof(anyType, "CustomTreeNodeInterface")) {
                    CustomTreeNodeInterface* customTreeNodeInterface = ((CustomTreeNodeInterface*) anyType);
                    JPopupMenu* jPopupMenu = CustomTreeNodeInterface_getJPopupMenu(customTreeNodeInterface);
                    JPopupMenu_show(jPopupMenu, ((JComponent*) MouseEvent_getSource(evt)), MouseEvent_getX(evt), MouseEvent_getY(evt));
                }
            }
        }
}


static void GenericProfileActionScriptJPanel_actionScriptJTreeMouseClicked(GenericProfileActionScriptJPanel* this, MouseEvent* evt) {
}

