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
// package org.allbinary.input.automation.module.generic.configuration

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/input/automation/module/generic/configuration/profile/GenericProfile.h"
#include "org/allbinary/input/automation/module/generic/configuration/profile/GenericProfileDataWorkerType.h"
#include "org/allbinary/input/automation/module/generic/configuration/profile/GenericProfiles.h"
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/GenericProfileActions.h"
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/GenericProfileActionsJPanel.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/input/automation/module/generic/configuration/JPanel.h"
#include "org/allbinary/input/automation/module/generic/configuration/GenericModuleConfigurationInterface.h"

typedef struct GenericModuleConfigurationJPanel GenericModuleConfigurationJPanel;
struct GenericModuleConfigurationJPanel {
    JPanel base;
    GenericModuleConfigurationInterface GenericModuleConfigurationInterface_interface;
    LogUtil* logUtil;
    StringUtil* stringUtil;
    CommonStrings* commonStrings;
    GenericProfiles* genericProfiles;
    GenericProfile* selectedGenericProfile;
    JPanel* blankGenericProfileActionsJPanel;
    ButtonGroup* buttonGroup2;
    JCheckBox* captureComparisonJCheckBox;
    JCheckBox* captureMotionAnalysisJCheckBox;
    JButton* deleteProfileJButton;
    JTabbedPane* genericJTabbedPane;
    JList* genericProfilesJList;
    JPanel* genericProfilesJPanel;
    JScrollPane* genericProfilesJScrollPane;
    JLabel* jLabel1;
    JLabel* jLabel2;
    JLabel* jLabel3;
    JPanel* jPanel1;
    JButton* newProfileJButton;
    JDialog* newProfileJDialog;
    JLabel* newProfileNameJLabel;
    JTextField* newProfileNameJTextField;
    JButton* okNewProfileJButton;
    JRadioButton* savedCaptureJRadioButton;
    JRadioButton* screenCaptureJRadioButton;
};


GenericModuleConfigurationJPanel* GenericModuleConfigurationJPanel_new(void);

void GenericModuleConfigurationJPanel_init(GenericModuleConfigurationJPanel* this);
static void GenericModuleConfigurationJPanel_initComponents(GenericModuleConfigurationJPanel* this);
static void GenericModuleConfigurationJPanel_savedCaptureJRadioButtonActionPerformed(GenericModuleConfigurationJPanel* this, ActionEvent* evt);
static void GenericModuleConfigurationJPanel_screenCaptureJRadioButtonActionPerformed(GenericModuleConfigurationJPanel* this, ActionEvent* evt);
static void GenericModuleConfigurationJPanel_captureMotionAnalysisJCheckBoxActionPerformed(GenericModuleConfigurationJPanel* this, ActionEvent* evt);
static void GenericModuleConfigurationJPanel_captureComparisonJCheckBoxActionPerformed(GenericModuleConfigurationJPanel* this, ActionEvent* evt);
static void GenericModuleConfigurationJPanel_updateProfileUI(GenericModuleConfigurationJPanel* this, const char* profileNameString);
static void GenericModuleConfigurationJPanel_selectFirstElement(GenericModuleConfigurationJPanel* this);
static void GenericModuleConfigurationJPanel_updateProfileOptions(GenericModuleConfigurationJPanel* this);
JPanel* GenericModuleConfigurationJPanel_getBlankGenericProfileActionsJPanel(GenericModuleConfigurationJPanel* this);
void GenericModuleConfigurationJPanel_setBlankGenericProfileActionsJPanel(GenericModuleConfigurationJPanel* this, JPanel* blankGenericProfileActionsJPanel);
static GenericProfiles* GenericModuleConfigurationJPanel_getGenericProfiles(GenericModuleConfigurationJPanel* this);
static void GenericModuleConfigurationJPanel_setGenericProfiles(GenericModuleConfigurationJPanel* this, GenericProfiles* genericProfiles);
GenericProfile* GenericModuleConfigurationJPanel_getSelectedGenericProfile(GenericModuleConfigurationJPanel* this);
void GenericModuleConfigurationJPanel_setSelectedGenericProfile(GenericModuleConfigurationJPanel* this, GenericProfile* selectedGenericProfile);
static void GenericModuleConfigurationJPanel_genericProfilesJListValueChanged(GenericModuleConfigurationJPanel* this, ListSelectionEvent* evt);
static void GenericModuleConfigurationJPanel_deleteProfileJButtonActionPerformed(GenericModuleConfigurationJPanel* this, ActionEvent* evt);
static void GenericModuleConfigurationJPanel_okNewProfileJButtonActionPerformed(GenericModuleConfigurationJPanel* this, ActionEvent* evt);
static void GenericModuleConfigurationJPanel_newProfileJButtonActionPerformed(GenericModuleConfigurationJPanel* this, ActionEvent* evt);

