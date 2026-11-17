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
#include "org/allbinary/input/automation/robot/InputRobot.h"
#include "org/allbinary/input/automation/robot/InputRobotFactory.h"
#include "org/allbinary/input/automation/robot/TempInputRobotNames.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringValidationUtil.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/string/CommonPhoneStrings.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/input/automation/actions/script/condition/processors/input/JPanel.h"

typedef struct MouseActionScriptInputJPanel MouseActionScriptInputJPanel;
struct MouseActionScriptInputJPanel {
    JPanel base;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    MouseActionScriptInputInterface* mouseActionScriptInputInterface;
    JCheckBox* button1JCheckBox;
    JCheckBox* button2JCheckBox;
    JComboBox* inputAutomationTypeJComboBox;
    JLabel* inputTypeJLabel;
    JLabel* jLabel1;
    JLabel* jLabel2;
    JLabel* jLabel3;
    JLabel* jLabel4;
    JLabel* jLabel5;
    JLabel* jLabel6;
    JButton* mouseActionJButton;
    JDialog* mouseActionJDialog;
    JTextField* mouseDelayJTextField;
    JTextField* mouseXJTextField;
    JTextField* mouseYJTextField;
    JButton* okJButton;
    JLabel* titleJLabel;
};


MouseActionScriptInputJPanel* MouseActionScriptInputJPanel_new(MouseActionScriptInputInterface* mouseActionScriptInputInterface);

void MouseActionScriptInputJPanel_init(MouseActionScriptInputJPanel* this, MouseActionScriptInputInterface* mouseActionScriptInputInterface);
static void MouseActionScriptInputJPanel_set(MouseActionScriptInputJPanel* this);
static void MouseActionScriptInputJPanel_updateInputType(MouseActionScriptInputJPanel* this);
static void MouseActionScriptInputJPanel_update(MouseActionScriptInputJPanel* this);
JDialog* MouseActionScriptInputJPanel_getMouseActionJDialog(MouseActionScriptInputJPanel* this);
void MouseActionScriptInputJPanel_setMouseActionJDialog(MouseActionScriptInputJPanel* this, JDialog* mouseActionJDialog);
static void MouseActionScriptInputJPanel_initComponents(MouseActionScriptInputJPanel* this);
static void MouseActionScriptInputJPanel_button2JCheckBoxActionPerformed(MouseActionScriptInputJPanel* this, ActionEvent* evt);
static void MouseActionScriptInputJPanel_okJButtonActionPerformed(MouseActionScriptInputJPanel* this, ActionEvent* evt);
static void MouseActionScriptInputJPanel_mouseActionJButtonActionPerformed(MouseActionScriptInputJPanel* this, ActionEvent* evt);

static void MouseActionScriptInputJPanel_initFields(MouseActionScriptInputJPanel* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    
    this->button1JCheckBox = nullptr;
    this->button2JCheckBox = nullptr;
    this->inputAutomationTypeJComboBox = nullptr;
    this->inputTypeJLabel = nullptr;
    this->jLabel1 = nullptr;
    this->jLabel2 = nullptr;
    this->jLabel3 = nullptr;
    this->jLabel4 = nullptr;
    this->jLabel5 = nullptr;
    this->jLabel6 = nullptr;
    this->mouseActionJButton = nullptr;
    this->mouseActionJDialog = nullptr;
    this->mouseDelayJTextField = nullptr;
    this->mouseXJTextField = nullptr;
    this->mouseYJTextField = nullptr;
    this->okJButton = nullptr;
    this->titleJLabel = nullptr;
}


void MouseActionScriptInputJPanel_init(MouseActionScriptInputJPanel* this, MouseActionScriptInputInterface* mouseActionScriptInputInterface) {
    JPanel_init(&this->base);
    MouseActionScriptInputJPanel_initFields(this);
        LogUtil_putF(this->logUtil, CommonLabels_getInstance()->START + mouseActionScriptInputInterface, this, this->commonStrings->CONSTRUCTOR);
        MouseActionScriptInputJPanel_initComponents(this);
        this->mouseActionScriptInputInterface = mouseActionScriptInputInterface;
        DefaultComboBoxModel* defaultComboBoxModel = DefaultComboBoxModel_new();
        DefaultComboBoxModel_addElement(defaultComboBoxModel, TempInputRobotNames_LOW_NAME);
        DefaultComboBoxModel_addElement(defaultComboBoxModel, TempInputRobotNames_SYS_NAME);
        DefaultComboBoxModel_addElement(defaultComboBoxModel, InputRobot_NAME);
        JComboBox_setModel(this->inputAutomationTypeJComboBox, defaultComboBoxModel);
        MouseActionScriptInputJPanel_set(this);
}

