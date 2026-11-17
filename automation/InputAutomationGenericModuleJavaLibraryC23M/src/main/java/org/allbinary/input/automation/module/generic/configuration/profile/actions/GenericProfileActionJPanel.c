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
// package org.allbinary.input.automation.module.generic.configuration.profile.actions

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/input/automation/actions/script/JTreeInterfaceFactory.h"
#include "org/allbinary/input/automation/actions/script/condition/AlwaysActionScriptCondition.h"
#include "org/allbinary/input/automation/actions/script/condition/ColorAtActionScriptCondition.h"
#include "org/allbinary/input/automation/actions/script/condition/ProfileActionScriptConditionInterface.h"
#include "org/allbinary/input/automation/actions/script/condition/TimeIntervalActionScriptCondition.h"
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/script/GenericProfileActionScriptJPanel.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/JPanel.h"

typedef struct GenericProfileActionJPanel GenericProfileActionJPanel;
struct GenericProfileActionJPanel {
    JPanel base;
    LogUtil* logUtil;
    GenericProfileAction* genericProfileAction;
    GenericProfileActionScriptJPanel* genericProfileActionScriptJPanel;
    JPanel* blankProfileActionScriptJPanel;
    JScrollPane* genericProfileActionScriptJScrollPane;
    JLabel* ifJLabel;
    JButton* newAlwaysJButton;
    JButton* newColorAtJButton;
    JButton* newTimeIntervalJButton;
};


GenericProfileActionJPanel* GenericProfileActionJPanel_new(void);

void GenericProfileActionJPanel_init(GenericProfileActionJPanel* this);
void GenericProfileActionJPanel_updateProfileActionUI(GenericProfileActionJPanel* this);
GenericProfileAction* GenericProfileActionJPanel_getGenericProfileAction(GenericProfileActionJPanel* this);
void GenericProfileActionJPanel_setGenericProfileAction(GenericProfileActionJPanel* this, GenericProfileAction* genericProfileAction);
GenericProfileActionScriptJPanel* GenericProfileActionJPanel_getGenericProfileActionScriptJPanel(GenericProfileActionJPanel* this);
void GenericProfileActionJPanel_setGenericProfileActionScriptJPanel(GenericProfileActionJPanel* this, GenericProfileActionScriptJPanel* genericProfileActionScriptJPanel);
static void GenericProfileActionJPanel_initComponents(GenericProfileActionJPanel* this);
static void GenericProfileActionJPanel_newTimeIntervalJButtonActionPerformed(GenericProfileActionJPanel* this, ActionEvent* evt);
static void GenericProfileActionJPanel_newAlwaysJButtonActionPerformed(GenericProfileActionJPanel* this, ActionEvent* evt);
static void GenericProfileActionJPanel_newColorAtJButtonActionPerformed(GenericProfileActionJPanel* this, ActionEvent* evt);

static void GenericProfileActionJPanel_initFields(GenericProfileActionJPanel* this) {
    this->logUtil = LogUtil_getInstance();
    this->genericProfileAction = nullptr;
    this->genericProfileActionScriptJPanel = nullptr;
    this->blankProfileActionScriptJPanel = nullptr;
    this->genericProfileActionScriptJScrollPane = nullptr;
    this->ifJLabel = nullptr;
    this->newAlwaysJButton = nullptr;
    this->newColorAtJButton = nullptr;
    this->newTimeIntervalJButton = nullptr;
}


void GenericProfileActionJPanel_init(GenericProfileActionJPanel* this) {
    JPanel_init(&this->base);
    GenericProfileActionJPanel_initFields(this);
        GenericProfileActionJPanel_initComponents(this);
}

GenericProfileActionJPanel* GenericProfileActionJPanel_new(void) {
    GenericProfileActionJPanel* this = calloc(1, sizeof(GenericProfileActionJPanel));
    GenericProfileActionJPanel_init(this);
    return this;
}


