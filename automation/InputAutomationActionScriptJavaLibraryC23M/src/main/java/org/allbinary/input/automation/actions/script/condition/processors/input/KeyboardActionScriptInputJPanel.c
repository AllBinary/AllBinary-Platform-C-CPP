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
#include "org/allbinary/input/KeySingletonFactory.h"
#include "org/allbinary/input/automation/robot/InputRobot.h"
#include "org/allbinary/input/automation/robot/InputRobotFactory.h"
#include "org/allbinary/input/automation/robot/TempInputRobotNames.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringValidationUtil.h"
#include "org/allbinary/string/CommonPhoneStrings.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/input/automation/actions/script/condition/processors/input/JPanel.h"

typedef struct KeyboardActionScriptInputJPanel KeyboardActionScriptInputJPanel;
struct KeyboardActionScriptInputJPanel {
    JPanel base;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    KeyboardActionScriptInputInterface* keyActionScriptInputInterface;
    JLabel* addKeyJLabel;
    JLabel* delayBetweenJLabel;
    JTextField* delayJTextField;
    JLabel* holdTimeJLabel;
    JComboBox* inputAutomationTypeJComboBox;
    JLabel* inputTypeJLabel;
    JLabel* jLabel1;
    JPanel* jPanel1;
    JButton* keyActionJButton;
    JDialog* keyActionJDialog;
    JComboBox* keyIntegerJComboBox;
    JComboBox* keyNameJComboBox;
    JRadioButton* normalJRadioButton;
    JButton* okJButton;
    JRadioButton* pressJRadioButton;
    JRadioButton* releaseJRadioButton;
    JRadioButton* sequenceJRadioButton;
    JRadioButton* simultaneousJRadioButton;
    JLabel* testJLabel;
    JTextField* textJTextField;
    JTextField* timeJTextField;
    JLabel* titleJLabel;
};


KeyboardActionScriptInputJPanel* KeyboardActionScriptInputJPanel_new(KeyboardActionScriptInputInterface* keyActionScriptInputInterface);

void KeyboardActionScriptInputJPanel_init(KeyboardActionScriptInputJPanel* this, KeyboardActionScriptInputInterface* keyActionScriptInputInterface);
static void KeyboardActionScriptInputJPanel_set(KeyboardActionScriptInputJPanel* this);
static void KeyboardActionScriptInputJPanel_updateInputType(KeyboardActionScriptInputJPanel* this);
static int32_t KeyboardActionScriptInputJPanel_getSelectedKey(KeyboardActionScriptInputJPanel* this);
static void KeyboardActionScriptInputJPanel_updateKeys(KeyboardActionScriptInputJPanel* this);
static void KeyboardActionScriptInputJPanel_update(KeyboardActionScriptInputJPanel* this);
JDialog* KeyboardActionScriptInputJPanel_getKeyActionJDialog(KeyboardActionScriptInputJPanel* this);
void KeyboardActionScriptInputJPanel_setKeyActionJDialog(KeyboardActionScriptInputJPanel* this, JDialog* keyActionJDialog);
static void KeyboardActionScriptInputJPanel_initComponents(KeyboardActionScriptInputJPanel* this);
static void KeyboardActionScriptInputJPanel_prependText(KeyboardActionScriptInputJPanel* this, int32_t integer);
static void KeyboardActionScriptInputJPanel_keyIntegerJComboBoxActionPerformed(KeyboardActionScriptInputJPanel* this, ActionEvent* evt);
static void KeyboardActionScriptInputJPanel_sequenceJRadioButtonActionPerformed(KeyboardActionScriptInputJPanel* this, ActionEvent* evt);
static void KeyboardActionScriptInputJPanel_simultaneousJRadioButtonActionPerformed(KeyboardActionScriptInputJPanel* this, ActionEvent* evt);
static void KeyboardActionScriptInputJPanel_keyNameJComboBoxActionPerformed(KeyboardActionScriptInputJPanel* this, ActionEvent* evt);
static void KeyboardActionScriptInputJPanel_okJButtonActionPerformed(KeyboardActionScriptInputJPanel* this, ActionEvent* evt);
static void KeyboardActionScriptInputJPanel_keyActionJButtonActionPerformed(KeyboardActionScriptInputJPanel* this, ActionEvent* evt);
static void KeyboardActionScriptInputJPanel_normalJRadioButtonActionPerformed(KeyboardActionScriptInputJPanel* this, ActionEvent* evt);
static void KeyboardActionScriptInputJPanel_releaseJRadioButtonActionPerformed(KeyboardActionScriptInputJPanel* this, ActionEvent* evt);
static void KeyboardActionScriptInputJPanel_pressJRadioButtonActionPerformed(KeyboardActionScriptInputJPanel* this, ActionEvent* evt);