MouseActionScriptInputJPanel* MouseActionScriptInputJPanel_new(MouseActionScriptInputInterface* mouseActionScriptInputInterface) {
    MouseActionScriptInputJPanel* this = calloc(1, sizeof(MouseActionScriptInputJPanel));
    MouseActionScriptInputJPanel_init(this, mouseActionScriptInputInterface);
    return this;
}


static void MouseActionScriptInputJPanel_set(MouseActionScriptInputJPanel* this) {
        ComboBoxModel* inputTypeComboBoxModel = JComboBox_getModel(this->inputAutomationTypeJComboBox);
        ComboBoxModel_setSelectedItem(inputTypeComboBoxModel, JAVA_CALL(MouseActionScriptInputInterface_getInputRobotInterface(this->mouseActionScriptInputInterface), getName));
        if ((MouseActionScriptInputInterface_getButtonClicks(this->mouseActionScriptInputInterface) & InputEvent_BUTTON1_MASK) != 0) {
            JCheckBox_setSelected(this->button1JCheckBox, true);
        } else {
            JCheckBox_setSelected(this->button1JCheckBox, false);
        }
        if ((MouseActionScriptInputInterface_getButtonClicks(this->mouseActionScriptInputInterface) & InputEvent_BUTTON2_MASK) != 0) {
            JCheckBox_setSelected(this->button2JCheckBox, true);
        } else {
            JCheckBox_setSelected(this->button2JCheckBox, false);
        }
        JTextField_setText(this->mouseDelayJTextField, java_string_of(MouseActionScriptInputInterface_getTime(this->mouseActionScriptInputInterface)));
        JTextField_setText(this->mouseXJTextField, java_string_of(MouseActionScriptInputInterface_getPoint(this->mouseActionScriptInputInterface)->x));
        JTextField_setText(this->mouseYJTextField, java_string_of(MouseActionScriptInputInterface_getPoint(this->mouseActionScriptInputInterface)->y));
        MouseActionScriptInputInterface_log(this->mouseActionScriptInputInterface);
}


// throws Exception
static void MouseActionScriptInputJPanel_updateInputType(MouseActionScriptInputJPanel* this) {
        ComboBoxModel* comboBoxModel = JComboBox_getModel(this->inputAutomationTypeJComboBox);
        const char* selectedItem = ((const char*) ComboBoxModel_getSelectedItem(comboBoxModel));
        if (!StringValidationUtil_isEmpty(StringValidationUtil_getInstance(), selectedItem)) {
            MouseActionScriptInputInterface_setInputRobotInterface(this->mouseActionScriptInputInterface, InputRobotFactory_get(InputRobotFactory_getInstance(), selectedItem));
        }
}


