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
// package org.allbinary.input.automation.module.actions.script.condition.processors.output

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
#include "org/allbinary/input/media/image/InputImageType.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/input/automation/module/actions/script/condition/processors/output/JPanel.h"

typedef struct ImageActionScriptOutputJPanel ImageActionScriptOutputJPanel;
struct ImageActionScriptOutputJPanel {
    JPanel base;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    ImageActionScriptOutputInterface* capturedImageActionScriptOutputInterface;
    JButton* capturedImageActionJButton;
    JDialog* capturedImageActionJDialog;
    JCheckBox* displayJCheckBox;
    JList* itemTypesJList;
    JLabel* jLabel1;
    JScrollPane* jScrollPane1;
    JButton* okJButton;
    JCheckBox* saveJCheckBox;
    JLabel* titleJLabel;
};


ImageActionScriptOutputJPanel* ImageActionScriptOutputJPanel_new(ImageActionScriptOutputInterface* capturedImageActionScriptOutputInterface);

void ImageActionScriptOutputJPanel_init(ImageActionScriptOutputJPanel* this, ImageActionScriptOutputInterface* capturedImageActionScriptOutputInterface);
static void ImageActionScriptOutputJPanel_set(ImageActionScriptOutputJPanel* this);
static void ImageActionScriptOutputJPanel_update(ImageActionScriptOutputJPanel* this);
static void ImageActionScriptOutputJPanel_setImageTypeJlistModel(ImageActionScriptOutputJPanel* this);
JDialog* ImageActionScriptOutputJPanel_getCapturedImageActionJDialog(ImageActionScriptOutputJPanel* this);
void ImageActionScriptOutputJPanel_setCapturedImageActionJDialog(ImageActionScriptOutputJPanel* this, JDialog* capturedImageActionJDialog);
static void ImageActionScriptOutputJPanel_initComponents(ImageActionScriptOutputJPanel* this);
static void ImageActionScriptOutputJPanel_displayJCheckBoxActionPerformed(ImageActionScriptOutputJPanel* this, ActionEvent* evt);
static void ImageActionScriptOutputJPanel_okJButtonActionPerformed(ImageActionScriptOutputJPanel* this, ActionEvent* evt);
static void ImageActionScriptOutputJPanel_capturedImageActionJButtonActionPerformed(ImageActionScriptOutputJPanel* this, ActionEvent* evt);

static void ImageActionScriptOutputJPanel_initFields(ImageActionScriptOutputJPanel* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    
    this->capturedImageActionJButton = nullptr;
    this->capturedImageActionJDialog = nullptr;
    this->displayJCheckBox = nullptr;
    this->itemTypesJList = nullptr;
    this->jLabel1 = nullptr;
    this->jScrollPane1 = nullptr;
    this->okJButton = nullptr;
    this->saveJCheckBox = nullptr;
    this->titleJLabel = nullptr;
}


void ImageActionScriptOutputJPanel_init(ImageActionScriptOutputJPanel* this, ImageActionScriptOutputInterface* capturedImageActionScriptOutputInterface) {
    JPanel_init(&this->base);
    ImageActionScriptOutputJPanel_initFields(this);
        LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
        ImageActionScriptOutputJPanel_initComponents(this);
        this->capturedImageActionScriptOutputInterface = capturedImageActionScriptOutputInterface;
        ImageActionScriptOutputJPanel_set(this);
}

ImageActionScriptOutputJPanel* ImageActionScriptOutputJPanel_new(ImageActionScriptOutputInterface* capturedImageActionScriptOutputInterface) {
    ImageActionScriptOutputJPanel* this = calloc(1, sizeof(ImageActionScriptOutputJPanel));
    ImageActionScriptOutputJPanel_init(this, capturedImageActionScriptOutputInterface);
    return this;
}


static void ImageActionScriptOutputJPanel_set(ImageActionScriptOutputJPanel* this) {
        ImageActionScriptOutputJPanel_setImageTypeJlistModel(this);
        ImageTypes* imageTypes = ImageActionScriptOutputInterface_getImageTypes(this->capturedImageActionScriptOutputInterface);
        BasicArrayList* vector = ImageTypes_getVector(imageTypes);
        int32_t* selectedArray = ((int32_t*) java_array_new(sizeof(int32_t), BasicArrayList_size(vector)));
        int32_t size = BasicArrayList_size(vector);
        for (int32_t index = 0; index < size; index++) {
            InputImageType* imageType = ((InputImageType*) BasicArrayList_get(vector, index));
            selectedArray[index++] = InputImageType_getIndex(imageType);
        }
        JList_setSelectedIndices(this->itemTypesJList, selectedArray);
        if (ImageActionScriptOutputInterface_isSaved(this->capturedImageActionScriptOutputInterface)) {
            JCheckBox_setSelected(this->saveJCheckBox, true);
        }
        if (ImageActionScriptOutputInterface_isSaved(this->capturedImageActionScriptOutputInterface)) {
            JCheckBox_setSelected(this->displayJCheckBox, true);
        }
        ImageActionScriptOutputInterface_log(this->capturedImageActionScriptOutputInterface);
}


