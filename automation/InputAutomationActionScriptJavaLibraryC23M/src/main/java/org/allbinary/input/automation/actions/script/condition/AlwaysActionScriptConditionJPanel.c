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

typedef struct AlwaysActionScriptConditionJPanel AlwaysActionScriptConditionJPanel;
struct AlwaysActionScriptConditionJPanel {
    JPanel base;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    AlwaysActionScriptConditionInterface* alwaysActionScriptConditionInterface;
    JButton* alwaysActionJButton;
    JDialog* alwaysActionJDialog;
    JComboBox* alwaysJComboBox;
    JLabel* jLabel1;
    JLabel* jLabel2;
    JButton* okJButton;
    JLabel* titleJLabel;
};


AlwaysActionScriptConditionJPanel* AlwaysActionScriptConditionJPanel_new(AlwaysActionScriptConditionInterface* alwaysActionScriptConditionInterface);

void AlwaysActionScriptConditionJPanel_init(AlwaysActionScriptConditionJPanel* this, AlwaysActionScriptConditionInterface* alwaysActionScriptConditionInterface);
static void AlwaysActionScriptConditionJPanel_set(AlwaysActionScriptConditionJPanel* this);
static void AlwaysActionScriptConditionJPanel_update(AlwaysActionScriptConditionJPanel* this);
JDialog* AlwaysActionScriptConditionJPanel_getAlwaysActionJDialog(AlwaysActionScriptConditionJPanel* this);
void AlwaysActionScriptConditionJPanel_setAlwaysActionJDialog(AlwaysActionScriptConditionJPanel* this, JDialog* alwaysActionJDialog);
static void AlwaysActionScriptConditionJPanel_initComponents(AlwaysActionScriptConditionJPanel* this);
static void AlwaysActionScriptConditionJPanel_okJButtonActionPerformed(AlwaysActionScriptConditionJPanel* this, ActionEvent* evt);
static void AlwaysActionScriptConditionJPanel_alwaysActionJButtonActionPerformed(AlwaysActionScriptConditionJPanel* this, ActionEvent* evt);

static void AlwaysActionScriptConditionJPanel_initFields(AlwaysActionScriptConditionJPanel* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    
    this->alwaysActionJButton = nullptr;
    this->alwaysActionJDialog = nullptr;
    this->alwaysJComboBox = nullptr;
    this->jLabel1 = nullptr;
    this->jLabel2 = nullptr;
    this->okJButton = nullptr;
    this->titleJLabel = nullptr;
}


void AlwaysActionScriptConditionJPanel_init(AlwaysActionScriptConditionJPanel* this, AlwaysActionScriptConditionInterface* alwaysActionScriptConditionInterface) {
    JPanel_init(&this->base);
    AlwaysActionScriptConditionJPanel_initFields(this);
        LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
        AlwaysActionScriptConditionJPanel_initComponents(this);
        this->alwaysActionScriptConditionInterface = alwaysActionScriptConditionInterface;
        AlwaysActionScriptConditionJPanel_set(this);
}

AlwaysActionScriptConditionJPanel* AlwaysActionScriptConditionJPanel_new(AlwaysActionScriptConditionInterface* alwaysActionScriptConditionInterface) {
    AlwaysActionScriptConditionJPanel* this = calloc(1, sizeof(AlwaysActionScriptConditionJPanel));
    AlwaysActionScriptConditionJPanel_init(this, alwaysActionScriptConditionInterface);
    return this;
}


static void AlwaysActionScriptConditionJPanel_set(AlwaysActionScriptConditionJPanel* this) {
        if (AlwaysActionScriptConditionInterface_isIsOn(this->alwaysActionScriptConditionInterface)) {
            JComboBox_setSelectedIndex(this->alwaysJComboBox, 0);
        } else {
            JComboBox_setSelectedIndex(this->alwaysJComboBox, 1);
        }
        AlwaysActionScriptConditionInterface_log(this->alwaysActionScriptConditionInterface);
}


static void AlwaysActionScriptConditionJPanel_update(AlwaysActionScriptConditionJPanel* this) {
        if (JComboBox_getSelectedIndex(this->alwaysJComboBox) == 0) {
            AlwaysActionScriptConditionInterface_setIsOn(this->alwaysActionScriptConditionInterface, true);
        } else {
            AlwaysActionScriptConditionInterface_setIsOn(this->alwaysActionScriptConditionInterface, false);
        }
        AlwaysActionScriptConditionInterface_log(this->alwaysActionScriptConditionInterface);
}


JDialog* AlwaysActionScriptConditionJPanel_getAlwaysActionJDialog(AlwaysActionScriptConditionJPanel* this) {
        return this->alwaysActionJDialog;
}


void AlwaysActionScriptConditionJPanel_setAlwaysActionJDialog(AlwaysActionScriptConditionJPanel* this, JDialog* alwaysActionJDialog) {
        this->alwaysActionJDialog = alwaysActionJDialog;
}