static void KeyboardActionScriptInputJPanel_initFields(KeyboardActionScriptInputJPanel* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    
    this->addKeyJLabel = nullptr;
    this->delayBetweenJLabel = nullptr;
    this->delayJTextField = nullptr;
    this->holdTimeJLabel = nullptr;
    this->inputAutomationTypeJComboBox = nullptr;
    this->inputTypeJLabel = nullptr;
    this->jLabel1 = nullptr;
    this->jPanel1 = nullptr;
    this->keyActionJButton = nullptr;
    this->keyActionJDialog = nullptr;
    this->keyIntegerJComboBox = nullptr;
    this->keyNameJComboBox = nullptr;
    this->normalJRadioButton = nullptr;
    this->okJButton = nullptr;
    this->pressJRadioButton = nullptr;
    this->releaseJRadioButton = nullptr;
    this->sequenceJRadioButton = nullptr;
    this->simultaneousJRadioButton = nullptr;
    this->testJLabel = nullptr;
    this->textJTextField = nullptr;
    this->timeJTextField = nullptr;
    this->titleJLabel = nullptr;
}


void KeyboardActionScriptInputJPanel_init(KeyboardActionScriptInputJPanel* this, KeyboardActionScriptInputInterface* keyActionScriptInputInterface) {
    JPanel_init(&this->base);
    KeyboardActionScriptInputJPanel_initFields(this);
        LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
        KeyboardActionScriptInputJPanel_initComponents(this);
        this->keyActionScriptInputInterface = keyActionScriptInputInterface;
        DefaultComboBoxModel* defaultComboBoxModel = DefaultComboBoxModel_new();
        DefaultComboBoxModel_addElement(defaultComboBoxModel, TempInputRobotNames_DX_NAME);
        DefaultComboBoxModel_addElement(defaultComboBoxModel, InputRobot_NAME);
        JComboBox_setModel(this->inputAutomationTypeJComboBox, defaultComboBoxModel);
        JComboBox_setModel(this->keyNameJComboBox, KeyNameDefaultComboBoxModelFactory_getInstance());
        JComboBox_setModel(this->keyIntegerJComboBox, KeyCharDefaultComboBoxModelFactory_getInstance());
        if (KeyboardActionScriptInputInterface_isNormal(this->keyActionScriptInputInterface)) {
            JRadioButton_setSelected(this->normalJRadioButton, true);
            JRadioButton_setSelected(this->pressJRadioButton, false);
            JRadioButton_setSelected(this->releaseJRadioButton, false);
        } else if (KeyboardActionScriptInputInterface_isPress(this->keyActionScriptInputInterface)) {
            JRadioButton_setSelected(this->normalJRadioButton, false);
            JRadioButton_setSelected(this->pressJRadioButton, true);
            JRadioButton_setSelected(this->releaseJRadioButton, false);
        } else if (KeyboardActionScriptInputInterface_isRelease(this->keyActionScriptInputInterface)) {
            JRadioButton_setSelected(this->normalJRadioButton, false);
            JRadioButton_setSelected(this->pressJRadioButton, false);
            JRadioButton_setSelected(this->releaseJRadioButton, true);
        }
        KeyboardActionScriptInputJPanel_set(this);
}

KeyboardActionScriptInputJPanel* KeyboardActionScriptInputJPanel_new(KeyboardActionScriptInputInterface* keyActionScriptInputInterface) {
    KeyboardActionScriptInputJPanel* this = calloc(1, sizeof(KeyboardActionScriptInputJPanel));
    KeyboardActionScriptInputJPanel_init(this, keyActionScriptInputInterface);
    return this;
}


