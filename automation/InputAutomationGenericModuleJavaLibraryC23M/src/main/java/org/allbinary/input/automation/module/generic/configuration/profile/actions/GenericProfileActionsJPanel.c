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
#include "org/allbinary/input/automation/module/DefaultListModelHelper.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/JPanel.h"

typedef struct GenericProfileActionsJPanel GenericProfileActionsJPanel;
struct GenericProfileActionsJPanel {
    JPanel base;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    GenericProfileActions* genericProfileActions;
    GenericProfileActionJPanel* genericProfileActionJPanel;
    JPanel* blankGenericProfileActionJPanel;
    JButton* deleteActionJButton;
    JList* genericProfileActionsJList;
    JPanel* genericProfileActionsJPanel;
    JScrollPane* genericProfileActionsJScrollPane;
    JButton* newActionJButton;
    JDialog* newProfileActionJDialog;
    JLabel* newProfileActionJLabel;
    JTextField* newProfileActionJTextField;
    JButton* okNewProfileActionJButton;
    JButton* saveJButton;
};


GenericProfileActionsJPanel* GenericProfileActionsJPanel_new(void);

void GenericProfileActionsJPanel_init(GenericProfileActionsJPanel* this);
static void GenericProfileActionsJPanel_initComponents(GenericProfileActionsJPanel* this);
void GenericProfileActionsJPanel_setModel(GenericProfileActionsJPanel* this);
static void GenericProfileActionsJPanel_saveJButtonActionPerformed(GenericProfileActionsJPanel* this, ActionEvent* evt);
static void GenericProfileActionsJPanel_updateProfileActionUI(GenericProfileActionsJPanel* this, const char* profileActionNameString);
static void GenericProfileActionsJPanel_genericProfileActionsJListValueChanged(GenericProfileActionsJPanel* this, ListSelectionEvent* evt);
static void GenericProfileActionsJPanel_okNewProfileActionJButtonActionPerformed(GenericProfileActionsJPanel* this, ActionEvent* evt);
static void GenericProfileActionsJPanel_deleteActionJButtonActionPerformed(GenericProfileActionsJPanel* this, ActionEvent* evt);
void GenericProfileActionsJPanel_selectFirstElement(GenericProfileActionsJPanel* this);
GenericProfileActionJPanel* GenericProfileActionsJPanel_getGenericProfileActionJPanel(GenericProfileActionsJPanel* this);
void GenericProfileActionsJPanel_setGenericProfileActionJPanel(GenericProfileActionsJPanel* this, GenericProfileActionJPanel* genericProfileActionJPanel);
GenericProfileActions* GenericProfileActionsJPanel_getGenericProfileActions(GenericProfileActionsJPanel* this);
void GenericProfileActionsJPanel_setGenericProfileActions(GenericProfileActionsJPanel* this, GenericProfileActions* genericProfileActions);
static void GenericProfileActionsJPanel_newActionJButtonActionPerformed(GenericProfileActionsJPanel* this, ActionEvent* evt);

static void GenericProfileActionsJPanel_initFields(GenericProfileActionsJPanel* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->genericProfileActions = nullptr;
    this->genericProfileActionJPanel = nullptr;
    this->blankGenericProfileActionJPanel = nullptr;
    this->deleteActionJButton = nullptr;
    this->genericProfileActionsJList = nullptr;
    this->genericProfileActionsJPanel = nullptr;
    this->genericProfileActionsJScrollPane = nullptr;
    this->newActionJButton = nullptr;
    this->newProfileActionJDialog = nullptr;
    this->newProfileActionJLabel = nullptr;
    this->newProfileActionJTextField = nullptr;
    this->okNewProfileActionJButton = nullptr;
    this->saveJButton = nullptr;
}


void GenericProfileActionsJPanel_init(GenericProfileActionsJPanel* this) {
    JPanel_init(&this->base);
    GenericProfileActionsJPanel_initFields(this);
        GenericProfileActionsJPanel_initComponents(this);
}

