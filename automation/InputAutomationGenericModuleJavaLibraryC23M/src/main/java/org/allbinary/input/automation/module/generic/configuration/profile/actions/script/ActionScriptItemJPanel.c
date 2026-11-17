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
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/script/JPanel.h"

typedef struct ActionScriptItemJPanel ActionScriptItemJPanel;
struct ActionScriptItemJPanel {
    JPanel base;
    JPanel* childActionScriptConditionJPanel;
    JPanel* newActionScriptConditionJPanel;
    JPanel* newActionScriptInputJPanel;
    JPanel* removeJPanel;
    JPanel* scriptItemJPanel;
};


ActionScriptItemJPanel* ActionScriptItemJPanel_new(void);

void ActionScriptItemJPanel_init(ActionScriptItemJPanel* this);
JPanel* ActionScriptItemJPanel_getNewActionScriptInputJPanel(ActionScriptItemJPanel* this);
void ActionScriptItemJPanel_setNewActionScriptInputJPanel(ActionScriptItemJPanel* this, JPanel* newActionScriptInputJPanel);
JPanel* ActionScriptItemJPanel_getRemoveJPanel(ActionScriptItemJPanel* this);
void ActionScriptItemJPanel_setRemoveJPanel(ActionScriptItemJPanel* this, JPanel* removeJPanel);
JPanel* ActionScriptItemJPanel_getScriptItemJPanel(ActionScriptItemJPanel* this);
void ActionScriptItemJPanel_setScriptItemJPanel(ActionScriptItemJPanel* this, JPanel* scriptItemJPanel);
JPanel* ActionScriptItemJPanel_getNewActionScriptConditionJPanel(ActionScriptItemJPanel* this);
void ActionScriptItemJPanel_setNewActionScriptConditionJPanel(ActionScriptItemJPanel* this, JPanel* newActionScriptConditionJPanel);
JPanel* ActionScriptItemJPanel_getChildActionScriptConditionJPanel(ActionScriptItemJPanel* this);
void ActionScriptItemJPanel_setChildActionScriptConditionJPanel(ActionScriptItemJPanel* this, JPanel* childActionScriptConditionJPanel);
static void ActionScriptItemJPanel_initComponents(ActionScriptItemJPanel* this);

static void ActionScriptItemJPanel_initFields(ActionScriptItemJPanel* this) {
    this->childActionScriptConditionJPanel = nullptr;
    this->newActionScriptConditionJPanel = nullptr;
    this->newActionScriptInputJPanel = nullptr;
    this->removeJPanel = nullptr;
    this->scriptItemJPanel = nullptr;
}


void ActionScriptItemJPanel_init(ActionScriptItemJPanel* this) {
    JPanel_init(&this->base);
    ActionScriptItemJPanel_initFields(this);
        ActionScriptItemJPanel_initComponents(this);
}

ActionScriptItemJPanel* ActionScriptItemJPanel_new(void) {
    ActionScriptItemJPanel* this = calloc(1, sizeof(ActionScriptItemJPanel));
    ActionScriptItemJPanel_init(this);
    return this;
}


JPanel* ActionScriptItemJPanel_getNewActionScriptInputJPanel(ActionScriptItemJPanel* this) {
        return this->newActionScriptInputJPanel;
}


void ActionScriptItemJPanel_setNewActionScriptInputJPanel(ActionScriptItemJPanel* this, JPanel* newActionScriptInputJPanel) {
        this->newActionScriptInputJPanel = newActionScriptInputJPanel;
}


JPanel* ActionScriptItemJPanel_getRemoveJPanel(ActionScriptItemJPanel* this) {
        return this->removeJPanel;
}


void ActionScriptItemJPanel_setRemoveJPanel(ActionScriptItemJPanel* this, JPanel* removeJPanel) {
        this->removeJPanel = removeJPanel;
}


JPanel* ActionScriptItemJPanel_getScriptItemJPanel(ActionScriptItemJPanel* this) {
        return this->scriptItemJPanel;
}


void ActionScriptItemJPanel_setScriptItemJPanel(ActionScriptItemJPanel* this, JPanel* scriptItemJPanel) {
        this->scriptItemJPanel = scriptItemJPanel;
}


JPanel* ActionScriptItemJPanel_getNewActionScriptConditionJPanel(ActionScriptItemJPanel* this) {
        return this->newActionScriptConditionJPanel;
}