static void KeyboardActionScriptInputJPanel_set(KeyboardActionScriptInputJPanel* this) {
        ComboBoxModel* inputTypeComboBoxModel = JComboBox_getModel(this->inputAutomationTypeJComboBox);
        ComboBoxModel_setSelectedItem(inputTypeComboBoxModel, JAVA_CALL(KeyboardActionScriptInputInterface_getInputRobotInterface(this->keyActionScriptInputInterface), getName));
        JTextField_setText(this->textJTextField, KeyboardActionScriptInputInterface_getText(this->keyActionScriptInputInterface));
        JTextField_setText(this->delayJTextField, java_string_of(KeyboardActionScriptInputInterface_getDelayBetweenKeys(this->keyActionScriptInputInterface)));
        JTextField_setText(this->timeJTextField, java_string_of(KeyboardActionScriptInputInterface_getTime(this->keyActionScriptInputInterface)));
        KeyboardActionScriptInputInterface_log(this->keyActionScriptInputInterface);
}


// throws Exception
static void KeyboardActionScriptInputJPanel_updateInputType(KeyboardActionScriptInputJPanel* this) {
        ComboBoxModel* comboBoxModel = JComboBox_getModel(this->inputAutomationTypeJComboBox);
        const char* selectedItem = ((const char*) ComboBoxModel_getSelectedItem(comboBoxModel));
        if (!StringValidationUtil_isEmpty(StringValidationUtil_getInstance(), selectedItem)) {
            KeyboardActionScriptInputInterface_setInputRobotInterface(this->keyActionScriptInputInterface, InputRobotFactory_get(InputRobotFactory_getInstance(), selectedItem));
        }
}


static int32_t KeyboardActionScriptInputJPanel_getSelectedKey(KeyboardActionScriptInputJPanel* this) {
        ComboBoxModel* comboBoxModel = JComboBox_getModel(this->keyNameJComboBox);
        const char* selectedItem = ((const char*) ComboBoxModel_getSelectedItem(comboBoxModel));
        if (!StringValidationUtil_isEmpty(StringValidationUtil_getInstance(), selectedItem)) {
            return ((int32_t) JAVA_CALL(KeySingletonFactory_getHashtable(), get, selectedItem));
        }
        return nullptr;
}


static void KeyboardActionScriptInputJPanel_updateKeys(KeyboardActionScriptInputJPanel* this) {
        const char* text = JTextField_getText(this->textJTextField);
        KeyboardActionScriptInputInterface_setText(this->keyActionScriptInputInterface, text);
}


// throws Exception
static void KeyboardActionScriptInputJPanel_update(KeyboardActionScriptInputJPanel* this) {
        KeyboardActionScriptInputJPanel_updateInputType(this);
        KeyboardActionScriptInputJPanel_updateKeys(this);
        KeyboardActionScriptInputInterface_setTime(this->keyActionScriptInputInterface, JAVA_CALL(java_string_of(JTextField_getText(this->timeJTextField)), intValue));
        KeyboardActionScriptInputInterface_log(this->keyActionScriptInputInterface);
}


JDialog* KeyboardActionScriptInputJPanel_getKeyActionJDialog(KeyboardActionScriptInputJPanel* this) {
        return this->keyActionJDialog;
}


void KeyboardActionScriptInputJPanel_setKeyActionJDialog(KeyboardActionScriptInputJPanel* this, JDialog* keyActionJDialog) {
        this->keyActionJDialog = keyActionJDialog;
}