GenericProfileActionsJPanel* GenericProfileActionsJPanel_new(void) {
    GenericProfileActionsJPanel* this = calloc(1, sizeof(GenericProfileActionsJPanel));
    GenericProfileActionsJPanel_init(this);
    return this;
}


static void GenericProfileActionsJPanel_initComponents(GenericProfileActionsJPanel* this) {
        this->newProfileActionJDialog = JDialog_new();
        this->newProfileActionJLabel = JLabel_new();
        this->okNewProfileActionJButton = JButton_new();
        this->newProfileActionJTextField = JTextField_new();
        this->genericProfileActionsJPanel = JPanel_new();
        this->genericProfileActionsJScrollPane = JScrollPane_new();
        this->genericProfileActionsJList = JList_new();
        this->newActionJButton = JButton_new();
        this->deleteActionJButton = JButton_new();
        this->saveJButton = JButton_new();
        this->blankGenericProfileActionJPanel = JPanel_new();
        JDialog_setMinimumSize(this->newProfileActionJDialog, Dimension_new(250, 150));
        JDialog_setResizable(this->newProfileActionJDialog, false);
        JLabel_setText(this->newProfileActionJLabel, "New Action Name");
        JButton_setText(this->okNewProfileActionJButton, "Ok");
        JButton_addActionListener(this->okNewProfileActionJButton, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void GenericProfileActionsJPanel_actionPerformed(GenericProfileActionsJPanel* this, ActionEvent* evt) {
                GenericProfileActionsJPanel_okNewProfileActionJButtonActionPerformed(this, evt);
        }
#endif
);
        GroupLayout* newProfileActionJDialogLayout = GroupLayout_new(JDialog_getContentPane(this->newProfileActionJDialog));
        JAVA_CALL(JDialog_getContentPane(this->newProfileActionJDialog), setLayout, newProfileActionJDialogLayout);
        GroupLayout_setHorizontalGroup(newProfileActionJDialogLayout, JAVA_CALL(GroupLayout_createParallelGroup(newProfileActionJDialogLayout, javax_swing->GroupLayout->Alignment->LEADING), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(newProfileActionJDialogLayout), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(newProfileActionJDialogLayout, javax_swing->GroupLayout->Alignment->LEADING), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(newProfileActionJDialogLayout), addGap, 93, 93, 93), addComponent, this->okNewProfileActionJButton)), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(newProfileActionJDialogLayout), addGap, 75, 75, 75), addComponent, this->newProfileActionJLabel)), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(newProfileActionJDialogLayout), addGap, 29, 29, 29), addComponent, this->newProfileActionJTextField, javax_swing->GroupLayout->PREFERRED_SIZE, 178, javax_swing->GroupLayout->PREFERRED_SIZE))), addContainerGap, 34, Short_MAX_VALUE)));
        GroupLayout_setVerticalGroup(newProfileActionJDialogLayout, JAVA_CALL(GroupLayout_createParallelGroup(newProfileActionJDialogLayout, javax_swing->GroupLayout->Alignment->LEADING), addGroup, javax_swing->GroupLayout->Alignment->TRAILING, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(newProfileActionJDialogLayout), addContainerGap), addComponent, this->newProfileActionJLabel), addGap, 21, 21, 21), addComponent, this->newProfileActionJTextField, javax_swing->GroupLayout->PREFERRED_SIZE, javax_swing->GroupLayout->DEFAULT_SIZE, javax_swing->GroupLayout->PREFERRED_SIZE), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED, 20, Short_MAX_VALUE), addComponent, this->okNewProfileActionJButton), addContainerGap)));
        JPanel_setPreferredSize(this->genericProfileActionsJPanel, Dimension_new(10000, 10000));
        JList_addListSelectionListener(this->genericProfileActionsJList, ListSelectionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void GenericProfileActionsJPanel_valueChanged(GenericProfileActionsJPanel* this, ListSelectionEvent* evt) {
                GenericProfileActionsJPanel_genericProfileActionsJListValueChanged(this, evt);
        }
#endif
);
        JScrollPane_setViewportView(this->genericProfileActionsJScrollPane, this->genericProfileActionsJList);
        JButton_setText(this->newActionJButton, "New");
        JButton_addActionListener(this->newActionJButton, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void GenericProfileActionsJPanel_actionPerformed(GenericProfileActionsJPanel* this, ActionEvent* evt) {
                GenericProfileActionsJPanel_newActionJButtonActionPerformed(this, evt);
        }
#endif
);
        JButton_setText(this->deleteActionJButton, "Delete");
        JButton_addActionListener(this->deleteActionJButton, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void GenericProfileActionsJPanel_actionPerformed(GenericProfileActionsJPanel* this, ActionEvent* evt) {
                GenericProfileActionsJPanel_deleteActionJButtonActionPerformed(this, evt);
        }
#endif
);
        JButton_setText(this->saveJButton, "Save");
        JButton_addActionListener(this->saveJButton, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void GenericProfileActionsJPanel_actionPerformed(GenericProfileActionsJPanel* this, ActionEvent* evt) {
                GenericProfileActionsJPanel_saveJButtonActionPerformed(this, evt);
        }
#endif
);
        JPanel_setMinimumSize(this->blankGenericProfileActionJPanel, Dimension_new(500, 300));
        GroupLayout* blankGenericProfileActionJPanelLayout = GroupLayout_new(this->blankGenericProfileActionJPanel);
        JPanel_setLayout(this->blankGenericProfileActionJPanel, blankGenericProfileActionJPanelLayout);
        GroupLayout_setHorizontalGroup(blankGenericProfileActionJPanelLayout, JAVA_CALL(GroupLayout_createParallelGroup(blankGenericProfileActionJPanelLayout, javax_swing->GroupLayout->Alignment->LEADING), addGap, 0, 500, Short_MAX_VALUE));
        GroupLayout_setVerticalGroup(blankGenericProfileActionJPanelLayout, JAVA_CALL(GroupLayout_createParallelGroup(blankGenericProfileActionJPanelLayout, javax_swing->GroupLayout->Alignment->LEADING), addGap, 0, 296, Short_MAX_VALUE));
        GroupLayout* genericProfileActionsJPanelLayout = GroupLayout_new(this->genericProfileActionsJPanel);
        JPanel_setLayout(this->genericProfileActionsJPanel, genericProfileActionsJPanelLayout);
        GroupLayout_setHorizontalGroup(genericProfileActionsJPanelLayout, JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(genericProfileActionsJPanelLayout, javax_swing->GroupLayout->Alignment->LEADING), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(genericProfileActionsJPanelLayout), addComponent, this->genericProfileActionsJScrollPane, javax_swing->GroupLayout->PREFERRED_SIZE, 95, javax_swing->GroupLayout->PREFERRED_SIZE), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addComponent, this->blankGenericProfileActionJPanel, javax_swing->GroupLayout->DEFAULT_SIZE, javax_swing->GroupLayout->DEFAULT_SIZE, Short_MAX_VALUE)), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(genericProfileActionsJPanelLayout), addComponent, this->newActionJButton), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addComponent, this->deleteActionJButton), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addComponent, this->saveJButton), addContainerGap)));
        GroupLayout_setVerticalGroup(genericProfileActionsJPanelLayout, JAVA_CALL(GroupLayout_createParallelGroup(genericProfileActionsJPanelLayout, javax_swing->GroupLayout->Alignment->LEADING), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(genericProfileActionsJPanelLayout), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(genericProfileActionsJPanelLayout, javax_swing->GroupLayout->Alignment->BASELINE), addComponent, this->newActionJButton), addComponent, this->deleteActionJButton), addComponent, this->saveJButton)), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(genericProfileActionsJPanelLayout, javax_swing->GroupLayout->Alignment->LEADING, false), addComponent, this->blankGenericProfileActionJPanel, 0, 296, Short_MAX_VALUE), addComponent, this->genericProfileActionsJScrollPane, javax_swing->GroupLayout->DEFAULT_SIZE, 296, Short_MAX_VALUE)), addContainerGap, javax_swing->GroupLayout->DEFAULT_SIZE, Short_MAX_VALUE)));
        GroupLayout* layout = GroupLayout_new(this);
        GenericProfileActionsJPanel_setLayout(this, layout);
        GroupLayout_setHorizontalGroup(layout, JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->LEADING), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(layout), addComponent, this->genericProfileActionsJPanel, javax_swing->GroupLayout->PREFERRED_SIZE, 596, javax_swing->GroupLayout->PREFERRED_SIZE), addContainerGap, javax_swing->GroupLayout->DEFAULT_SIZE, Short_MAX_VALUE)));
        GroupLayout_setVerticalGroup(layout, JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->LEADING), addComponent, this->genericProfileActionsJPanel, javax_swing->GroupLayout->PREFERRED_SIZE, 336, javax_swing->GroupLayout->PREFERRED_SIZE));
}


