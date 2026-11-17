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
#include "org/allbinary/input/automation/actions/script/condition/ProfileActionScriptConditionInterface.h"
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/GenericProfileAction.h"
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/GenericProfileActionJPanel.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/script/Panel.h"

typedef struct RemoveActionScriptItemJPanel RemoveActionScriptItemJPanel;
struct RemoveActionScriptItemJPanel {
    Panel base;
    LogUtil* logUtil;
    GenericProfileActionJPanel* genericProfileActionJPanel;
    ProfileActionScriptConditionInterface* profileActionScriptConditionInterface;
    JButton* removeJButton;
};


RemoveActionScriptItemJPanel* RemoveActionScriptItemJPanel_new(GenericProfileActionJPanel* genericProfileActionJPanel, ProfileActionScriptConditionInterface* profileActionScriptConditionInterface);

void RemoveActionScriptItemJPanel_init(RemoveActionScriptItemJPanel* this, GenericProfileActionJPanel* genericProfileActionJPanel, ProfileActionScriptConditionInterface* profileActionScriptConditionInterface);
static void RemoveActionScriptItemJPanel_initComponents(RemoveActionScriptItemJPanel* this);
static void RemoveActionScriptItemJPanel_removeJButtonActionPerformed(RemoveActionScriptItemJPanel* this, ActionEvent* evt);

static void RemoveActionScriptItemJPanel_initFields(RemoveActionScriptItemJPanel* this) {
    this->logUtil = LogUtil_getInstance();
    
    
    this->removeJButton = nullptr;
}


void RemoveActionScriptItemJPanel_init(RemoveActionScriptItemJPanel* this, GenericProfileActionJPanel* genericProfileActionJPanel, ProfileActionScriptConditionInterface* profileActionScriptConditionInterface) {
    Panel_init(&this->base);
    RemoveActionScriptItemJPanel_initFields(this);
        RemoveActionScriptItemJPanel_initComponents(this);
        this->genericProfileActionJPanel = genericProfileActionJPanel;
        this->profileActionScriptConditionInterface = profileActionScriptConditionInterface;
}

RemoveActionScriptItemJPanel* RemoveActionScriptItemJPanel_new(GenericProfileActionJPanel* genericProfileActionJPanel, ProfileActionScriptConditionInterface* profileActionScriptConditionInterface) {
    RemoveActionScriptItemJPanel* this = calloc(1, sizeof(RemoveActionScriptItemJPanel));
    RemoveActionScriptItemJPanel_init(this, genericProfileActionJPanel, profileActionScriptConditionInterface);
    return this;
}


static void RemoveActionScriptItemJPanel_initComponents(RemoveActionScriptItemJPanel* this) {
        this->removeJButton = JButton_new();
        RemoveActionScriptItemJPanel_setLayout(this, GridLayout_new());
        JButton_setText(this->removeJButton, "Remove");
        JButton_addActionListener(this->removeJButton, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void RemoveActionScriptItemJPanel_actionPerformed(RemoveActionScriptItemJPanel* this, ActionEvent* evt) {
                RemoveActionScriptItemJPanel_removeJButtonActionPerformed(this, evt);
        }
#endif
);
        RemoveActionScriptItemJPanel_add(this, this->removeJButton);
}


static void RemoveActionScriptItemJPanel_removeJButtonActionPerformed(RemoveActionScriptItemJPanel* this, ActionEvent* evt) {
        GenericProfileAction* genericProfileAction = GenericProfileActionJPanel_getGenericProfileAction(this->genericProfileActionJPanel);
        if (genericProfileAction == nullptr) {
            LogUtil_putF(this->logUtil, "GenericProfileAction was null", this, "removeJButtonActionPerformed");
            return;
        }
        JAVA_CALL(GenericProfileAction_getGenericProfileActionScript(genericProfileAction), removeCondition, this->profileActionScriptConditionInterface);
        GenericProfileActionJPanel_updateProfileActionUI(this->genericProfileActionJPanel);
}