// throws Exception
static void MouseActionScriptInputJPanel_update(MouseActionScriptInputJPanel* this) {
        MouseActionScriptInputJPanel_updateInputType(this);
        MouseActionScriptInputInterface_setTime(this->mouseActionScriptInputInterface, java_string_of(JTextField_getText(this->mouseDelayJTextField)));
        LogUtil_putF(this->logUtil, java_concat("Button State: ", java_string_of(MouseActionScriptInputInterface_getButtonClicks(this->mouseActionScriptInputInterface))), this, "update");
        if (JCheckBox_isSelected(this->button1JCheckBox)) {
            if ((MouseActionScriptInputInterface_getButtonClicks(this->mouseActionScriptInputInterface) & InputEvent_BUTTON1_MASK) == 0) {
                MouseActionScriptInputInterface_setButtonClicks(this->mouseActionScriptInputInterface, MouseActionScriptInputInterface_getButtonClicks(this->mouseActionScriptInputInterface) | InputEvent_BUTTON1_MASK);
                LogUtil_putF(this->logUtil, java_concat("Button 1 Selected: ", java_string_of(MouseActionScriptInputInterface_getButtonClicks(this->mouseActionScriptInputInterface))), this, "update");
            }
        } else {
            if ((MouseActionScriptInputInterface_getButtonClicks(this->mouseActionScriptInputInterface) & InputEvent_BUTTON1_MASK) != 0) {
                MouseActionScriptInputInterface_setButtonClicks(this->mouseActionScriptInputInterface, MouseActionScriptInputInterface_getButtonClicks(this->mouseActionScriptInputInterface) ^ InputEvent_BUTTON1_MASK);
                LogUtil_putF(this->logUtil, java_concat("Button 1 Deselected: ", java_string_of(MouseActionScriptInputInterface_getButtonClicks(this->mouseActionScriptInputInterface))), this, "update");
            }
        }
        if (JCheckBox_isSelected(this->button2JCheckBox)) {
            if ((MouseActionScriptInputInterface_getButtonClicks(this->mouseActionScriptInputInterface) & InputEvent_BUTTON2_MASK) == 0) {
                MouseActionScriptInputInterface_setButtonClicks(this->mouseActionScriptInputInterface, MouseActionScriptInputInterface_getButtonClicks(this->mouseActionScriptInputInterface) | InputEvent_BUTTON2_MASK);
                LogUtil_putF(this->logUtil, java_concat("Button 2 Selected: ", java_string_of(MouseActionScriptInputInterface_getButtonClicks(this->mouseActionScriptInputInterface))), this, "update");
            }
        } else {
            if ((MouseActionScriptInputInterface_getButtonClicks(this->mouseActionScriptInputInterface) & InputEvent_BUTTON2_MASK) != 0) {
                MouseActionScriptInputInterface_setButtonClicks(this->mouseActionScriptInputInterface, MouseActionScriptInputInterface_getButtonClicks(this->mouseActionScriptInputInterface) ^ InputEvent_BUTTON2_MASK);
                LogUtil_putF(this->logUtil, java_concat("Button 2 Deselected: ", java_string_of(MouseActionScriptInputInterface_getButtonClicks(this->mouseActionScriptInputInterface))), this, "update");
            }
        }
        const char* mouseXString = JTextField_getText(this->mouseXJTextField);
        if (!StringValidationUtil_isEmpty(StringValidationUtil_getInstance(), mouseXString) && StringValidationUtil_isNumber(StringValidationUtil_getInstance(), mouseXString)) {
            MouseActionScriptInputInterface_getPoint(this->mouseActionScriptInputInterface)->x = ((int32_t) strtol(mouseXString, nullptr, 10));
        }
        const char* mouseYString = JTextField_getText(this->mouseYJTextField);
        if (!StringValidationUtil_isEmpty(StringValidationUtil_getInstance(), mouseYString) && StringValidationUtil_isNumber(StringValidationUtil_getInstance(), mouseYString)) {
            MouseActionScriptInputInterface_getPoint(this->mouseActionScriptInputInterface)->y = ((int32_t) strtol(mouseYString, nullptr, 10));
        }
        MouseActionScriptInputInterface_log(this->mouseActionScriptInputInterface);
}


JDialog* MouseActionScriptInputJPanel_getMouseActionJDialog(MouseActionScriptInputJPanel* this) {
        return this->mouseActionJDialog;
}


void MouseActionScriptInputJPanel_setMouseActionJDialog(MouseActionScriptInputJPanel* this, JDialog* mouseActionJDialog) {
        this->mouseActionJDialog = mouseActionJDialog;
}