void GenericProfileActionsJPanel_setModel(GenericProfileActionsJPanel* this) {
        DefaultListModelHelper* defaultListModelHelper = JAVA_CALL(GenericProfileActionsJPanel_getGenericProfileActions(this), getDefaultListModelHelper);
        if (JAVA_CALL(DefaultListModelHelper_getListModel(defaultListModelHelper), getSize) > 0) {
            JList_setModel(this->genericProfileActionsJList, DefaultListModelHelper_getListModel(defaultListModelHelper));
        }
}


static void GenericProfileActionsJPanel_saveJButtonActionPerformed(GenericProfileActionsJPanel* this, ActionEvent* evt) {
        JAVA_TRY {
            JAVA_CALL(GenericProfileActionsJPanel_getGenericProfileActions(this), save);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "saveJButtonActionPerformed", e);
        } JAVA_END_TRY;
}


static void GenericProfileActionsJPanel_updateProfileActionUI(GenericProfileActionsJPanel* this, const char* profileActionNameString) {
        JPanel_removeAll(this->blankGenericProfileActionJPanel);
        if (profileActionNameString != nullptr) {
            GenericProfileAction* genericProfileAction = JAVA_CALL(GenericProfileActionsJPanel_getGenericProfileActions(this), getAction, profileActionNameString);
            GenericProfileActionsJPanel_setGenericProfileActionJPanel(this, GenericProfileActionJPanel_new());
            JAVA_CALL(GenericProfileActionsJPanel_getGenericProfileActionJPanel(this), setGenericProfileAction, genericProfileAction);
            JAVA_CALL(GenericProfileActionsJPanel_getGenericProfileActionJPanel(this), updateProfileActionUI);
            GroupLayout* layout = ((GroupLayout*) JPanel_getLayout(this->blankGenericProfileActionJPanel));
            GroupLayout_setHorizontalGroup(layout, JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->LEADING), addGap, 0, 395, Short_MAX_VALUE), addComponent, GenericProfileActionsJPanel_getGenericProfileActionJPanel(this), javax_swing->GroupLayout->PREFERRED_SIZE, javax_swing->GroupLayout->DEFAULT_SIZE, javax_swing->GroupLayout->PREFERRED_SIZE));
            GroupLayout_setVerticalGroup(layout, JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->LEADING), addGap, 0, 256, Short_MAX_VALUE), addComponent, GenericProfileActionsJPanel_getGenericProfileActionJPanel(this), javax_swing->GroupLayout->PREFERRED_SIZE, javax_swing->GroupLayout->DEFAULT_SIZE, javax_swing->GroupLayout->PREFERRED_SIZE));
            LogUtil_putF(this->logUtil, "Setting Configuration Profile Actions JPanel", this, "genericProfileActionsJListValueChanged");
        }
}