static void ImageActionScriptOutputJPanel_update(ImageActionScriptOutputJPanel* this) {
        Any** anyType = JList_getSelectedValues(this->itemTypesJList);
        ImageTypes* imageTypes = ImageTypes_valueOf(anyType);
        ImageActionScriptOutputInterface_setImageTypes(this->capturedImageActionScriptOutputInterface, imageTypes);
        if (JCheckBox_isSelected(this->saveJCheckBox)) {
            ImageActionScriptOutputInterface_setSaved(this->capturedImageActionScriptOutputInterface, true);
        } else {
            ImageActionScriptOutputInterface_setSaved(this->capturedImageActionScriptOutputInterface, false);
        }
        if (JCheckBox_isSelected(this->displayJCheckBox)) {
            ImageActionScriptOutputInterface_setDisplay(this->capturedImageActionScriptOutputInterface, true);
        } else {
            ImageActionScriptOutputInterface_setDisplay(this->capturedImageActionScriptOutputInterface, false);
        }
        ImageActionScriptOutputInterface_log(this->capturedImageActionScriptOutputInterface);
}


static void ImageActionScriptOutputJPanel_setImageTypeJlistModel(ImageActionScriptOutputJPanel* this) {
        DefaultListModel* defaultListModel = DefaultListModel_new();
        BasicArrayList* vector = InputImageType_getAllAsVector();
        int32_t size = BasicArrayList_size(vector);
        for (int32_t index = 0; index < size; index++) {
            InputImageType* imageType = ((InputImageType*) BasicArrayList_get(vector, index));
            DefaultListModel_addElement(defaultListModel, InputImageType_getName(imageType));
        }
        JList_setModel(this->itemTypesJList, defaultListModel);
}


JDialog* ImageActionScriptOutputJPanel_getCapturedImageActionJDialog(ImageActionScriptOutputJPanel* this) {
        return this->capturedImageActionJDialog;
}


void ImageActionScriptOutputJPanel_setCapturedImageActionJDialog(ImageActionScriptOutputJPanel* this, JDialog* capturedImageActionJDialog) {
        this->capturedImageActionJDialog = capturedImageActionJDialog;
}