void GenericProfileActionJPanel_updateProfileActionUI(GenericProfileActionJPanel* this) {
        JPanel_removeAll(this->blankProfileActionScriptJPanel);
        GenericProfileActionScriptJPanel* genericProfileActionScriptJPanel = GenericProfileActionScriptJPanel_new();
        JTreeInterfaceFactory_set(JTreeInterfaceFactory_getInstance(), genericProfileActionScriptJPanel);
        GenericProfileActionJPanel_setGenericProfileActionScriptJPanel(this, genericProfileActionScriptJPanel);
        JAVA_CALL(GenericProfileActionJPanel_getGenericProfileActionScriptJPanel(this), setGenericProfileActionScript, JAVA_CALL(GenericProfileActionJPanel_getGenericProfileAction(this), getGenericProfileActionScript));
        JAVA_CALL(GenericProfileActionJPanel_getGenericProfileActionScriptJPanel(this), updateJTree);
        GroupLayout* layout = ((GroupLayout*) JPanel_getLayout(this->blankProfileActionScriptJPanel));
        GroupLayout_setHorizontalGroup(layout, JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->LEADING), addGap, 0, 395, Short_MAX_VALUE), addComponent, GenericProfileActionJPanel_getGenericProfileActionScriptJPanel(this), javax_swing->GroupLayout->PREFERRED_SIZE, javax_swing->GroupLayout->DEFAULT_SIZE, javax_swing->GroupLayout->PREFERRED_SIZE));
        GroupLayout_setVerticalGroup(layout, JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->LEADING), addGap, 0, 256, Short_MAX_VALUE), addComponent, GenericProfileActionJPanel_getGenericProfileActionScriptJPanel(this), javax_swing->GroupLayout->PREFERRED_SIZE, javax_swing->GroupLayout->DEFAULT_SIZE, javax_swing->GroupLayout->PREFERRED_SIZE));
        LogUtil_putF(this->logUtil, "Updated UI", this, "updateUI");
}


GenericProfileAction* GenericProfileActionJPanel_getGenericProfileAction(GenericProfileActionJPanel* this) {
        return this->genericProfileAction;
}


void GenericProfileActionJPanel_setGenericProfileAction(GenericProfileActionJPanel* this, GenericProfileAction* genericProfileAction) {
        this->genericProfileAction = genericProfileAction;
}


GenericProfileActionScriptJPanel* GenericProfileActionJPanel_getGenericProfileActionScriptJPanel(GenericProfileActionJPanel* this) {
        return this->genericProfileActionScriptJPanel;
}


void GenericProfileActionJPanel_setGenericProfileActionScriptJPanel(GenericProfileActionJPanel* this, GenericProfileActionScriptJPanel* genericProfileActionScriptJPanel) {
        this->genericProfileActionScriptJPanel = genericProfileActionScriptJPanel;
}