static void GenericModuleConfigurationJPanel_initFields(GenericModuleConfigurationJPanel* this) {
    this->logUtil = LogUtil_getInstance();
    this->stringUtil = StringUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->genericProfiles = nullptr;
    this->selectedGenericProfile = nullptr;
    this->blankGenericProfileActionsJPanel = nullptr;
    this->buttonGroup2 = nullptr;
    this->captureComparisonJCheckBox = nullptr;
    this->captureMotionAnalysisJCheckBox = nullptr;
    this->deleteProfileJButton = nullptr;
    this->genericJTabbedPane = nullptr;
    this->genericProfilesJList = nullptr;
    this->genericProfilesJPanel = nullptr;
    this->genericProfilesJScrollPane = nullptr;
    this->jLabel1 = nullptr;
    this->jLabel2 = nullptr;
    this->jLabel3 = nullptr;
    this->jPanel1 = nullptr;
    this->newProfileJButton = nullptr;
    this->newProfileJDialog = nullptr;
    this->newProfileNameJLabel = nullptr;
    this->newProfileNameJTextField = nullptr;
    this->okNewProfileJButton = nullptr;
    this->savedCaptureJRadioButton = nullptr;
    this->screenCaptureJRadioButton = nullptr;
}


void GenericModuleConfigurationJPanel_init(GenericModuleConfigurationJPanel* this) {
    JPanel_init(&this->base);
    GenericModuleConfigurationJPanel_initFields(this);
        GenericModuleConfigurationJPanel_initComponents(this);
        GenericModuleConfigurationJPanel_setGenericProfiles(this, GenericProfiles_new(GenericProfiles_DEFAULT_FILE));
        GenericModuleConfigurationJPanel_selectFirstElement(this);
}

GenericModuleConfigurationJPanel* GenericModuleConfigurationJPanel_new(void) {
    GenericModuleConfigurationJPanel* this = calloc(1, sizeof(GenericModuleConfigurationJPanel));
    GenericModuleConfigurationJPanel_init(this);
    return this;
}


