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
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/input/automation/actions/script/condition/JPanel.h"

typedef struct TimeIntervalActionScriptConditionJPanel TimeIntervalActionScriptConditionJPanel;
struct TimeIntervalActionScriptConditionJPanel {
    JPanel base;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    TimeIntervalActionScriptConditionInterface* timeIntervalActionScriptConditionInterface;
    JLabel* jLabel1;
    JLabel* jLabel2;
    JButton* okJButton;
    JButton* timeIntervalActionJButton;
    JDialog* timeIntervalActionJDialog;
    JTextField* timeIntervalJTextField;
    JLabel* titleJLabel;
};


TimeIntervalActionScriptConditionJPanel* TimeIntervalActionScriptConditionJPanel_new(TimeIntervalActionScriptConditionInterface* timeIntervalActionScriptConditionInterface);

void TimeIntervalActionScriptConditionJPanel_init(TimeIntervalActionScriptConditionJPanel* this, TimeIntervalActionScriptConditionInterface* timeIntervalActionScriptConditionInterface);
static void TimeIntervalActionScriptConditionJPanel_set(TimeIntervalActionScriptConditionJPanel* this);
static void TimeIntervalActionScriptConditionJPanel_update(TimeIntervalActionScriptConditionJPanel* this);
JTextField* TimeIntervalActionScriptConditionJPanel_getTimeIntervalJTextField(TimeIntervalActionScriptConditionJPanel* this);
void TimeIntervalActionScriptConditionJPanel_setTimeIntervalJTextField(TimeIntervalActionScriptConditionJPanel* this, JTextField* timeIntervalJTextField);
JDialog* TimeIntervalActionScriptConditionJPanel_getTimeIntervalActionJDialog(TimeIntervalActionScriptConditionJPanel* this);
void TimeIntervalActionScriptConditionJPanel_setTimeIntervalActionJDialog(TimeIntervalActionScriptConditionJPanel* this, JDialog* timeIntervalActionJDialog);
static void TimeIntervalActionScriptConditionJPanel_initComponents(TimeIntervalActionScriptConditionJPanel* this);
static void TimeIntervalActionScriptConditionJPanel_okJButtonActionPerformed(TimeIntervalActionScriptConditionJPanel* this, ActionEvent* evt);
static void TimeIntervalActionScriptConditionJPanel_timeIntervalActionJButtonActionPerformed(TimeIntervalActionScriptConditionJPanel* this, ActionEvent* evt);

static void TimeIntervalActionScriptConditionJPanel_initFields(TimeIntervalActionScriptConditionJPanel* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    
    this->jLabel1 = nullptr;
    this->jLabel2 = nullptr;
    this->okJButton = nullptr;
    this->timeIntervalActionJButton = nullptr;
    this->timeIntervalActionJDialog = nullptr;
    this->timeIntervalJTextField = nullptr;
    this->titleJLabel = nullptr;
}


void TimeIntervalActionScriptConditionJPanel_init(TimeIntervalActionScriptConditionJPanel* this, TimeIntervalActionScriptConditionInterface* timeIntervalActionScriptConditionInterface) {
    JPanel_init(&this->base);
    TimeIntervalActionScriptConditionJPanel_initFields(this);
        LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
        TimeIntervalActionScriptConditionJPanel_initComponents(this);
        this->timeIntervalActionScriptConditionInterface = timeIntervalActionScriptConditionInterface;
        TimeIntervalActionScriptConditionJPanel_set(this);
}

TimeIntervalActionScriptConditionJPanel* TimeIntervalActionScriptConditionJPanel_new(TimeIntervalActionScriptConditionInterface* timeIntervalActionScriptConditionInterface) {
    TimeIntervalActionScriptConditionJPanel* this = calloc(1, sizeof(TimeIntervalActionScriptConditionJPanel));
    TimeIntervalActionScriptConditionJPanel_init(this, timeIntervalActionScriptConditionInterface);
    return this;
}


static void TimeIntervalActionScriptConditionJPanel_set(TimeIntervalActionScriptConditionJPanel* this) {
        JAVA_CALL(TimeIntervalActionScriptConditionJPanel_getTimeIntervalJTextField(this), setText, java_string_of(TimeIntervalActionScriptConditionInterface_getTimeDelayHelper(this->timeIntervalActionScriptConditionInterface)->delay));
        TimeIntervalActionScriptConditionInterface_log(this->timeIntervalActionScriptConditionInterface);
}


static void TimeIntervalActionScriptConditionJPanel_update(TimeIntervalActionScriptConditionJPanel* this) {
        TimeIntervalActionScriptConditionInterface_getTimeDelayHelper(this->timeIntervalActionScriptConditionInterface)->delay = java_string_of(JAVA_CALL(TimeIntervalActionScriptConditionJPanel_getTimeIntervalJTextField(this), getText));
        TimeIntervalActionScriptConditionInterface_log(this->timeIntervalActionScriptConditionInterface);
}


JTextField* TimeIntervalActionScriptConditionJPanel_getTimeIntervalJTextField(TimeIntervalActionScriptConditionJPanel* this) {
        return this->timeIntervalJTextField;
}


void TimeIntervalActionScriptConditionJPanel_setTimeIntervalJTextField(TimeIntervalActionScriptConditionJPanel* this, JTextField* timeIntervalJTextField) {
        this->timeIntervalJTextField = timeIntervalJTextField;
}


JDialog* TimeIntervalActionScriptConditionJPanel_getTimeIntervalActionJDialog(TimeIntervalActionScriptConditionJPanel* this) {
        return this->timeIntervalActionJDialog;
}