static void MouseActionScriptInputJPanel_initComponents(MouseActionScriptInputJPanel* this) {
        this->mouseActionJDialog = JDialog_new();
        this->titleJLabel = JLabel_new();
        this->okJButton = JButton_new();
        this->jLabel2 = JLabel_new();
        this->jLabel3 = JLabel_new();
        this->button1JCheckBox = JCheckBox_new();
        this->button2JCheckBox = JCheckBox_new();
        this->jLabel4 = JLabel_new();
        this->mouseXJTextField = JTextField_new();
        this->jLabel5 = JLabel_new();
        this->mouseYJTextField = JTextField_new();
        this->inputTypeJLabel = JLabel_new();
        this->inputAutomationTypeJComboBox = JComboBox_new();
        this->jLabel6 = JLabel_new();
        this->mouseDelayJTextField = JTextField_new();
        this->mouseActionJButton = JButton_new();
        this->jLabel1 = JLabel_new();
        JDialog_setMinimumSize(this->mouseActionJDialog, Dimension_new(275, 185));
        JLabel_setText(this->titleJLabel, "Mouse Input Options");
        JButton_setText(this->okJButton, "OK");
        JButton_addActionListener(this->okJButton, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void MouseActionScriptInputJPanel_actionPerformed(MouseActionScriptInputJPanel* this, ActionEvent* evt) {
                MouseActionScriptInputJPanel_okJButtonActionPerformed(this, evt);
        }
#endif
);
        JLabel_setText(this->jLabel2, "Buttons:");
        JLabel_setText(this->jLabel3, "Move To:");
        JCheckBox_setText(this->button1JCheckBox, CommonPhoneStrings_getInstance()->ONE);
        JCheckBox_setBorder(this->button1JCheckBox, JAVA_CALL(javax_swing->BorderFactory, createEmptyBorder, 0, 0, 0, 0));
        JCheckBox_setMargin(this->button1JCheckBox, Insets_new(0, 0, 0, 0));
        JCheckBox_setText(this->button2JCheckBox, CommonPhoneStrings_getInstance()->TWO);
        JCheckBox_setBorder(this->button2JCheckBox, JAVA_CALL(javax_swing->BorderFactory, createEmptyBorder, 0, 0, 0, 0));
        JCheckBox_setMargin(this->button2JCheckBox, Insets_new(0, 0, 0, 0));
        JCheckBox_addActionListener(this->button2JCheckBox, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void MouseActionScriptInputJPanel_actionPerformed(MouseActionScriptInputJPanel* this, ActionEvent* evt) {
                MouseActionScriptInputJPanel_button2JCheckBoxActionPerformed(this, evt);
        }
#endif
);
        JLabel_setText(this->jLabel4, "x:");
        JTextField_setText(this->mouseXJTextField, CommonPhoneStrings_getInstance()->ZERO);
        JLabel_setText(this->jLabel5, "y:");
        JTextField_setText(this->mouseYJTextField, CommonPhoneStrings_getInstance()->ZERO);
        JLabel_setText(this->inputTypeJLabel, "Input Type:");
        JLabel_setText(this->jLabel6, "Delay:");
        JTextField_setText(this->mouseDelayJTextField, "100");
        GroupLayout* mouseActionJDialogLayout = GroupLayout_new(JDialog_getContentPane(this->mouseActionJDialog));
        JAVA_CALL(JDialog_getContentPane(this->mouseActionJDialog), setLayout, mouseActionJDialogLayout);
        GroupLayout_setHorizontalGroup(mouseActionJDialogLayout, JAVA_CALL(GroupLayout_createParallelGroup(mouseActionJDialogLayout, javax_swing->GroupLayout->Alignment->LEADING), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(mouseActionJDialogLayout), addContainerGap), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(mouseActionJDialogLayout, javax_swing->GroupLayout->Alignment->LEADING), addComponent, this->inputTypeJLabel), addGroup, javax_swing->GroupLayout->Alignment->TRAILING, JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(mouseActionJDialogLayout), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(mouseActionJDialogLayout, javax_swing->GroupLayout->Alignment->LEADING), addGroup, javax_swing->GroupLayout->Alignment->TRAILING, JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(mouseActionJDialogLayout), addComponent, this->jLabel2), addGap, 25, 25, 25)), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(mouseActionJDialogLayout), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(mouseActionJDialogLayout, javax_swing->GroupLayout->Alignment->LEADING), addComponent, this->jLabel3), addComponent, this->jLabel6)), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED))), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(mouseActionJDialogLayout, javax_swing->GroupLayout->Alignment->LEADING), addComponent, this->mouseDelayJTextField, javax_swing->GroupLayout->Alignment->TRAILING, javax_swing->GroupLayout->DEFAULT_SIZE, 154, Short_MAX_VALUE), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(mouseActionJDialogLayout), addComponent, this->titleJLabel), addGap, 45, 45, 45)), addGroup, javax_swing->GroupLayout->Alignment->TRAILING, JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(mouseActionJDialogLayout), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addComponent, this->inputAutomationTypeJComboBox, 0, 154, Short_MAX_VALUE)), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(mouseActionJDialogLayout), addComponent, this->button1JCheckBox), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addComponent, this->button2JCheckBox)), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(mouseActionJDialogLayout), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(mouseActionJDialogLayout, javax_swing->GroupLayout->Alignment->TRAILING), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(mouseActionJDialogLayout), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addComponent, this->okJButton)), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(mouseActionJDialogLayout), addComponent, this->jLabel4), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED, 5, Short_MAX_VALUE), addComponent, this->mouseXJTextField, javax_swing->GroupLayout->PREFERRED_SIZE, 59, javax_swing->GroupLayout->PREFERRED_SIZE))), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addComponent, this->jLabel5), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addComponent, this->mouseYJTextField, javax_swing->GroupLayout->DEFAULT_SIZE, 62, Short_MAX_VALUE))))), addContainerGap)));
        GroupLayout_setVerticalGroup(mouseActionJDialogLayout, JAVA_CALL(GroupLayout_createParallelGroup(mouseActionJDialogLayout, javax_swing->GroupLayout->Alignment->LEADING), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(mouseActionJDialogLayout), addComponent, this->titleJLabel), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(mouseActionJDialogLayout, javax_swing->GroupLayout->Alignment->BASELINE), addComponent, this->inputTypeJLabel), addComponent, this->inputAutomationTypeJComboBox, javax_swing->GroupLayout->PREFERRED_SIZE, javax_swing->GroupLayout->DEFAULT_SIZE, javax_swing->GroupLayout->PREFERRED_SIZE)), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(mouseActionJDialogLayout, javax_swing->GroupLayout->Alignment->LEADING), addComponent, this->jLabel2, javax_swing->GroupLayout->PREFERRED_SIZE, 15, javax_swing->GroupLayout->PREFERRED_SIZE), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(mouseActionJDialogLayout, javax_swing->GroupLayout->Alignment->BASELINE), addComponent, this->button1JCheckBox), addComponent, this->button2JCheckBox))), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(mouseActionJDialogLayout, javax_swing->GroupLayout->Alignment->BASELINE), addComponent, this->jLabel6), addComponent, this->mouseDelayJTextField, javax_swing->GroupLayout->PREFERRED_SIZE, javax_swing->GroupLayout->DEFAULT_SIZE, javax_swing->GroupLayout->PREFERRED_SIZE)), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(mouseActionJDialogLayout, javax_swing->GroupLayout->Alignment->BASELINE), addComponent, this->jLabel3), addComponent, this->jLabel4), addComponent, this->jLabel5), addComponent, this->mouseYJTextField, javax_swing->GroupLayout->PREFERRED_SIZE, javax_swing->GroupLayout->DEFAULT_SIZE, javax_swing->GroupLayout->PREFERRED_SIZE), addComponent, this->mouseXJTextField, javax_swing->GroupLayout->PREFERRED_SIZE, javax_swing->GroupLayout->DEFAULT_SIZE, javax_swing->GroupLayout->PREFERRED_SIZE)), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED, javax_swing->GroupLayout->DEFAULT_SIZE, Short_MAX_VALUE), addComponent, this->okJButton), addContainerGap)));
        MouseActionScriptInputJPanel_setMinimumSize(this, Dimension_new(100, 0));
        JButton_setText(this->mouseActionJButton, "Edit");
        JButton_addActionListener(this->mouseActionJButton, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void MouseActionScriptInputJPanel_actionPerformed(MouseActionScriptInputJPanel* this, ActionEvent* evt) {
                MouseActionScriptInputJPanel_mouseActionJButtonActionPerformed(this, evt);
        }
#endif
);
        JLabel_setText(this->jLabel1, "Mouse:");
        GroupLayout* layout = GroupLayout_new(this);
        MouseActionScriptInputJPanel_setLayout(this, layout);
        GroupLayout_setHorizontalGroup(layout, JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->LEADING), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(layout), addComponent, this->jLabel1), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED, 36, Short_MAX_VALUE), addComponent, this->mouseActionJButton)));
        GroupLayout_setVerticalGroup(layout, JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->LEADING), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->BASELINE), addComponent, this->jLabel1), addComponent, this->mouseActionJButton)));
}


static void MouseActionScriptInputJPanel_button2JCheckBoxActionPerformed(MouseActionScriptInputJPanel* this, ActionEvent* evt) {
}


static void MouseActionScriptInputJPanel_okJButtonActionPerformed(MouseActionScriptInputJPanel* this, ActionEvent* evt) {
        JAVA_TRY {
            MouseActionScriptInputJPanel_update(this);
            JAVA_CALL(MouseActionScriptInputJPanel_getMouseActionJDialog(this), setVisible, false);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "okButtonActionPerformed", e);
        } JAVA_END_TRY;
}


static void MouseActionScriptInputJPanel_mouseActionJButtonActionPerformed(MouseActionScriptInputJPanel* this, ActionEvent* evt) {
        JAVA_CALL(MouseActionScriptInputJPanel_getMouseActionJDialog(this), setVisible, true);
}