static void GenericModuleConfigurationJPanel_initComponents(GenericModuleConfigurationJPanel* this) {
        this->newProfileJDialog = JDialog_new();
        this->okNewProfileJButton = JButton_new();
        this->newProfileNameJLabel = JLabel_new();
        this->newProfileNameJTextField = JTextField_new();
        this->buttonGroup2 = ButtonGroup_new();
        this->genericJTabbedPane = JTabbedPane_new();
        this->genericProfilesJPanel = JPanel_new();
        this->genericProfilesJScrollPane = JScrollPane_new();
        this->genericProfilesJList = JList_new();
        this->newProfileJButton = JButton_new();
        this->deleteProfileJButton = JButton_new();
        this->jPanel1 = JPanel_new();
        this->screenCaptureJRadioButton = JRadioButton_new();
        this->jLabel1 = JLabel_new();
        this->jLabel2 = JLabel_new();
        this->savedCaptureJRadioButton = JRadioButton_new();
        this->captureMotionAnalysisJCheckBox = JCheckBox_new();
        this->captureComparisonJCheckBox = JCheckBox_new();
        this->jLabel3 = JLabel_new();
        this->blankGenericProfileActionsJPanel = JPanel_new();
        JDialog_setMinimumSize(this->newProfileJDialog, Dimension_new(250, 150));
        JDialog_setResizable(this->newProfileJDialog, false);
        JButton_setText(this->okNewProfileJButton, "Ok");
        JButton_addActionListener(this->okNewProfileJButton, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void GenericModuleConfigurationJPanel_actionPerformed(GenericModuleConfigurationJPanel* this, ActionEvent* evt) {
                GenericModuleConfigurationJPanel_okNewProfileJButtonActionPerformed(this, evt);
        }
#endif
);
        JLabel_setText(this->newProfileNameJLabel, "New Profile Name");
        GroupLayout* newProfileJDialogLayout = GroupLayout_new(JDialog_getContentPane(this->newProfileJDialog));
        JAVA_CALL(JDialog_getContentPane(this->newProfileJDialog), setLayout, newProfileJDialogLayout);
        GroupLayout_setHorizontalGroup(newProfileJDialogLayout, JAVA_CALL(GroupLayout_createParallelGroup(newProfileJDialogLayout, javax_swing->GroupLayout->Alignment->LEADING), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(newProfileJDialogLayout), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(newProfileJDialogLayout, javax_swing->GroupLayout->Alignment->LEADING), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(newProfileJDialogLayout), addGap, 80, 80, 80), addComponent, this->newProfileNameJLabel)), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(newProfileJDialogLayout), addGap, 30, 30, 30), addComponent, this->newProfileNameJTextField, javax_swing->GroupLayout->PREFERRED_SIZE, 180, javax_swing->GroupLayout->PREFERRED_SIZE)), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(newProfileJDialogLayout), addGap, 100, 100, 100), addComponent, this->okNewProfileJButton))), addContainerGap, 35, Short_MAX_VALUE)));
        GroupLayout_setVerticalGroup(newProfileJDialogLayout, JAVA_CALL(GroupLayout_createParallelGroup(newProfileJDialogLayout, javax_swing->GroupLayout->Alignment->LEADING), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(newProfileJDialogLayout), addGap, 10, 10, 10), addComponent, this->newProfileNameJLabel), addGap, 16, 16, 16), addComponent, this->newProfileNameJTextField, javax_swing->GroupLayout->PREFERRED_SIZE, javax_swing->GroupLayout->DEFAULT_SIZE, javax_swing->GroupLayout->PREFERRED_SIZE), addGap, 20, 20, 20), addComponent, this->okNewProfileJButton)));
        GenericModuleConfigurationJPanel_setLayout(this, GridLayout_new(1, 0));
        GenericModuleConfigurationJPanel_setMinimumSize(this, Dimension_new(400, 300));
        GenericModuleConfigurationJPanel_setPreferredSize(this, Dimension_new(700, 700));
        JTabbedPane_setToolTipText(this->genericJTabbedPane, this->stringUtil->EMPTY_STRING);
        JTabbedPane_setMinimumSize(this->genericJTabbedPane, Dimension_new(800, 600));
        JPanel_setMinimumSize(this->genericProfilesJPanel, Dimension_new(400, 300));
        JPanel_setPreferredSize(this->genericProfilesJPanel, Dimension_new(0, 0));
        JList_addListSelectionListener(this->genericProfilesJList, ListSelectionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void GenericModuleConfigurationJPanel_valueChanged(GenericModuleConfigurationJPanel* this, ListSelectionEvent* evt) {
                GenericModuleConfigurationJPanel_genericProfilesJListValueChanged(this, evt);
        }
#endif
);
        JScrollPane_setViewportView(this->genericProfilesJScrollPane, this->genericProfilesJList);
        JButton_setText(this->newProfileJButton, "New");
        JButton_setToolTipText(this->newProfileJButton, "Creates a new profile");
        JButton_addActionListener(this->newProfileJButton, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void GenericModuleConfigurationJPanel_actionPerformed(GenericModuleConfigurationJPanel* this, ActionEvent* evt) {
                GenericModuleConfigurationJPanel_newProfileJButtonActionPerformed(this, evt);
        }
#endif
);
        JButton_setText(this->deleteProfileJButton, "Delete");
        JButton_setToolTipText(this->deleteProfileJButton, "Deletes the selected profile");
        JButton_addActionListener(this->deleteProfileJButton, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void GenericModuleConfigurationJPanel_actionPerformed(GenericModuleConfigurationJPanel* this, ActionEvent* evt) {
                GenericModuleConfigurationJPanel_deleteProfileJButtonActionPerformed(this, evt);
        }
#endif
);
        JPanel_setPreferredSize(this->jPanel1, Dimension_new(1000, 100));
        JRadioButton_setText(this->screenCaptureJRadioButton, "Screen Captures");
        JRadioButton_setToolTipText(this->screenCaptureJRadioButton, "Records the screen into memory for logical processing");
        JRadioButton_setBorder(this->screenCaptureJRadioButton, JAVA_CALL(javax_swing->BorderFactory, createEmptyBorder, 0, 0, 0, 0));
        JRadioButton_setMargin(this->screenCaptureJRadioButton, Insets_new(0, 0, 0, 0));
        JRadioButton_addActionListener(this->screenCaptureJRadioButton, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void GenericModuleConfigurationJPanel_actionPerformed(GenericModuleConfigurationJPanel* this, ActionEvent* evt) {
                GenericModuleConfigurationJPanel_screenCaptureJRadioButtonActionPerformed(this, evt);
        }
#endif
);
        JLabel_setText(this->jLabel1, "Profile Options");
        JLabel_setText(this->jLabel2, "Process From:");
        JRadioButton_setText(this->savedCaptureJRadioButton, "Saved Images");
        JRadioButton_setToolTipText(this->savedCaptureJRadioButton, "Loads images from files for logical processing.  Usually for debugging your profile actions");
        JRadioButton_setBorder(this->savedCaptureJRadioButton, JAVA_CALL(javax_swing->BorderFactory, createEmptyBorder, 0, 0, 0, 0));
        JRadioButton_setMargin(this->savedCaptureJRadioButton, Insets_new(0, 0, 0, 0));
        JRadioButton_addActionListener(this->savedCaptureJRadioButton, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void GenericModuleConfigurationJPanel_actionPerformed(GenericModuleConfigurationJPanel* this, ActionEvent* evt) {
                GenericModuleConfigurationJPanel_savedCaptureJRadioButtonActionPerformed(this, evt);
        }
#endif
);
        JCheckBox_setText(this->captureMotionAnalysisJCheckBox, "Motion Analysis");
        JCheckBox_setToolTipText(this->captureMotionAnalysisJCheckBox, "Uses image comparison and contraints to locate moving objects");
        JCheckBox_setBorder(this->captureMotionAnalysisJCheckBox, JAVA_CALL(javax_swing->BorderFactory, createEmptyBorder, 0, 0, 0, 0));
        JCheckBox_setMargin(this->captureMotionAnalysisJCheckBox, Insets_new(0, 0, 0, 0));
        JCheckBox_addActionListener(this->captureMotionAnalysisJCheckBox, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void GenericModuleConfigurationJPanel_actionPerformed(GenericModuleConfigurationJPanel* this, ActionEvent* evt) {
                GenericModuleConfigurationJPanel_captureMotionAnalysisJCheckBoxActionPerformed(this, evt);
        }
#endif
);
        JCheckBox_setText(this->captureComparisonJCheckBox, "Comparison");
        JCheckBox_setToolTipText(this->captureComparisonJCheckBox, "Compares the last two input images for multi image logic");
        JCheckBox_setBorder(this->captureComparisonJCheckBox, JAVA_CALL(javax_swing->BorderFactory, createEmptyBorder, 0, 0, 0, 0));
        JCheckBox_setMargin(this->captureComparisonJCheckBox, Insets_new(0, 0, 0, 0));
        JCheckBox_addActionListener(this->captureComparisonJCheckBox, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void GenericModuleConfigurationJPanel_actionPerformed(GenericModuleConfigurationJPanel* this, ActionEvent* evt) {
                GenericModuleConfigurationJPanel_captureComparisonJCheckBoxActionPerformed(this, evt);
        }
#endif
);
        JLabel_setText(this->jLabel3, "Image Processing:");
        JLabel_setToolTipText(this->jLabel3, "Turns on/off various extended image processing");
        GroupLayout* jPanel1Layout = GroupLayout_new(this->jPanel1);
        JPanel_setLayout(this->jPanel1, jPanel1Layout);
        GroupLayout_setHorizontalGroup(jPanel1Layout, JAVA_CALL(GroupLayout_createParallelGroup(jPanel1Layout, javax_swing->GroupLayout->Alignment->LEADING), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(jPanel1Layout), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(jPanel1Layout, javax_swing->GroupLayout->Alignment->LEADING), addComponent, this->screenCaptureJRadioButton), addComponent, this->jLabel1), addComponent, this->jLabel2), addComponent, this->savedCaptureJRadioButton), addComponent, this->captureMotionAnalysisJCheckBox), addComponent, this->captureComparisonJCheckBox), addComponent, this->jLabel3)), addContainerGap, 22, Short_MAX_VALUE)));
        GroupLayout_setVerticalGroup(jPanel1Layout, JAVA_CALL(GroupLayout_createParallelGroup(jPanel1Layout, javax_swing->GroupLayout->Alignment->LEADING), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(jPanel1Layout), addComponent, this->jLabel1), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addComponent, this->jLabel2), addGap, 7, 7, 7), addComponent, this->screenCaptureJRadioButton), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addComponent, this->savedCaptureJRadioButton), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addComponent, this->jLabel3), addGap, 7, 7, 7), addComponent, this->captureComparisonJCheckBox), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addComponent, this->captureMotionAnalysisJCheckBox), addContainerGap, 106, Short_MAX_VALUE)));
        GroupLayout* genericProfilesJPanelLayout = GroupLayout_new(this->genericProfilesJPanel);
        JPanel_setLayout(this->genericProfilesJPanel, genericProfilesJPanelLayout);
        GroupLayout_setHorizontalGroup(genericProfilesJPanelLayout, JAVA_CALL(GroupLayout_createParallelGroup(genericProfilesJPanelLayout, javax_swing->GroupLayout->Alignment->LEADING), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(genericProfilesJPanelLayout), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(genericProfilesJPanelLayout, javax_swing->GroupLayout->Alignment->LEADING), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(genericProfilesJPanelLayout), addComponent, this->newProfileJButton), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addComponent, this->deleteProfileJButton)), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(genericProfilesJPanelLayout), addComponent, this->genericProfilesJScrollPane, javax_swing->GroupLayout->PREFERRED_SIZE, javax_swing->GroupLayout->DEFAULT_SIZE, javax_swing->GroupLayout->PREFERRED_SIZE), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addComponent, this->jPanel1, javax_swing->GroupLayout->DEFAULT_SIZE, 119, Short_MAX_VALUE))), addContainerGap)));
        GroupLayout_setVerticalGroup(genericProfilesJPanelLayout, JAVA_CALL(GroupLayout_createParallelGroup(genericProfilesJPanelLayout, javax_swing->GroupLayout->Alignment->LEADING), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(genericProfilesJPanelLayout), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(genericProfilesJPanelLayout, javax_swing->GroupLayout->Alignment->BASELINE), addComponent, this->newProfileJButton), addComponent, this->deleteProfileJButton)), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(genericProfilesJPanelLayout, javax_swing->GroupLayout->Alignment->LEADING), addComponent, this->jPanel1, javax_swing->GroupLayout->DEFAULT_SIZE, 246, Short_MAX_VALUE), addComponent, this->genericProfilesJScrollPane, javax_swing->GroupLayout->DEFAULT_SIZE, 246, Short_MAX_VALUE))));
        JTabbedPane_addTab(this->genericJTabbedPane, "Profiles", this->genericProfilesJPanel);
        GroupLayout* blankGenericProfileActionsJPanelLayout = GroupLayout_new(this->blankGenericProfileActionsJPanel);
        JPanel_setLayout(this->blankGenericProfileActionsJPanel, blankGenericProfileActionsJPanelLayout);
        GroupLayout_setHorizontalGroup(blankGenericProfileActionsJPanelLayout, JAVA_CALL(GroupLayout_createParallelGroup(blankGenericProfileActionsJPanelLayout, javax_swing->GroupLayout->Alignment->LEADING), addGap, 0, 395, Short_MAX_VALUE));
        GroupLayout_setVerticalGroup(blankGenericProfileActionsJPanelLayout, JAVA_CALL(GroupLayout_createParallelGroup(blankGenericProfileActionsJPanelLayout, javax_swing->GroupLayout->Alignment->LEADING), addGap, 0, 275, Short_MAX_VALUE));
        JTabbedPane_addTab(this->genericJTabbedPane, "Actions", this->blankGenericProfileActionsJPanel);
        GenericModuleConfigurationJPanel_add(this, this->genericJTabbedPane);
}


