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
// package org.allbinary.input.automation.module.configuration

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/input/automation/module/configuration/JPanel.h"

typedef struct BlankModuleConfigurationJPanel BlankModuleConfigurationJPanel;
struct BlankModuleConfigurationJPanel {
    JPanel base;
    JLabel* jLabel1;
};


BlankModuleConfigurationJPanel* BlankModuleConfigurationJPanel_new(void);

void BlankModuleConfigurationJPanel_init(BlankModuleConfigurationJPanel* this);
static void BlankModuleConfigurationJPanel_initComponents(BlankModuleConfigurationJPanel* this);

static void BlankModuleConfigurationJPanel_initFields(BlankModuleConfigurationJPanel* this) {
    this->jLabel1 = nullptr;
}


void BlankModuleConfigurationJPanel_init(BlankModuleConfigurationJPanel* this) {
    JPanel_init(&this->base);
    BlankModuleConfigurationJPanel_initFields(this);
        BlankModuleConfigurationJPanel_initComponents(this);
}

BlankModuleConfigurationJPanel* BlankModuleConfigurationJPanel_new(void) {
    BlankModuleConfigurationJPanel* this = calloc(1, sizeof(BlankModuleConfigurationJPanel));
    BlankModuleConfigurationJPanel_init(this);
    return this;
}


static void BlankModuleConfigurationJPanel_initComponents(BlankModuleConfigurationJPanel* this) {
        this->jLabel1 = JLabel_new();
        JLabel_setText(this->jLabel1, "No Configuration Available");
        GroupLayout* layout = GroupLayout_new(this);
        BlankModuleConfigurationJPanel_setLayout(this, layout);
        GroupLayout_setHorizontalGroup(layout, JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->LEADING), addGroup, javax_swing->GroupLayout->Alignment->TRAILING, JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(layout), addContainerGap, 231, Short_MAX_VALUE), addComponent, this->jLabel1), addGap, 225, 225, 225)));
        GroupLayout_setVerticalGroup(layout, JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->LEADING), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(layout), addContainerGap), addComponent, this->jLabel1), addContainerGap, 362, Short_MAX_VALUE)));
}