void ActionScriptItemJPanel_setNewActionScriptConditionJPanel(ActionScriptItemJPanel* this, JPanel* newActionScriptConditionJPanel) {
        this->newActionScriptConditionJPanel = newActionScriptConditionJPanel;
}


JPanel* ActionScriptItemJPanel_getChildActionScriptConditionJPanel(ActionScriptItemJPanel* this) {
        return this->childActionScriptConditionJPanel;
}


void ActionScriptItemJPanel_setChildActionScriptConditionJPanel(ActionScriptItemJPanel* this, JPanel* childActionScriptConditionJPanel) {
        this->childActionScriptConditionJPanel = childActionScriptConditionJPanel;
}


static void ActionScriptItemJPanel_initComponents(ActionScriptItemJPanel* this) {
        this->newActionScriptInputJPanel = JPanel_new();
        this->childActionScriptConditionJPanel = JPanel_new();
        this->newActionScriptConditionJPanel = JPanel_new();
        this->scriptItemJPanel = JPanel_new();
        this->removeJPanel = JPanel_new();
        JPanel_setLayout(this->newActionScriptInputJPanel, GridLayout_new(1, 0));
        GroupLayout* childActionScriptConditionJPanelLayout = GroupLayout_new(this->childActionScriptConditionJPanel);
        JPanel_setLayout(this->childActionScriptConditionJPanel, childActionScriptConditionJPanelLayout);
        GroupLayout_setHorizontalGroup(childActionScriptConditionJPanelLayout, JAVA_CALL(GroupLayout_createParallelGroup(childActionScriptConditionJPanelLayout, javax_swing->GroupLayout->Alignment->LEADING), addGap, 0, 229, Short_MAX_VALUE));
        GroupLayout_setVerticalGroup(childActionScriptConditionJPanelLayout, JAVA_CALL(GroupLayout_createParallelGroup(childActionScriptConditionJPanelLayout, javax_swing->GroupLayout->Alignment->LEADING), addGap, 0, 8, Short_MAX_VALUE));
        JPanel_setLayout(this->newActionScriptConditionJPanel, GridLayout_new(1, 0));
        JPanel_setLayout(this->scriptItemJPanel, GridLayout_new(1, 1));
        JPanel_setLayout(this->removeJPanel, GridLayout_new(1, 1));
        JPanel_setMinimumSize(this->removeJPanel, Dimension_new(30, 20));
        GroupLayout* layout = GroupLayout_new(this);
        ActionScriptItemJPanel_setLayout(this, layout);
        GroupLayout_setHorizontalGroup(layout, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->LEADING), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(layout), addComponent, this->scriptItemJPanel, javax_swing->GroupLayout->PREFERRED_SIZE, 167, javax_swing->GroupLayout->PREFERRED_SIZE), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addComponent, this->removeJPanel, javax_swing->GroupLayout->DEFAULT_SIZE, 56, Short_MAX_VALUE)), addComponent, this->newActionScriptInputJPanel, javax_swing->GroupLayout->DEFAULT_SIZE, 229, Short_MAX_VALUE), addComponent, this->newActionScriptConditionJPanel, javax_swing->GroupLayout->DEFAULT_SIZE, 229, Short_MAX_VALUE), addComponent, this->childActionScriptConditionJPanel, javax_swing->GroupLayout->DEFAULT_SIZE, javax_swing->GroupLayout->DEFAULT_SIZE, Short_MAX_VALUE));
        GroupLayout_setVerticalGroup(layout, JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->LEADING), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(layout), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->LEADING), addComponent, this->scriptItemJPanel, javax_swing->GroupLayout->DEFAULT_SIZE, 31, Short_MAX_VALUE), addComponent, this->removeJPanel, javax_swing->GroupLayout->Alignment->TRAILING, javax_swing->GroupLayout->DEFAULT_SIZE, 31, Short_MAX_VALUE)), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addComponent, this->childActionScriptConditionJPanel, javax_swing->GroupLayout->PREFERRED_SIZE, javax_swing->GroupLayout->DEFAULT_SIZE, javax_swing->GroupLayout->PREFERRED_SIZE), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addComponent, this->newActionScriptConditionJPanel, javax_swing->GroupLayout->PREFERRED_SIZE, 28, javax_swing->GroupLayout->PREFERRED_SIZE), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addComponent, this->newActionScriptInputJPanel, javax_swing->GroupLayout->PREFERRED_SIZE, 30, javax_swing->GroupLayout->PREFERRED_SIZE)));
}