static void KeyboardActionScriptInputJPanel_initComponents(KeyboardActionScriptInputJPanel* this) {
        this->keyActionJDialog = JDialog_new();
        this->titleJLabel = JLabel_new();
        this->addKeyJLabel = JLabel_new();
        this->keyNameJComboBox = JComboBox_new();
        this->timeJTextField = JTextField_new();
        this->holdTimeJLabel = JLabel_new();
        this->inputAutomationTypeJComboBox = JComboBox_new();
        this->inputTypeJLabel = JLabel_new();
        this->delayJTextField = JTextField_new();
        this->delayBetweenJLabel = JLabel_new();
        this->testJLabel = JLabel_new();
        this->textJTextField = JTextField_new();
        this->pressJRadioButton = JRadioButton_new();
        this->releaseJRadioButton = JRadioButton_new();
        this->normalJRadioButton = JRadioButton_new();
        this->simultaneousJRadioButton = JRadioButton_new();
        this->sequenceJRadioButton = JRadioButton_new();
        this->jPanel1 = JPanel_new();
        this->okJButton = JButton_new();
        this->keyIntegerJComboBox = JComboBox_new();
        this->keyActionJButton = JButton_new();
        this->jLabel1 = JLabel_new();
        JDialog_setMinimumSize(this->keyActionJDialog, Dimension_new(255, 280));
        JLabel_setHorizontalAlignment(this->titleJLabel, javax_swing->SwingConstants->CENTER);
        JLabel_setText(this->titleJLabel, "Keyboard Input Options");
        JLabel_setText(this->addKeyJLabel, "Add Key:");
        JComboBox_addActionListener(this->keyNameJComboBox, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void KeyboardActionScriptInputJPanel_actionPerformed(KeyboardActionScriptInputJPanel* this, ActionEvent* evt) {
                KeyboardActionScriptInputJPanel_keyNameJComboBoxActionPerformed(this, evt);
        }
#endif
);
        JTextField_setText(this->timeJTextField, CommonPhoneStrings_getInstance()->ZERO);
        JLabel_setText(this->holdTimeJLabel, "Hold Time (ms):");
        JLabel_setText(this->inputTypeJLabel, "Input Type:");
        JTextField_setText(this->delayJTextField, CommonPhoneStrings_getInstance()->ZERO);
        JLabel_setText(this->delayBetweenJLabel, "Delay Between Keys (ms):");
        JLabel_setText(this->testJLabel, "Text:");
        JTextField_setText(this->textJTextField, CommonPhoneStrings_getInstance()->ZERO);
        JRadioButton_setText(this->pressJRadioButton, "Press");
        JRadioButton_setBorder(this->pressJRadioButton, JAVA_CALL(javax_swing->BorderFactory, createEmptyBorder, 0, 0, 0, 0));
        JRadioButton_setMargin(this->pressJRadioButton, Insets_new(0, 0, 0, 0));
        JRadioButton_addActionListener(this->pressJRadioButton, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void KeyboardActionScriptInputJPanel_actionPerformed(KeyboardActionScriptInputJPanel* this, ActionEvent* evt) {
                KeyboardActionScriptInputJPanel_pressJRadioButtonActionPerformed(this, evt);
        }
#endif
);
        JRadioButton_setText(this->releaseJRadioButton, "Release");
        JRadioButton_setBorder(this->releaseJRadioButton, JAVA_CALL(javax_swing->BorderFactory, createEmptyBorder, 0, 0, 0, 0));
        JRadioButton_setMargin(this->releaseJRadioButton, Insets_new(0, 0, 0, 0));
        JRadioButton_addActionListener(this->releaseJRadioButton, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void KeyboardActionScriptInputJPanel_actionPerformed(KeyboardActionScriptInputJPanel* this, ActionEvent* evt) {
                KeyboardActionScriptInputJPanel_releaseJRadioButtonActionPerformed(this, evt);
        }
#endif
);
        JRadioButton_setSelected(this->normalJRadioButton, true);
        JRadioButton_setText(this->normalJRadioButton, "Normal");
        JRadioButton_setBorder(this->normalJRadioButton, JAVA_CALL(javax_swing->BorderFactory, createEmptyBorder, 0, 0, 0, 0));
        JRadioButton_setMargin(this->normalJRadioButton, Insets_new(0, 0, 0, 0));
        JRadioButton_addActionListener(this->normalJRadioButton, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void KeyboardActionScriptInputJPanel_actionPerformed(KeyboardActionScriptInputJPanel* this, ActionEvent* evt) {
                KeyboardActionScriptInputJPanel_normalJRadioButtonActionPerformed(this, evt);
        }
#endif
);
        JRadioButton_setSelected(this->simultaneousJRadioButton, true);
        JRadioButton_setText(this->simultaneousJRadioButton, "Simultaneous");
        JRadioButton_setBorder(this->simultaneousJRadioButton, JAVA_CALL(javax_swing->BorderFactory, createEmptyBorder, 0, 0, 0, 0));
        JRadioButton_setMargin(this->simultaneousJRadioButton, Insets_new(0, 0, 0, 0));
        JRadioButton_addActionListener(this->simultaneousJRadioButton, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void KeyboardActionScriptInputJPanel_actionPerformed(KeyboardActionScriptInputJPanel* this, ActionEvent* evt) {
                KeyboardActionScriptInputJPanel_simultaneousJRadioButtonActionPerformed(this, evt);
        }
#endif
);
        JRadioButton_setText(this->sequenceJRadioButton, "Sequence");
        JRadioButton_setBorder(this->sequenceJRadioButton, JAVA_CALL(javax_swing->BorderFactory, createEmptyBorder, 0, 0, 0, 0));
        JRadioButton_setMargin(this->sequenceJRadioButton, Insets_new(0, 0, 0, 0));
        JRadioButton_addActionListener(this->sequenceJRadioButton, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void KeyboardActionScriptInputJPanel_actionPerformed(KeyboardActionScriptInputJPanel* this, ActionEvent* evt) {
                KeyboardActionScriptInputJPanel_sequenceJRadioButtonActionPerformed(this, evt);
        }
#endif
);
        JButton_setText(this->okJButton, "OK");
        JButton_setHorizontalTextPosition(this->okJButton, javax_swing->SwingConstants->CENTER);
        JButton_addActionListener(this->okJButton, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void KeyboardActionScriptInputJPanel_actionPerformed(KeyboardActionScriptInputJPanel* this, ActionEvent* evt) {
                KeyboardActionScriptInputJPanel_okJButtonActionPerformed(this, evt);
        }
#endif
);
        JPanel_add(this->jPanel1, this->okJButton);
        JComboBox_addActionListener(this->keyIntegerJComboBox, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void KeyboardActionScriptInputJPanel_actionPerformed(KeyboardActionScriptInputJPanel* this, ActionEvent* evt) {
                KeyboardActionScriptInputJPanel_keyIntegerJComboBoxActionPerformed(this, evt);
        }
#endif
);
        GroupLayout* keyActionJDialogLayout = GroupLayout_new(JDialog_getContentPane(this->keyActionJDialog));
        JAVA_CALL(JDialog_getContentPane(this->keyActionJDialog), setLayout, keyActionJDialogLayout);
        GroupLayout_setHorizontalGroup(keyActionJDialogLayout, JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(keyActionJDialogLayout, javax_swing->GroupLayout->Alignment->LEADING), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(keyActionJDialogLayout), addContainerGap), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(keyActionJDialogLayout, javax_swing->GroupLayout->Alignment->LEADING), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(keyActionJDialogLayout), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(keyActionJDialogLayout, javax_swing->GroupLayout->Alignment->LEADING, false), addComponent, this->addKeyJLabel, javax_swing->GroupLayout->DEFAULT_SIZE, javax_swing->GroupLayout->DEFAULT_SIZE, Short_MAX_VALUE), addComponent, this->inputTypeJLabel, javax_swing->GroupLayout->DEFAULT_SIZE, javax_swing->GroupLayout->DEFAULT_SIZE, Short_MAX_VALUE)), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(keyActionJDialogLayout, javax_swing->GroupLayout->Alignment->TRAILING), addComponent, this->inputAutomationTypeJComboBox, 0, 148, Short_MAX_VALUE), addComponent, this->textJTextField, javax_swing->GroupLayout->Alignment->LEADING, javax_swing->GroupLayout->DEFAULT_SIZE, 148, Short_MAX_VALUE), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(keyActionJDialogLayout), addComponent, this->keyNameJComboBox, 0, 101, Short_MAX_VALUE), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addComponent, this->keyIntegerJComboBox, javax_swing->GroupLayout->PREFERRED_SIZE, 41, javax_swing->GroupLayout->PREFERRED_SIZE)))), addComponent, this->testJLabel, javax_swing->GroupLayout->PREFERRED_SIZE, 60, javax_swing->GroupLayout->PREFERRED_SIZE), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(keyActionJDialogLayout), addComponent, this->normalJRadioButton), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addComponent, this->pressJRadioButton), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addComponent, this->releaseJRadioButton), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED, 48, javax_swing->GroupLayout->PREFERRED_SIZE)), addGroup, javax_swing->GroupLayout->Alignment->TRAILING, JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(keyActionJDialogLayout), addComponent, this->holdTimeJLabel), addGap, 22, 22, 22), addComponent, this->timeJTextField, javax_swing->GroupLayout->DEFAULT_SIZE, 113, Short_MAX_VALUE)), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(keyActionJDialogLayout), addComponent, this->delayBetweenJLabel), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED, 15, Short_MAX_VALUE), addComponent, this->delayJTextField, javax_swing->GroupLayout->PREFERRED_SIZE, 68, javax_swing->GroupLayout->PREFERRED_SIZE)), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(keyActionJDialogLayout), addComponent, this->simultaneousJRadioButton), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addComponent, this->sequenceJRadioButton))), addContainerGap)), addComponent, this->titleJLabel, javax_swing->GroupLayout->Alignment->TRAILING, javax_swing->GroupLayout->DEFAULT_SIZE, 229, Short_MAX_VALUE), addComponent, this->jPanel1, javax_swing->GroupLayout->DEFAULT_SIZE, 229, Short_MAX_VALUE));
        GroupLayout_setVerticalGroup(keyActionJDialogLayout, JAVA_CALL(GroupLayout_createParallelGroup(keyActionJDialogLayout, javax_swing->GroupLayout->Alignment->LEADING), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(keyActionJDialogLayout), addComponent, this->titleJLabel), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(keyActionJDialogLayout, javax_swing->GroupLayout->Alignment->BASELINE), addComponent, this->inputTypeJLabel), addComponent, this->inputAutomationTypeJComboBox, javax_swing->GroupLayout->PREFERRED_SIZE, javax_swing->GroupLayout->DEFAULT_SIZE, javax_swing->GroupLayout->PREFERRED_SIZE)), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(keyActionJDialogLayout, javax_swing->GroupLayout->Alignment->BASELINE), addComponent, this->addKeyJLabel), addComponent, this->keyIntegerJComboBox, javax_swing->GroupLayout->PREFERRED_SIZE, javax_swing->GroupLayout->DEFAULT_SIZE, javax_swing->GroupLayout->PREFERRED_SIZE), addComponent, this->keyNameJComboBox, javax_swing->GroupLayout->PREFERRED_SIZE, javax_swing->GroupLayout->DEFAULT_SIZE, javax_swing->GroupLayout->PREFERRED_SIZE)), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(keyActionJDialogLayout, javax_swing->GroupLayout->Alignment->BASELINE), addComponent, this->testJLabel), addComponent, this->textJTextField, javax_swing->GroupLayout->PREFERRED_SIZE, javax_swing->GroupLayout->DEFAULT_SIZE, javax_swing->GroupLayout->PREFERRED_SIZE)), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(keyActionJDialogLayout, javax_swing->GroupLayout->Alignment->BASELINE), addComponent, this->pressJRadioButton), addComponent, this->normalJRadioButton), addComponent, this->releaseJRadioButton)), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(keyActionJDialogLayout, javax_swing->GroupLayout->Alignment->BASELINE), addComponent, this->holdTimeJLabel), addComponent, this->timeJTextField, javax_swing->GroupLayout->PREFERRED_SIZE, javax_swing->GroupLayout->DEFAULT_SIZE, javax_swing->GroupLayout->PREFERRED_SIZE)), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(keyActionJDialogLayout, javax_swing->GroupLayout->Alignment->BASELINE), addComponent, this->delayBetweenJLabel), addComponent, this->delayJTextField, javax_swing->GroupLayout->PREFERRED_SIZE, javax_swing->GroupLayout->DEFAULT_SIZE, javax_swing->GroupLayout->PREFERRED_SIZE)), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(keyActionJDialogLayout, javax_swing->GroupLayout->Alignment->BASELINE), addComponent, this->simultaneousJRadioButton), addComponent, this->sequenceJRadioButton)), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addComponent, this->jPanel1, javax_swing->GroupLayout->PREFERRED_SIZE, javax_swing->GroupLayout->DEFAULT_SIZE, javax_swing->GroupLayout->PREFERRED_SIZE), addContainerGap)));
        KeyboardActionScriptInputJPanel_setMinimumSize(this, Dimension_new(100, 0));
        JButton_setText(this->keyActionJButton, "Edit");
        JButton_addActionListener(this->keyActionJButton, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void KeyboardActionScriptInputJPanel_actionPerformed(KeyboardActionScriptInputJPanel* this, ActionEvent* evt) {
                KeyboardActionScriptInputJPanel_keyActionJButtonActionPerformed(this, evt);
        }
#endif
);
        JLabel_setText(this->jLabel1, "Key:");
        GroupLayout* layout = GroupLayout_new(this);
        KeyboardActionScriptInputJPanel_setLayout(this, layout);
        GroupLayout_setHorizontalGroup(layout, JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->LEADING), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(layout), addComponent, this->jLabel1), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED, 49, Short_MAX_VALUE), addComponent, this->keyActionJButton)));
        GroupLayout_setVerticalGroup(layout, JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->LEADING), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->BASELINE), addComponent, this->jLabel1), addComponent, this->keyActionJButton)));
}