static void GenericProfileActionsJPanel_genericProfileActionsJListValueChanged(GenericProfileActionsJPanel* this, ListSelectionEvent* evt) {
        JAVA_TRY {
            const char* profileActionNameString = ((const char*) JList_getSelectedValue(this->genericProfileActionsJList));
            GenericProfileActionsJPanel_updateProfileActionUI(this, profileActionNameString);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "genericProfileActionsJListValueChanged", e);
        } JAVA_END_TRY;
}


static void GenericProfileActionsJPanel_okNewProfileActionJButtonActionPerformed(GenericProfileActionsJPanel* this, ActionEvent* evt) {
        JAVA_TRY {
            const char* newActionName = JTextField_getText(this->newProfileActionJTextField);
            JAVA_CALL(GenericProfileActionsJPanel_getGenericProfileActions(this), add, newActionName);
            GenericProfileActionsJPanel_setModel(this);
            JList_setSelectedValue(this->genericProfileActionsJList, newActionName, true);
            JDialog_setVisible(this->newProfileActionJDialog, false);
            GenericProfileActionsJPanel_updateProfileActionUI(this, newActionName);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "okNewProfileActionJButtonActionPerformed", e);
        } JAVA_END_TRY;
}


static void GenericProfileActionsJPanel_deleteActionJButtonActionPerformed(GenericProfileActionsJPanel* this, ActionEvent* evt) {
        JAVA_TRY {
            Any** anyType = JList_getSelectedValues(this->genericProfileActionsJList);
            for (int32_t index = 0; index < java_array_length(anyType); index++) {
                const char* nextSelectedValueString = ((const char*) anyType[index]);
                JAVA_CALL(GenericProfileActionsJPanel_getGenericProfileActions(this), remove, nextSelectedValueString);
            }
            GenericProfileActionsJPanel_selectFirstElement(this);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "deleteActionJButtonActionPerformed", e);
        } JAVA_END_TRY;
}