static void GenericProfileActionJPanel_initComponents(GenericProfileActionJPanel* this) {
        this->genericProfileActionScriptJScrollPane = JScrollPane_new();
        this->blankProfileActionScriptJPanel = JPanel_new();
        this->ifJLabel = JLabel_new();
        this->newColorAtJButton = JButton_new();
        this->newTimeIntervalJButton = JButton_new();
        this->newAlwaysJButton = JButton_new();
        GenericProfileActionJPanel_setMinimumSize(this, Dimension_new(440, 275));
        GenericProfileActionJPanel_setPreferredSize(this, Dimension_new(440, 275));
        JScrollPane_setPreferredSize(this->genericProfileActionScriptJScrollPane, Dimension_new(474, 270));
        JPanel_setMinimumSize(this->blankProfileActionScriptJPanel, Dimension_new(400, 200));
        GroupLayout* blankProfileActionScriptJPanelLayout = GroupLayout_new(this->blankProfileActionScriptJPanel);
        JPanel_setLayout(this->blankProfileActionScriptJPanel, blankProfileActionScriptJPanelLayout);
        GroupLayout_setHorizontalGroup(blankProfileActionScriptJPanelLayout, JAVA_CALL(GroupLayout_createParallelGroup(blankProfileActionScriptJPanelLayout, javax_swing->GroupLayout->Alignment->LEADING), addGap, 0, 9996, Short_MAX_VALUE));
        GroupLayout_setVerticalGroup(blankProfileActionScriptJPanelLayout, JAVA_CALL(GroupLayout_createParallelGroup(blankProfileActionScriptJPanelLayout, javax_swing->GroupLayout->Alignment->LEADING), addGap, 0, 9967, Short_MAX_VALUE));
        JScrollPane_setViewportView(this->genericProfileActionScriptJScrollPane, this->blankProfileActionScriptJPanel);
        JLabel_setText(this->ifJLabel, "Conditions:");
        JButton_setText(this->newColorAtJButton, "Color Range At");
        JButton_addActionListener(this->newColorAtJButton, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void GenericProfileActionJPanel_actionPerformed(GenericProfileActionJPanel* this, ActionEvent* evt) {
                GenericProfileActionJPanel_newColorAtJButtonActionPerformed(this, evt);
        }
#endif
);
        JButton_setText(this->newTimeIntervalJButton, "Time Interval");
        JButton_addActionListener(this->newTimeIntervalJButton, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void GenericProfileActionJPanel_actionPerformed(GenericProfileActionJPanel* this, ActionEvent* evt) {
                GenericProfileActionJPanel_newTimeIntervalJButtonActionPerformed(this, evt);
        }
#endif
);
        JButton_setText(this->newAlwaysJButton, "Always On/Off");
        JButton_addActionListener(this->newAlwaysJButton, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void GenericProfileActionJPanel_actionPerformed(GenericProfileActionJPanel* this, ActionEvent* evt) {
                GenericProfileActionJPanel_newAlwaysJButtonActionPerformed(this, evt);
        }
#endif
);
        GroupLayout* layout = GroupLayout_new(this);
        GenericProfileActionJPanel_setLayout(this, layout);
        GroupLayout_setHorizontalGroup(layout, JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->LEADING), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(layout), addComponent, this->ifJLabel), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addComponent, this->newColorAtJButton), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addComponent, this->newTimeIntervalJButton), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addComponent, this->newAlwaysJButton), addContainerGap, 61, Short_MAX_VALUE)), addComponent, this->genericProfileActionScriptJScrollPane, javax_swing->GroupLayout->DEFAULT_SIZE, 440, Short_MAX_VALUE));
        GroupLayout_setVerticalGroup(layout, JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->LEADING), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(layout), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->BASELINE), addComponent, this->ifJLabel, javax_swing->GroupLayout->PREFERRED_SIZE, 14, javax_swing->GroupLayout->PREFERRED_SIZE), addComponent, this->newColorAtJButton), addComponent, this->newTimeIntervalJButton), addComponent, this->newAlwaysJButton)), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addComponent, this->genericProfileActionScriptJScrollPane, javax_swing->GroupLayout->DEFAULT_SIZE, 246, Short_MAX_VALUE)));
}


static void GenericProfileActionJPanel_newTimeIntervalJButtonActionPerformed(GenericProfileActionJPanel* this, ActionEvent* evt) {
        LogUtil_putF(this->logUtil, "New Time Interval Action Condition", this, "newTimeIntervalJButtonActionPerformed");
        JAVA_CALL(JAVA_CALL(GenericProfileActionJPanel_getGenericProfileAction(this), getGenericProfileActionScript), addCondition, ((ProfileActionScriptConditionInterface*) TimeIntervalActionScriptCondition_new()));
        GenericProfileActionJPanel_updateProfileActionUI(this);
}


static void GenericProfileActionJPanel_newAlwaysJButtonActionPerformed(GenericProfileActionJPanel* this, ActionEvent* evt) {
        LogUtil_putF(this->logUtil, "New EveryTime Action Condition", this, "newEveryTimeJButtonActionPerformed");
        JAVA_CALL(JAVA_CALL(GenericProfileActionJPanel_getGenericProfileAction(this), getGenericProfileActionScript), addCondition, ((ProfileActionScriptConditionInterface*) AlwaysActionScriptCondition_new()));
        GenericProfileActionJPanel_updateProfileActionUI(this);
}


static void GenericProfileActionJPanel_newColorAtJButtonActionPerformed(GenericProfileActionJPanel* this, ActionEvent* evt) {
        LogUtil_putF(this->logUtil, "New Color At Action Condition", this, "newColorAtJButtonActionPerformed");
        JAVA_CALL(JAVA_CALL(GenericProfileActionJPanel_getGenericProfileAction(this), getGenericProfileActionScript), addCondition, ((ProfileActionScriptConditionInterface*) ColorAtActionScriptCondition_new()));
        GenericProfileActionJPanel_updateProfileActionUI(this);
}