static void KeyboardActionScriptInputJPanel_prependText(KeyboardActionScriptInputJPanel* this, int32_t integer) {
        if (integer != nullptr) {
            const char* newKey = java_concat(java_concat("&#", Integer_toString(integer)), ";");
            JTextField_setText(this->textJTextField, java_concat(newKey, java_string_of(JTextField_getText(this->textJTextField))));
        }
}


static void KeyboardActionScriptInputJPanel_keyIntegerJComboBoxActionPerformed(KeyboardActionScriptInputJPanel* this, ActionEvent* evt) {
        JComboBox_getSelectedIndex(this->keyIntegerJComboBox);
        JComboBox_setSelectedIndex(this->keyNameJComboBox, JComboBox_getSelectedIndex(this->keyIntegerJComboBox));
}


static void KeyboardActionScriptInputJPanel_sequenceJRadioButtonActionPerformed(KeyboardActionScriptInputJPanel* this, ActionEvent* evt) {
        if (JRadioButton_isSelected(this->sequenceJRadioButton)) {
            JTextField_setText(this->delayJTextField, CommonPhoneStrings_getInstance()->ONE);
            JRadioButton_setSelected(this->simultaneousJRadioButton, false);
        }
}


static void KeyboardActionScriptInputJPanel_simultaneousJRadioButtonActionPerformed(KeyboardActionScriptInputJPanel* this, ActionEvent* evt) {
        if (JRadioButton_isSelected(this->simultaneousJRadioButton)) {
            JTextField_setText(this->delayJTextField, CommonPhoneStrings_getInstance()->ZERO);
            JRadioButton_setSelected(this->sequenceJRadioButton, false);
        }
}