void TimeIntervalActionScriptConditionJPanel_setTimeIntervalActionJDialog(TimeIntervalActionScriptConditionJPanel* this, JDialog* timeIntervalActionJDialog) {
        this->timeIntervalActionJDialog = timeIntervalActionJDialog;
}


static void TimeIntervalActionScriptConditionJPanel_initComponents(TimeIntervalActionScriptConditionJPanel* this) {
        this->timeIntervalActionJDialog = JDialog_new();
        this->titleJLabel = JLabel_new();
        this->okJButton = JButton_new();
        this->jLabel2 = JLabel_new();
        this->timeIntervalJTextField = JTextField_new();
        this->timeIntervalActionJButton = JButton_new();
        this->jLabel1 = JLabel_new();
        JDialog_setMinimumSize(this->timeIntervalActionJDialog, Dimension_new(250, 150));
        JLabel_setText(this->titleJLabel, "Time Interval Condition Options");
        JButton_setText(this->okJButton, "OK");
        JButton_addActionListener(this->okJButton, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void TimeIntervalActionScriptConditionJPanel_actionPerformed(TimeIntervalActionScriptConditionJPanel* this, ActionEvent* evt) {
                TimeIntervalActionScriptConditionJPanel_okJButtonActionPerformed(this, evt);
        }
#endif
);
        JLabel_setText(this->jLabel2, "Time (ms):");
        GroupLayout* timeIntervalActionJDialogLayout = GroupLayout_new(JDialog_getContentPane(this->timeIntervalActionJDialog));
        JAVA_CALL(JDialog_getContentPane(this->timeIntervalActionJDialog), setLayout, timeIntervalActionJDialogLayout);
        GroupLayout_setHorizontalGroup(timeIntervalActionJDialogLayout, JAVA_CALL(GroupLayout_createParallelGroup(timeIntervalActionJDialogLayout, javax_swing->GroupLayout->Alignment->LEADING), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(timeIntervalActionJDialogLayout), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(timeIntervalActionJDialogLayout, javax_swing->GroupLayout->Alignment->TRAILING), addGroup, javax_swing->GroupLayout->Alignment->LEADING, JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(timeIntervalActionJDialogLayout), addGap, 82, 82, 82), addComponent, this->okJButton)), addGroup, javax_swing->GroupLayout->Alignment->LEADING, JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(timeIntervalActionJDialogLayout), addGap, 32, 32, 32), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(timeIntervalActionJDialogLayout, javax_swing->GroupLayout->Alignment->LEADING), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(timeIntervalActionJDialogLayout), addComponent, this->jLabel2), addGap, 16, 16, 16), addComponent, this->timeIntervalJTextField, javax_swing->GroupLayout->DEFAULT_SIZE, 85, Short_MAX_VALUE)), addComponent, this->titleJLabel)))), addContainerGap, 36, Short_MAX_VALUE)));
        GroupLayout_setVerticalGroup(timeIntervalActionJDialogLayout, JAVA_CALL(GroupLayout_createParallelGroup(timeIntervalActionJDialogLayout, javax_swing->GroupLayout->Alignment->LEADING), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(timeIntervalActionJDialogLayout), addContainerGap), addComponent, this->titleJLabel), addGap, 20, 20, 20), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(timeIntervalActionJDialogLayout, javax_swing->GroupLayout->Alignment->BASELINE), addComponent, this->jLabel2), addComponent, this->timeIntervalJTextField, javax_swing->GroupLayout->PREFERRED_SIZE, javax_swing->GroupLayout->DEFAULT_SIZE, javax_swing->GroupLayout->PREFERRED_SIZE)), addGap, 15, 15, 15), addComponent, this->okJButton), addContainerGap)));
        TimeIntervalActionScriptConditionJPanel_setMinimumSize(this, Dimension_new(100, 0));
        JButton_setText(this->timeIntervalActionJButton, "Edit");
        JButton_addActionListener(this->timeIntervalActionJButton, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void TimeIntervalActionScriptConditionJPanel_actionPerformed(TimeIntervalActionScriptConditionJPanel* this, ActionEvent* evt) {
                TimeIntervalActionScriptConditionJPanel_timeIntervalActionJButtonActionPerformed(this, evt);
        }
#endif
);
        JLabel_setText(this->jLabel1, "Time Interval:");
        GroupLayout* layout = GroupLayout_new(this);
        TimeIntervalActionScriptConditionJPanel_setLayout(this, layout);
        GroupLayout_setHorizontalGroup(layout, JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->LEADING), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(layout), addComponent, this->jLabel1), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED, javax_swing->GroupLayout->DEFAULT_SIZE, Short_MAX_VALUE), addComponent, this->timeIntervalActionJButton)));
        GroupLayout_setVerticalGroup(layout, JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->LEADING), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->BASELINE), addComponent, this->jLabel1), addComponent, this->timeIntervalActionJButton)));
}


static void TimeIntervalActionScriptConditionJPanel_okJButtonActionPerformed(TimeIntervalActionScriptConditionJPanel* this, ActionEvent* evt) {
        TimeIntervalActionScriptConditionJPanel_update(this);
        JAVA_CALL(TimeIntervalActionScriptConditionJPanel_getTimeIntervalActionJDialog(this), setVisible, false);
}


static void TimeIntervalActionScriptConditionJPanel_timeIntervalActionJButtonActionPerformed(TimeIntervalActionScriptConditionJPanel* this, ActionEvent* evt) {
        JAVA_CALL(TimeIntervalActionScriptConditionJPanel_getTimeIntervalActionJDialog(this), setVisible, true);
}

