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
#include "org/allbinary/input/automation/actions/script/condition/processors/input/JPanel.h"

typedef struct InputAutomationTypeJPanel InputAutomationTypeJPanel;
struct InputAutomationTypeJPanel {
    JPanel base;
    JComboBox* inputAutomationTypeJComboBox;
    JLabel* jLabel1;
};


InputAutomationTypeJPanel* InputAutomationTypeJPanel_new(void);

void InputAutomationTypeJPanel_init(InputAutomationTypeJPanel* this);
JComboBox* InputAutomationTypeJPanel_getInputAutomationTypeJComboBox(InputAutomationTypeJPanel* this);
void InputAutomationTypeJPanel_setInputAutomationTypeJComboBox(InputAutomationTypeJPanel* this, JComboBox* inputAutomationTypeJComboBox);
static void InputAutomationTypeJPanel_initComponents(InputAutomationTypeJPanel* this);

static void InputAutomationTypeJPanel_initFields(InputAutomationTypeJPanel* this) {
    this->inputAutomationTypeJComboBox = nullptr;
    this->jLabel1 = nullptr;
}


void InputAutomationTypeJPanel_init(InputAutomationTypeJPanel* this) {
    JPanel_init(&this->base);
    InputAutomationTypeJPanel_initFields(this);
        InputAutomationTypeJPanel_initComponents(this);
}

InputAutomationTypeJPanel* InputAutomationTypeJPanel_new(void) {
    InputAutomationTypeJPanel* this = calloc(1, sizeof(InputAutomationTypeJPanel));
    InputAutomationTypeJPanel_init(this);
    return this;
}


JComboBox* InputAutomationTypeJPanel_getInputAutomationTypeJComboBox(InputAutomationTypeJPanel* this) {
        return this->inputAutomationTypeJComboBox;
}


void InputAutomationTypeJPanel_setInputAutomationTypeJComboBox(InputAutomationTypeJPanel* this, JComboBox* inputAutomationTypeJComboBox) {
        this->inputAutomationTypeJComboBox = inputAutomationTypeJComboBox;
}


static void InputAutomationTypeJPanel_initComponents(InputAutomationTypeJPanel* this) {
        this->inputAutomationTypeJComboBox = JComboBox_new();
        this->jLabel1 = JLabel_new();
        JComboBox_setModel(this->inputAutomationTypeJComboBox, DefaultComboBoxModel_new(((const char**) java_array_from(sizeof(const char*), sizeof((const char*[]){ "DirectX", "DirectX 8", "Low Level", "Java Robot" }) / sizeof(const char*), (const char*[]){ "DirectX", "DirectX 8", "Low Level", "Java Robot" }))));
        JLabel_setText(this->jLabel1, "Input Type:");
        GroupLayout* layout = GroupLayout_new(this);
        InputAutomationTypeJPanel_setLayout(this, layout);
        GroupLayout_setHorizontalGroup(layout, JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->LEADING), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(layout), addComponent, this->jLabel1), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addComponent, this->inputAutomationTypeJComboBox, 0, 98, Short_MAX_VALUE)));
        GroupLayout_setVerticalGroup(layout, JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->LEADING), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->BASELINE), addComponent, this->jLabel1), addComponent, this->inputAutomationTypeJComboBox, javax_swing->GroupLayout->PREFERRED_SIZE, javax_swing->GroupLayout->DEFAULT_SIZE, javax_swing->GroupLayout->PREFERRED_SIZE)));
}