static void KeyboardActionScriptInputJPanel_keyNameJComboBoxActionPerformed(KeyboardActionScriptInputJPanel* this, ActionEvent* evt) {
        int32_t integer = KeyboardActionScriptInputJPanel_getSelectedKey(this);
        KeyboardActionScriptInputJPanel_prependText(this, integer);
        JComboBox_setSelectedIndex(this->keyIntegerJComboBox, JComboBox_getSelectedIndex(this->keyNameJComboBox));
}


static void KeyboardActionScriptInputJPanel_okJButtonActionPerformed(KeyboardActionScriptInputJPanel* this, ActionEvent* evt) {
        JAVA_TRY {
            KeyboardActionScriptInputJPanel_update(this);
            JAVA_CALL(KeyboardActionScriptInputJPanel_getKeyActionJDialog(this), setVisible, false);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "okButtonActionPerformed", e);
        } JAVA_END_TRY;
}


static void KeyboardActionScriptInputJPanel_keyActionJButtonActionPerformed(KeyboardActionScriptInputJPanel* this, ActionEvent* evt) {
        JAVA_CALL(KeyboardActionScriptInputJPanel_getKeyActionJDialog(this), setVisible, true);
}


static void KeyboardActionScriptInputJPanel_normalJRadioButtonActionPerformed(KeyboardActionScriptInputJPanel* this, ActionEvent* evt) {
        if (JRadioButton_isSelected(this->normalJRadioButton)) {
            KeyboardActionScriptInputInterface_setNormal(this->keyActionScriptInputInterface);
            JRadioButton_setSelected(this->pressJRadioButton, false);
            JRadioButton_setSelected(this->releaseJRadioButton, false);
        }
}


static void KeyboardActionScriptInputJPanel_releaseJRadioButtonActionPerformed(KeyboardActionScriptInputJPanel* this, ActionEvent* evt) {
        if (JRadioButton_isSelected(this->releaseJRadioButton)) {
            KeyboardActionScriptInputInterface_setRelease(this->keyActionScriptInputInterface, true);
            KeyboardActionScriptInputInterface_setPress(this->keyActionScriptInputInterface, false);
            JRadioButton_setSelected(this->pressJRadioButton, false);
            JRadioButton_setSelected(this->normalJRadioButton, false);
        }
}


static void KeyboardActionScriptInputJPanel_pressJRadioButtonActionPerformed(KeyboardActionScriptInputJPanel* this, ActionEvent* evt) {
        if (JRadioButton_isSelected(this->pressJRadioButton)) {
            KeyboardActionScriptInputInterface_setPress(this->keyActionScriptInputInterface, true);
            KeyboardActionScriptInputInterface_setRelease(this->keyActionScriptInputInterface, false);
            JRadioButton_setSelected(this->releaseJRadioButton, false);
            JRadioButton_setSelected(this->normalJRadioButton, false);
        }
}