static void GenericModuleConfigurationJPanel_savedCaptureJRadioButtonActionPerformed(GenericModuleConfigurationJPanel* this, ActionEvent* evt) {
        JAVA_TRY {
            if (JRadioButton_isSelected(this->savedCaptureJRadioButton)) {
                LogUtil_putF(this->logUtil, "Selected", this, "savedCaptureJRadioButtonActionPerformed");
                JAVA_CALL(GenericModuleConfigurationJPanel_getSelectedGenericProfile(this), add, GenericProfileDataWorkerType_SAVED_CAPTURE);
                JAVA_CALL(GenericModuleConfigurationJPanel_getSelectedGenericProfile(this), remove, GenericProfileDataWorkerType_SCREEN_CAPTURE);
                JRadioButton_setSelected(this->screenCaptureJRadioButton, false);
                JAVA_CALL(GenericModuleConfigurationJPanel_getGenericProfiles(this), save);
            }
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "savedCaptureJRadioButtonActionPerformed", e);
        } JAVA_END_TRY;
}


static void GenericModuleConfigurationJPanel_screenCaptureJRadioButtonActionPerformed(GenericModuleConfigurationJPanel* this, ActionEvent* evt) {
        JAVA_TRY {
            if (JRadioButton_isSelected(this->screenCaptureJRadioButton)) {
                LogUtil_putF(this->logUtil, "Selected", this, "screenCaptureJRadioButtonActionPerformed");
                JAVA_CALL(GenericModuleConfigurationJPanel_getSelectedGenericProfile(this), add, GenericProfileDataWorkerType_SCREEN_CAPTURE);
                JAVA_CALL(GenericModuleConfigurationJPanel_getSelectedGenericProfile(this), remove, GenericProfileDataWorkerType_SAVED_CAPTURE);
                JRadioButton_setSelected(this->savedCaptureJRadioButton, false);
                JAVA_CALL(GenericModuleConfigurationJPanel_getGenericProfiles(this), save);
            }
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "screenCaptureJRadioButtonActionPerformed", e);
        } JAVA_END_TRY;
}