// throws Exception
void GenericProfileActionsJPanel_selectFirstElement(GenericProfileActionsJPanel* this) {
        GenericProfileActionsJPanel_setModel(this);
        if (JAVA_CALL(JList_getModel(this->genericProfileActionsJList), getSize) > 0) {
            JList_setSelectedValue(this->genericProfileActionsJList, JAVA_CALL(JList_getModel(this->genericProfileActionsJList), getElementAt, 0), true);
            GenericProfileActionsJPanel_updateProfileActionUI(this, ((const char*) JAVA_CALL(JList_getModel(this->genericProfileActionsJList), getElementAt, 0)));
        } else {
            JPanel_removeAll(this->blankGenericProfileActionJPanel);
            JPanel_repaint(this->blankGenericProfileActionJPanel);
        }
}


GenericProfileActionJPanel* GenericProfileActionsJPanel_getGenericProfileActionJPanel(GenericProfileActionsJPanel* this) {
        return this->genericProfileActionJPanel;
}


void GenericProfileActionsJPanel_setGenericProfileActionJPanel(GenericProfileActionsJPanel* this, GenericProfileActionJPanel* genericProfileActionJPanel) {
        this->genericProfileActionJPanel = genericProfileActionJPanel;
}


GenericProfileActions* GenericProfileActionsJPanel_getGenericProfileActions(GenericProfileActionsJPanel* this) {
        return this->genericProfileActions;
}


void GenericProfileActionsJPanel_setGenericProfileActions(GenericProfileActionsJPanel* this, GenericProfileActions* genericProfileActions) {
        this->genericProfileActions = genericProfileActions;
}


static void GenericProfileActionsJPanel_newActionJButtonActionPerformed(GenericProfileActionsJPanel* this, ActionEvent* evt) {
        JDialog_setVisible(this->newProfileActionJDialog, true);
}