static void AlwaysActionScriptConditionJPanel_initComponents(AlwaysActionScriptConditionJPanel* this) {
        this->alwaysActionJDialog = JDialog_new();
        this->titleJLabel = JLabel_new();
        this->okJButton = JButton_new();
        this->jLabel2 = JLabel_new();
        this->alwaysJComboBox = JComboBox_new();
        this->alwaysActionJButton = JButton_new();
        this->jLabel1 = JLabel_new();
        JDialog_setMinimumSize(this->alwaysActionJDialog, Dimension_new(250, 150));
        JLabel_setText(this->titleJLabel, "Always Condition Options");
        JButton_setText(this->okJButton, "OK");
        JButton_addActionListener(this->okJButton, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void AlwaysActionScriptConditionJPanel_actionPerformed(AlwaysActionScriptConditionJPanel* this, ActionEvent* evt) {
                AlwaysActionScriptConditionJPanel_okJButtonActionPerformed(this, evt);
        }
#endif
);
        JLabel_setText(this->jLabel2, "On:");
        JComboBox_setModel(this->alwaysJComboBox, DefaultComboBoxModel_new(((const char**) java_array_from(sizeof(const char*), sizeof((const char*[]){ "true", "false" }) / sizeof(const char*), (const char*[]){ "true", "false" }))));
        GroupLayout* alwaysActionJDialogLayout = GroupLayout_new(JDialog_getContentPane(this->alwaysActionJDialog));
        JAVA_CALL(JDialog_getContentPane(this->alwaysActionJDialog), setLayout, alwaysActionJDialogLayout);
        GroupLayout_setHorizontalGroup(alwaysActionJDialogLayout, JAVA_CALL(GroupLayout_createParallelGroup(alwaysActionJDialogLayout, javax_swing->GroupLayout->Alignment->LEADING), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(alwaysActionJDialogLayout), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(alwaysActionJDialogLayout, javax_swing->GroupLayout->Alignment->LEADING), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(alwaysActionJDialogLayout), addGap, 47, 47, 47), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(alwaysActionJDialogLayout, javax_swing->GroupLayout->Alignment->LEADING, false), addGroup, javax_swing->GroupLayout->Alignment->TRAILING, JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(alwaysActionJDialogLayout), addComponent, this->jLabel2), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED, javax_swing->GroupLayout->DEFAULT_SIZE, Short_MAX_VALUE), addComponent, this->alwaysJComboBox, javax_swing->GroupLayout->PREFERRED_SIZE, javax_swing->GroupLayout->DEFAULT_SIZE, javax_swing->GroupLayout->PREFERRED_SIZE)), addComponent, this->titleJLabel))), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(alwaysActionJDialogLayout), addGap, 79, 79, 79), addComponent, this->okJButton))), addContainerGap, 45, Short_MAX_VALUE)));
        GroupLayout_setVerticalGroup(alwaysActionJDialogLayout, JAVA_CALL(GroupLayout_createParallelGroup(alwaysActionJDialogLayout, javax_swing->GroupLayout->Alignment->LEADING), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(alwaysActionJDialogLayout), addContainerGap), addComponent, this->titleJLabel), addGap, 20, 20, 20), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(alwaysActionJDialogLayout, javax_swing->GroupLayout->Alignment->BASELINE), addComponent, this->alwaysJComboBox, javax_swing->GroupLayout->PREFERRED_SIZE, javax_swing->GroupLayout->DEFAULT_SIZE, javax_swing->GroupLayout->PREFERRED_SIZE), addComponent, this->jLabel2)), addGap, 15, 15, 15), addComponent, this->okJButton), addContainerGap)));
        AlwaysActionScriptConditionJPanel_setMinimumSize(this, Dimension_new(100, 0));
        JButton_setText(this->alwaysActionJButton, "Edit");
        JButton_addActionListener(this->alwaysActionJButton, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void AlwaysActionScriptConditionJPanel_actionPerformed(AlwaysActionScriptConditionJPanel* this, ActionEvent* evt) {
                AlwaysActionScriptConditionJPanel_alwaysActionJButtonActionPerformed(this, evt);
        }
#endif
);
        JLabel_setText(this->jLabel1, "Always:");
        GroupLayout* layout = GroupLayout_new(this);
        AlwaysActionScriptConditionJPanel_setLayout(this, layout);
        GroupLayout_setHorizontalGroup(layout, JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->LEADING), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(layout), addComponent, this->jLabel1), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED, 33, Short_MAX_VALUE), addComponent, this->alwaysActionJButton)));
        GroupLayout_setVerticalGroup(layout, JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->LEADING), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->BASELINE), addComponent, this->jLabel1), addComponent, this->alwaysActionJButton)));
}


static void AlwaysActionScriptConditionJPanel_okJButtonActionPerformed(AlwaysActionScriptConditionJPanel* this, ActionEvent* evt) {
        AlwaysActionScriptConditionJPanel_update(this);
        JAVA_CALL(AlwaysActionScriptConditionJPanel_getAlwaysActionJDialog(this), setVisible, false);
}


static void AlwaysActionScriptConditionJPanel_alwaysActionJButtonActionPerformed(AlwaysActionScriptConditionJPanel* this, ActionEvent* evt) {
        JAVA_CALL(AlwaysActionScriptConditionJPanel_getAlwaysActionJDialog(this), setVisible, true);
}