static void GenericModuleConfigurationJPanel_captureMotionAnalysisJCheckBoxActionPerformed(GenericModuleConfigurationJPanel* this, ActionEvent* evt) {
        JAVA_TRY {
            if (JCheckBox_isSelected(this->captureMotionAnalysisJCheckBox)) {
                JAVA_CALL(GenericModuleConfigurationJPanel_getSelectedGenericProfile(this), add, GenericProfileDataWorkerType_MOTION);
            } else {
                JAVA_CALL(GenericModuleConfigurationJPanel_getSelectedGenericProfile(this), remove, GenericProfileDataWorkerType_MOTION);
            }
            JAVA_CALL(GenericModuleConfigurationJPanel_getGenericProfiles(this), save);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "captureComparisonJCheckBoxActionPerformed", e);
        } JAVA_END_TRY;
}


static void GenericModuleConfigurationJPanel_captureComparisonJCheckBoxActionPerformed(GenericModuleConfigurationJPanel* this, ActionEvent* evt) {
        JAVA_TRY {
            if (JCheckBox_isSelected(this->captureComparisonJCheckBox)) {
                JAVA_CALL(GenericModuleConfigurationJPanel_getSelectedGenericProfile(this), add, GenericProfileDataWorkerType_COMPARISON);
            } else {
                JAVA_CALL(GenericModuleConfigurationJPanel_getSelectedGenericProfile(this), remove, GenericProfileDataWorkerType_COMPARISON);
            }
            JAVA_CALL(GenericModuleConfigurationJPanel_getGenericProfiles(this), save);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "captureComparisonJCheckBoxActionPerformed", e);
        } JAVA_END_TRY;
}