static void ImageActionScriptOutputJPanel_initComponents(ImageActionScriptOutputJPanel* this) {
        this->capturedImageActionJDialog = JDialog_new();
        this->titleJLabel = JLabel_new();
        this->okJButton = JButton_new();
        this->saveJCheckBox = JCheckBox_new();
        this->displayJCheckBox = JCheckBox_new();
        this->jScrollPane1 = JScrollPane_new();
        this->itemTypesJList = JList_new();
        this->capturedImageActionJButton = JButton_new();
        this->jLabel1 = JLabel_new();
        JDialog_setMinimumSize(this->capturedImageActionJDialog, Dimension_new(250, 250));
        JLabel_setText(this->titleJLabel, "Image Output Options");
        JButton_setText(this->okJButton, "OK");
        JButton_addActionListener(this->okJButton, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void ImageActionScriptOutputJPanel_actionPerformed(ImageActionScriptOutputJPanel* this, ActionEvent* evt) {
                ImageActionScriptOutputJPanel_okJButtonActionPerformed(this, evt);
        }
#endif
);
        JCheckBox_setText(this->saveJCheckBox, "Save To File");
        JCheckBox_setBorder(this->saveJCheckBox, JAVA_CALL(javax_swing->BorderFactory, createEmptyBorder, 0, 0, 0, 0));
        JCheckBox_setMargin(this->saveJCheckBox, Insets_new(0, 0, 0, 0));
        JCheckBox_setText(this->displayJCheckBox, "Display");
        JCheckBox_setBorder(this->displayJCheckBox, JAVA_CALL(javax_swing->BorderFactory, createEmptyBorder, 0, 0, 0, 0));
        JCheckBox_setMargin(this->displayJCheckBox, Insets_new(0, 0, 0, 0));
        JCheckBox_addActionListener(this->displayJCheckBox, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void ImageActionScriptOutputJPanel_actionPerformed(ImageActionScriptOutputJPanel* this, ActionEvent* evt) {
                ImageActionScriptOutputJPanel_displayJCheckBoxActionPerformed(this, evt);
        }
#endif
);
        JList_setModel(this->itemTypesJList, AbstractListModel_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            this->strings = ((const char**) java_array_from(sizeof(const char*), sizeof((const char*[]){ "Item 1", "Item 2", "Item 3", "Item 4", "Item 5" }) / sizeof(const char*), (const char*[]){ "Item 1", "Item 2", "Item 3", "Item 4", "Item 5" }));
            

        int32_t ImageActionScriptOutputJPanel_getSize(ImageActionScriptOutputJPanel* this) {
                return java_array_length(strings);
        }
            

        Any* ImageActionScriptOutputJPanel_getElementAt(ImageActionScriptOutputJPanel* this, int32_t i) {
                return strings[i];
        }
#endif
);
        JScrollPane_setViewportView(this->jScrollPane1, this->itemTypesJList);
        GroupLayout* capturedImageActionJDialogLayout = GroupLayout_new(JDialog_getContentPane(this->capturedImageActionJDialog));
        JAVA_CALL(JDialog_getContentPane(this->capturedImageActionJDialog), setLayout, capturedImageActionJDialogLayout);
        GroupLayout_setHorizontalGroup(capturedImageActionJDialogLayout, JAVA_CALL(GroupLayout_createParallelGroup(capturedImageActionJDialogLayout, javax_swing->GroupLayout->Alignment->LEADING), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(capturedImageActionJDialogLayout), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(capturedImageActionJDialogLayout, javax_swing->GroupLayout->Alignment->LEADING), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(capturedImageActionJDialogLayout), addGap, 61, 61, 61), addComponent, this->titleJLabel)), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(capturedImageActionJDialogLayout), addContainerGap), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(capturedImageActionJDialogLayout, javax_swing->GroupLayout->Alignment->LEADING), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(capturedImageActionJDialogLayout, javax_swing->GroupLayout->Alignment->LEADING), addComponent, this->displayJCheckBox), addComponent, this->saveJCheckBox, javax_swing->GroupLayout->Alignment->TRAILING)), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(capturedImageActionJDialogLayout), addGap, 84, 84, 84), addComponent, this->okJButton)))), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(capturedImageActionJDialogLayout), addContainerGap), addComponent, this->jScrollPane1, javax_swing->GroupLayout->DEFAULT_SIZE, 216, Short_MAX_VALUE))), addContainerGap)));
        GroupLayout_setVerticalGroup(capturedImageActionJDialogLayout, JAVA_CALL(GroupLayout_createParallelGroup(capturedImageActionJDialogLayout, javax_swing->GroupLayout->Alignment->LEADING), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(capturedImageActionJDialogLayout), addComponent, this->titleJLabel), addGap, 5, 5, 5), addComponent, this->jScrollPane1, javax_swing->GroupLayout->DEFAULT_SIZE, 105, Short_MAX_VALUE), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addComponent, this->saveJCheckBox), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addComponent, this->displayJCheckBox), addGap, 9, 9, 9), addComponent, this->okJButton), addContainerGap)));
        ImageActionScriptOutputJPanel_setMinimumSize(this, Dimension_new(100, 0));
        JButton_setText(this->capturedImageActionJButton, "Edit");
        JButton_addActionListener(this->capturedImageActionJButton, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void ImageActionScriptOutputJPanel_actionPerformed(ImageActionScriptOutputJPanel* this, ActionEvent* evt) {
                ImageActionScriptOutputJPanel_capturedImageActionJButtonActionPerformed(this, evt);
        }
#endif
);
        JLabel_setText(this->jLabel1, "Capture Image:");
        GroupLayout* layout = GroupLayout_new(this);
        ImageActionScriptOutputJPanel_setLayout(this, layout);
        GroupLayout_setHorizontalGroup(layout, JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->LEADING), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(layout), addComponent, this->jLabel1), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED, javax_swing->GroupLayout->DEFAULT_SIZE, Short_MAX_VALUE), addComponent, this->capturedImageActionJButton)));
        GroupLayout_setVerticalGroup(layout, JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->LEADING), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->BASELINE), addComponent, this->jLabel1), addComponent, this->capturedImageActionJButton)));
}


static void ImageActionScriptOutputJPanel_displayJCheckBoxActionPerformed(ImageActionScriptOutputJPanel* this, ActionEvent* evt) {
}


static void ImageActionScriptOutputJPanel_okJButtonActionPerformed(ImageActionScriptOutputJPanel* this, ActionEvent* evt) {
        ImageActionScriptOutputJPanel_update(this);
        JAVA_CALL(ImageActionScriptOutputJPanel_getCapturedImageActionJDialog(this), setVisible, false);
}


static void ImageActionScriptOutputJPanel_capturedImageActionJButtonActionPerformed(ImageActionScriptOutputJPanel* this, ActionEvent* evt) {
        JAVA_CALL(ImageActionScriptOutputJPanel_getCapturedImageActionJDialog(this), setVisible, true);
}