// throws Exception
static void GenericModuleConfigurationJPanel_updateProfileUI(GenericModuleConfigurationJPanel* this, const char* profileNameString) {
        JAVA_CALL(GenericModuleConfigurationJPanel_getBlankGenericProfileActionsJPanel(this), removeAll);
        if (profileNameString != nullptr) {
            GenericProfileActionsJPanel* genericProfileActionsJPanel = GenericProfileActionsJPanel_new();
            GenericModuleConfigurationJPanel_setSelectedGenericProfile(this, JAVA_CALL(GenericModuleConfigurationJPanel_getGenericProfiles(this), get, profileNameString));
            JAVA_CALL(GenericModuleConfigurationJPanel_getSelectedGenericProfile(this), setGenericProfileActions, GenericProfileActions_new(genericProfileActionsJPanel, profileNameString));
            GenericProfileActionsJPanel_setGenericProfileActions(genericProfileActionsJPanel, JAVA_CALL(GenericModuleConfigurationJPanel_getSelectedGenericProfile(this), getGenericProfileActions));
            GenericProfileActionsJPanel_selectFirstElement(genericProfileActionsJPanel);
            GroupLayout* layout = ((GroupLayout*) JAVA_CALL(GenericModuleConfigurationJPanel_getBlankGenericProfileActionsJPanel(this), getLayout));
            GroupLayout_setHorizontalGroup(layout, JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->LEADING), addGap, 0, 395, Short_MAX_VALUE), addComponent, genericProfileActionsJPanel, javax_swing->GroupLayout->PREFERRED_SIZE, javax_swing->GroupLayout->DEFAULT_SIZE, javax_swing->GroupLayout->PREFERRED_SIZE));
            GroupLayout_setVerticalGroup(layout, JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->LEADING), addGap, 0, 256, Short_MAX_VALUE), addComponent, genericProfileActionsJPanel, javax_swing->GroupLayout->PREFERRED_SIZE, javax_swing->GroupLayout->DEFAULT_SIZE, javax_swing->GroupLayout->PREFERRED_SIZE));
            GenericModuleConfigurationJPanel_updateProfileOptions(this);
            LogUtil_putF(this->logUtil, "Setting Configuration Profile JPanel", this, "updateProfileUI");
        } else {
            LogUtil_putF(this->logUtil, "Null Configuration Profile", this, "updateProfileUI");
        }
}


// throws Exception
static void GenericModuleConfigurationJPanel_selectFirstElement(GenericModuleConfigurationJPanel* this) {
        JList_setModel(this->genericProfilesJList, JAVA_CALL(JAVA_CALL(GenericModuleConfigurationJPanel_getGenericProfiles(this), getDefaultListModelHelper), getListModel));
        if (JAVA_CALL(JList_getModel(this->genericProfilesJList), getSize) > 0) {
            JList_setSelectedValue(this->genericProfilesJList, JAVA_CALL(JList_getModel(this->genericProfilesJList), getElementAt, 0), true);
            GenericModuleConfigurationJPanel_updateProfileUI(this, ((const char*) JAVA_CALL(JList_getModel(this->genericProfilesJList), getElementAt, 0)));
        }
}


// throws Exception
static void GenericModuleConfigurationJPanel_updateProfileOptions(GenericModuleConfigurationJPanel* this) {
        LogUtil_putF(this->logUtil, this->commonStrings->START, this, "updateProfileOptions");
        GenericProfile* genericProfile = GenericModuleConfigurationJPanel_getSelectedGenericProfile(this);
        BasicArrayList* vector = GenericProfile_getGenericProfileDataWorkerTypeVector(genericProfile);
        JRadioButton_setSelected(this->screenCaptureJRadioButton, false);
        JRadioButton_setSelected(this->savedCaptureJRadioButton, false);
        JCheckBox_setSelected(this->captureComparisonJCheckBox, false);
        JCheckBox_setSelected(this->captureMotionAnalysisJCheckBox, false);
        int32_t size = BasicArrayList_size(vector);
        for (int32_t index = 0; index < size; index++) {
            GenericProfileDataWorkerType* genericProfileDataWorkerType = ((GenericProfileDataWorkerType*) BasicArrayList_get(vector, index));
            LogUtil_putF(this->logUtil, java_concat(java_concat(GenericProfile_getName(genericProfile), " has GenericProfileDataWorkerType: "), GenericProfileDataWorkerType_toString(genericProfileDataWorkerType)), this, "updateProfileOptions");
            if (genericProfileDataWorkerType == GenericProfileDataWorkerType_SCREEN_CAPTURE) {
                LogUtil_putF(this->logUtil, "Screen Capture Selected", this, "updateProfileOptions");
                JRadioButton_setSelected(this->screenCaptureJRadioButton, true);
            } else if (genericProfileDataWorkerType == GenericProfileDataWorkerType_SAVED_CAPTURE) {
                LogUtil_putF(this->logUtil, "Saved Capture Selected", this, "updateProfileOptions");
                JRadioButton_setSelected(this->savedCaptureJRadioButton, true);
            } else if (genericProfileDataWorkerType == GenericProfileDataWorkerType_COMPARISON) {
                LogUtil_putF(this->logUtil, "Checking Comparison Box", this, "updateProfileOptions");
                JCheckBox_setSelected(this->captureComparisonJCheckBox, true);
            } else if (genericProfileDataWorkerType == GenericProfileDataWorkerType_MOTION) {
                LogUtil_putF(this->logUtil, "Checking Motion Box", this, "updateProfileOptions");
                JCheckBox_setSelected(this->captureMotionAnalysisJCheckBox, true);
            }
        }
        if (!JRadioButton_isSelected(this->screenCaptureJRadioButton) && !JRadioButton_isSelected(this->savedCaptureJRadioButton)) {
            JRadioButton_setSelected(this->screenCaptureJRadioButton, true);
            JAVA_CALL(GenericModuleConfigurationJPanel_getSelectedGenericProfile(this), add, GenericProfileDataWorkerType_SCREEN_CAPTURE);
        }
        LogUtil_putF(this->logUtil, this->commonStrings->END, this, "updateProfileOptions");
}


JPanel* GenericModuleConfigurationJPanel_getBlankGenericProfileActionsJPanel(GenericModuleConfigurationJPanel* this) {
        return this->blankGenericProfileActionsJPanel;
}


void GenericModuleConfigurationJPanel_setBlankGenericProfileActionsJPanel(GenericModuleConfigurationJPanel* this, JPanel* blankGenericProfileActionsJPanel) {
        this->blankGenericProfileActionsJPanel = blankGenericProfileActionsJPanel;
}


static GenericProfiles* GenericModuleConfigurationJPanel_getGenericProfiles(GenericModuleConfigurationJPanel* this) {
        return this->genericProfiles;
}


static void GenericModuleConfigurationJPanel_setGenericProfiles(GenericModuleConfigurationJPanel* this, GenericProfiles* genericProfiles) {
        this->genericProfiles = genericProfiles;
}


GenericProfile* GenericModuleConfigurationJPanel_getSelectedGenericProfile(GenericModuleConfigurationJPanel* this) {
        return this->selectedGenericProfile;
}


void GenericModuleConfigurationJPanel_setSelectedGenericProfile(GenericModuleConfigurationJPanel* this, GenericProfile* selectedGenericProfile) {
        this->selectedGenericProfile = selectedGenericProfile;
}


static void GenericModuleConfigurationJPanel_genericProfilesJListValueChanged(GenericModuleConfigurationJPanel* this, ListSelectionEvent* evt) {
        JAVA_TRY {
            const char* profileNameString = ((const char*) JList_getSelectedValue(this->genericProfilesJList));
            GenericModuleConfigurationJPanel_updateProfileUI(this, profileNameString);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "genericProfilesJListValueChanged", e);
        } JAVA_END_TRY;
}


static void GenericModuleConfigurationJPanel_deleteProfileJButtonActionPerformed(GenericModuleConfigurationJPanel* this, ActionEvent* evt) {
        JAVA_TRY {
            Any** anyType = JList_getSelectedValues(this->genericProfilesJList);
            for (int32_t index = 0; index < java_array_length(anyType); index++) {
                const char* nextSelectedValueString = ((const char*) anyType[index]);
                JAVA_CALL(GenericModuleConfigurationJPanel_getGenericProfiles(this), remove, nextSelectedValueString);
            }
            GenericModuleConfigurationJPanel_selectFirstElement(this);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "deleteProfileJButtonActionPerformed", e);
        } JAVA_END_TRY;
}


static void GenericModuleConfigurationJPanel_okNewProfileJButtonActionPerformed(GenericModuleConfigurationJPanel* this, ActionEvent* evt) {
        JAVA_TRY {
            const char* newProfileName = JTextField_getText(this->newProfileNameJTextField);
            JAVA_CALL(GenericModuleConfigurationJPanel_getGenericProfiles(this), add, newProfileName);
            JList_setModel(this->genericProfilesJList, JAVA_CALL(JAVA_CALL(GenericModuleConfigurationJPanel_getGenericProfiles(this), getDefaultListModelHelper), getListModel));
            JList_setSelectedValue(this->genericProfilesJList, newProfileName, true);
            JDialog_setVisible(this->newProfileJDialog, false);
            GenericModuleConfigurationJPanel_updateProfileUI(this, newProfileName);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "okNewProfileJButtonActionPerformed", e);
        } JAVA_END_TRY;
}


static void GenericModuleConfigurationJPanel_newProfileJButtonActionPerformed(GenericModuleConfigurationJPanel* this, ActionEvent* evt) {
        JDialog_setVisible(this->newProfileJDialog, true);
}

