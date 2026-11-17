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
#include "org/allbinary/logic/string/StringValidationUtil.h"
#include "org/allbinary/media/image/analysis/ColorRangeInterface.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/input/automation/actions/script/condition/JPanel.h"

typedef struct ColorAtActionScriptConditionJPanel ColorAtActionScriptConditionJPanel;
struct ColorAtActionScriptConditionJPanel {
    JPanel base;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    ColorAtActionScriptConditionInterface* colorAtActionScriptConditionInterface;
    JLabel* blueJLabel;
    JButton* colorAtActionJButton;
    JDialog* colorAtActionJDialog;
    JTextField* colorAtXJTextField;
    JTextField* colorAtYJTextField;
    JLabel* colorRangeJLabel;
    JLabel* greenJLabel;
    JLabel* jLabel1;
    JLabel* locationJLabel;
    JTextField* maxBlueJTextField;
    JTextField* maxGreenJTextField;
    JLabel* maxJLabel;
    JTextField* maxRedJTextField;
    JTextField* minBlueJTextField;
    JTextField* minGreenJTextField;
    JLabel* minJLabel;
    JTextField* minRedJTextField;
    JButton* okJButton;
    JLabel* redJLabel;
    JLabel* titleJLabel;
    JLabel* xJLabel;
    JLabel* yJLabel;
};


ColorAtActionScriptConditionJPanel* ColorAtActionScriptConditionJPanel_new(ColorAtActionScriptConditionInterface* colorAtActionScriptConditionInterface);

void ColorAtActionScriptConditionJPanel_init(ColorAtActionScriptConditionJPanel* this, ColorAtActionScriptConditionInterface* colorAtActionScriptConditionInterface);
static void ColorAtActionScriptConditionJPanel_set(ColorAtActionScriptConditionJPanel* this);
static void ColorAtActionScriptConditionJPanel_update(ColorAtActionScriptConditionJPanel* this);
JTextField* ColorAtActionScriptConditionJPanel_getColorAtXJTextField(ColorAtActionScriptConditionJPanel* this);
void ColorAtActionScriptConditionJPanel_setColorAtXJTextField(ColorAtActionScriptConditionJPanel* this, JTextField* colorAtXJTextField);
JTextField* ColorAtActionScriptConditionJPanel_getColorAtYJTextField(ColorAtActionScriptConditionJPanel* this);
void ColorAtActionScriptConditionJPanel_setColorAtYJTextField(ColorAtActionScriptConditionJPanel* this, JTextField* colorAtYJTextField);
JTextField* ColorAtActionScriptConditionJPanel_getMaxBlueJTextField(ColorAtActionScriptConditionJPanel* this);
void ColorAtActionScriptConditionJPanel_setMaxBlueJTextField(ColorAtActionScriptConditionJPanel* this, JTextField* maxBlueJTextField);
JTextField* ColorAtActionScriptConditionJPanel_getMaxGreenJTextField(ColorAtActionScriptConditionJPanel* this);
void ColorAtActionScriptConditionJPanel_setMaxGreenJTextField(ColorAtActionScriptConditionJPanel* this, JTextField* maxGreenJTextField);
JTextField* ColorAtActionScriptConditionJPanel_getMaxRedJTextField(ColorAtActionScriptConditionJPanel* this);
void ColorAtActionScriptConditionJPanel_setMaxRedJTextField(ColorAtActionScriptConditionJPanel* this, JTextField* maxRedJTextField);
JTextField* ColorAtActionScriptConditionJPanel_getMinBlueJTextField(ColorAtActionScriptConditionJPanel* this);
void ColorAtActionScriptConditionJPanel_setMinBlueJTextField(ColorAtActionScriptConditionJPanel* this, JTextField* minBlueJTextField);
JTextField* ColorAtActionScriptConditionJPanel_getMinGreenJTextField(ColorAtActionScriptConditionJPanel* this);
void ColorAtActionScriptConditionJPanel_setMinGreenJTextField(ColorAtActionScriptConditionJPanel* this, JTextField* minGreenJTextField);
JTextField* ColorAtActionScriptConditionJPanel_getMinRedJTextField(ColorAtActionScriptConditionJPanel* this);
void ColorAtActionScriptConditionJPanel_setMinRedJTextField(ColorAtActionScriptConditionJPanel* this, JTextField* minRedJTextField);
JLabel* ColorAtActionScriptConditionJPanel_getYJLabel(ColorAtActionScriptConditionJPanel* this);
void ColorAtActionScriptConditionJPanel_setYJLabel(ColorAtActionScriptConditionJPanel* this, JLabel* yJLabel);
JDialog* ColorAtActionScriptConditionJPanel_getColorAtActionJDialog(ColorAtActionScriptConditionJPanel* this);
void ColorAtActionScriptConditionJPanel_setColorAtActionJDialog(ColorAtActionScriptConditionJPanel* this, JDialog* colorAtActionJDialog);
static void ColorAtActionScriptConditionJPanel_initComponents(ColorAtActionScriptConditionJPanel* this);
static void ColorAtActionScriptConditionJPanel_okJButtonActionPerformed(ColorAtActionScriptConditionJPanel* this, ActionEvent* evt);
static void ColorAtActionScriptConditionJPanel_colorAtActionJButtonActionPerformed(ColorAtActionScriptConditionJPanel* this, ActionEvent* evt);

static void ColorAtActionScriptConditionJPanel_initFields(ColorAtActionScriptConditionJPanel* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    
    this->blueJLabel = nullptr;
    this->colorAtActionJButton = nullptr;
    this->colorAtActionJDialog = nullptr;
    this->colorAtXJTextField = nullptr;
    this->colorAtYJTextField = nullptr;
    this->colorRangeJLabel = nullptr;
    this->greenJLabel = nullptr;
    this->jLabel1 = nullptr;
    this->locationJLabel = nullptr;
    this->maxBlueJTextField = nullptr;
    this->maxGreenJTextField = nullptr;
    this->maxJLabel = nullptr;
    this->maxRedJTextField = nullptr;
    this->minBlueJTextField = nullptr;
    this->minGreenJTextField = nullptr;
    this->minJLabel = nullptr;
    this->minRedJTextField = nullptr;
    this->okJButton = nullptr;
    this->redJLabel = nullptr;
    this->titleJLabel = nullptr;
    this->xJLabel = nullptr;
    this->yJLabel = nullptr;
}


void ColorAtActionScriptConditionJPanel_init(ColorAtActionScriptConditionJPanel* this, ColorAtActionScriptConditionInterface* colorAtActionScriptConditionInterface) {
    JPanel_init(&this->base);
    ColorAtActionScriptConditionJPanel_initFields(this);
        LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
        ColorAtActionScriptConditionJPanel_initComponents(this);
        this->colorAtActionScriptConditionInterface = colorAtActionScriptConditionInterface;
        ColorAtActionScriptConditionJPanel_set(this);
}

ColorAtActionScriptConditionJPanel* ColorAtActionScriptConditionJPanel_new(ColorAtActionScriptConditionInterface* colorAtActionScriptConditionInterface) {
    ColorAtActionScriptConditionJPanel* this = calloc(1, sizeof(ColorAtActionScriptConditionJPanel));
    ColorAtActionScriptConditionJPanel_init(this, colorAtActionScriptConditionInterface);
    return this;
}


static void ColorAtActionScriptConditionJPanel_set(ColorAtActionScriptConditionJPanel* this) {
        ColorRangeInterface* colorRangeInterface = ColorAtActionScriptConditionInterface_getColorRangeInterface(this->colorAtActionScriptConditionInterface);
        JAVA_CALL(ColorAtActionScriptConditionJPanel_getMinRedJTextField(this), setText, java_string_of(ColorRangeInterface_getMinRed(colorRangeInterface)));
        JAVA_CALL(ColorAtActionScriptConditionJPanel_getMaxRedJTextField(this), setText, java_string_of(ColorRangeInterface_getMaxRed(colorRangeInterface)));
        JAVA_CALL(ColorAtActionScriptConditionJPanel_getMinGreenJTextField(this), setText, java_string_of(ColorRangeInterface_getMinGreen(colorRangeInterface)));
        JAVA_CALL(ColorAtActionScriptConditionJPanel_getMaxGreenJTextField(this), setText, java_string_of(ColorRangeInterface_getMaxGreen(colorRangeInterface)));
        JAVA_CALL(ColorAtActionScriptConditionJPanel_getMinBlueJTextField(this), setText, java_string_of(ColorRangeInterface_getMinBlue(colorRangeInterface)));
        JAVA_CALL(ColorAtActionScriptConditionJPanel_getMaxBlueJTextField(this), setText, java_string_of(ColorRangeInterface_getMaxBlue(colorRangeInterface)));
        JAVA_CALL(ColorAtActionScriptConditionJPanel_getColorAtXJTextField(this), setText, java_string_of(ColorAtActionScriptConditionInterface_getPoint(this->colorAtActionScriptConditionInterface)->x));
        JAVA_CALL(ColorAtActionScriptConditionJPanel_getColorAtYJTextField(this), setText, java_string_of(ColorAtActionScriptConditionInterface_getPoint(this->colorAtActionScriptConditionInterface)->y));
        ColorAtActionScriptConditionInterface_log(this->colorAtActionScriptConditionInterface);
}


static void ColorAtActionScriptConditionJPanel_update(ColorAtActionScriptConditionJPanel* this) {
        ColorRangeInterface* colorRangeInterface = ColorAtActionScriptConditionInterface_getColorRangeInterface(this->colorAtActionScriptConditionInterface);
        ColorRangeInterface_setMinRed(colorRangeInterface, JAVA_CALL(java_string_of(JAVA_CALL(ColorAtActionScriptConditionJPanel_getMinRedJTextField(this), getText)), intValue));
        ColorRangeInterface_setMaxRed(colorRangeInterface, JAVA_CALL(java_string_of(JAVA_CALL(ColorAtActionScriptConditionJPanel_getMaxRedJTextField(this), getText)), intValue));
        ColorRangeInterface_setMinGreen(colorRangeInterface, JAVA_CALL(java_string_of(JAVA_CALL(ColorAtActionScriptConditionJPanel_getMinGreenJTextField(this), getText)), intValue));
        ColorRangeInterface_setMaxGreen(colorRangeInterface, JAVA_CALL(java_string_of(JAVA_CALL(ColorAtActionScriptConditionJPanel_getMaxGreenJTextField(this), getText)), intValue));
        ColorRangeInterface_setMinBlue(colorRangeInterface, JAVA_CALL(java_string_of(JAVA_CALL(ColorAtActionScriptConditionJPanel_getMinBlueJTextField(this), getText)), intValue));
        ColorRangeInterface_setMaxBlue(colorRangeInterface, JAVA_CALL(java_string_of(JAVA_CALL(ColorAtActionScriptConditionJPanel_getMaxBlueJTextField(this), getText)), intValue));
        const char* xString = JAVA_CALL(ColorAtActionScriptConditionJPanel_getColorAtXJTextField(this), getText);
        if (!StringValidationUtil_isEmpty(StringValidationUtil_getInstance(), xString) && StringValidationUtil_isNumber(StringValidationUtil_getInstance(), xString)) {
            ColorAtActionScriptConditionInterface_getPoint(this->colorAtActionScriptConditionInterface)->x = ((int32_t) strtol(xString, nullptr, 10));
        }
        const char* yString = JAVA_CALL(ColorAtActionScriptConditionJPanel_getColorAtYJTextField(this), getText);
        if (!StringValidationUtil_isEmpty(StringValidationUtil_getInstance(), yString) && StringValidationUtil_isNumber(StringValidationUtil_getInstance(), yString)) {
            ColorAtActionScriptConditionInterface_getPoint(this->colorAtActionScriptConditionInterface)->y = ((int32_t) strtol(xString, nullptr, 10));
        }
        ColorAtActionScriptConditionInterface_log(this->colorAtActionScriptConditionInterface);
}


JTextField* ColorAtActionScriptConditionJPanel_getColorAtXJTextField(ColorAtActionScriptConditionJPanel* this) {
        return this->colorAtXJTextField;
}


void ColorAtActionScriptConditionJPanel_setColorAtXJTextField(ColorAtActionScriptConditionJPanel* this, JTextField* colorAtXJTextField) {
        this->colorAtXJTextField = colorAtXJTextField;
}


JTextField* ColorAtActionScriptConditionJPanel_getColorAtYJTextField(ColorAtActionScriptConditionJPanel* this) {
        return this->colorAtYJTextField;
}


void ColorAtActionScriptConditionJPanel_setColorAtYJTextField(ColorAtActionScriptConditionJPanel* this, JTextField* colorAtYJTextField) {
        this->colorAtYJTextField = colorAtYJTextField;
}


JTextField* ColorAtActionScriptConditionJPanel_getMaxBlueJTextField(ColorAtActionScriptConditionJPanel* this) {
        return this->maxBlueJTextField;
}


void ColorAtActionScriptConditionJPanel_setMaxBlueJTextField(ColorAtActionScriptConditionJPanel* this, JTextField* maxBlueJTextField) {
        this->maxBlueJTextField = maxBlueJTextField;
}


JTextField* ColorAtActionScriptConditionJPanel_getMaxGreenJTextField(ColorAtActionScriptConditionJPanel* this) {
        return this->maxGreenJTextField;
}


void ColorAtActionScriptConditionJPanel_setMaxGreenJTextField(ColorAtActionScriptConditionJPanel* this, JTextField* maxGreenJTextField) {
        this->maxGreenJTextField = maxGreenJTextField;
}


JTextField* ColorAtActionScriptConditionJPanel_getMaxRedJTextField(ColorAtActionScriptConditionJPanel* this) {
        return this->maxRedJTextField;
}


void ColorAtActionScriptConditionJPanel_setMaxRedJTextField(ColorAtActionScriptConditionJPanel* this, JTextField* maxRedJTextField) {
        this->maxRedJTextField = maxRedJTextField;
}


JTextField* ColorAtActionScriptConditionJPanel_getMinBlueJTextField(ColorAtActionScriptConditionJPanel* this) {
        return this->minBlueJTextField;
}


void ColorAtActionScriptConditionJPanel_setMinBlueJTextField(ColorAtActionScriptConditionJPanel* this, JTextField* minBlueJTextField) {
        this->minBlueJTextField = minBlueJTextField;
}


JTextField* ColorAtActionScriptConditionJPanel_getMinGreenJTextField(ColorAtActionScriptConditionJPanel* this) {
        return this->minGreenJTextField;
}


void ColorAtActionScriptConditionJPanel_setMinGreenJTextField(ColorAtActionScriptConditionJPanel* this, JTextField* minGreenJTextField) {
        this->minGreenJTextField = minGreenJTextField;
}


JTextField* ColorAtActionScriptConditionJPanel_getMinRedJTextField(ColorAtActionScriptConditionJPanel* this) {
        return this->minRedJTextField;
}


void ColorAtActionScriptConditionJPanel_setMinRedJTextField(ColorAtActionScriptConditionJPanel* this, JTextField* minRedJTextField) {
        this->minRedJTextField = minRedJTextField;
}


JLabel* ColorAtActionScriptConditionJPanel_getYJLabel(ColorAtActionScriptConditionJPanel* this) {
        return this->yJLabel;
}


void ColorAtActionScriptConditionJPanel_setYJLabel(ColorAtActionScriptConditionJPanel* this, JLabel* yJLabel) {
        this->yJLabel = yJLabel;
}


JDialog* ColorAtActionScriptConditionJPanel_getColorAtActionJDialog(ColorAtActionScriptConditionJPanel* this) {
        return this->colorAtActionJDialog;
}


void ColorAtActionScriptConditionJPanel_setColorAtActionJDialog(ColorAtActionScriptConditionJPanel* this, JDialog* colorAtActionJDialog) {
        this->colorAtActionJDialog = colorAtActionJDialog;
}


static void ColorAtActionScriptConditionJPanel_initComponents(ColorAtActionScriptConditionJPanel* this) {
        this->colorAtActionJDialog = JDialog_new();
        this->titleJLabel = JLabel_new();
        this->locationJLabel = JLabel_new();
        this->colorAtXJTextField = JTextField_new();
        this->xJLabel = JLabel_new();
        this->yJLabel = JLabel_new();
        this->colorAtYJTextField = JTextField_new();
        this->colorRangeJLabel = JLabel_new();
        this->redJLabel = JLabel_new();
        this->minJLabel = JLabel_new();
        this->maxJLabel = JLabel_new();
        this->greenJLabel = JLabel_new();
        this->blueJLabel = JLabel_new();
        this->minRedJTextField = JTextField_new();
        this->maxRedJTextField = JTextField_new();
        this->maxGreenJTextField = JTextField_new();
        this->minBlueJTextField = JTextField_new();
        this->maxBlueJTextField = JTextField_new();
        this->okJButton = JButton_new();
        this->minGreenJTextField = JTextField_new();
        this->colorAtActionJButton = JButton_new();
        this->jLabel1 = JLabel_new();
        JDialog_setMinimumSize(this->colorAtActionJDialog, Dimension_new(350, 250));
        JLabel_setText(this->titleJLabel, "              Color At Action Options            ");
        JLabel_setText(this->locationJLabel, "Location:");
        JLabel_setText(this->xJLabel, "X:");
        JLabel_setText(this->yJLabel, "Y:");
        JLabel_setText(this->colorRangeJLabel, "Color Range");
        JLabel_setText(this->redJLabel, "Red:");
        JLabel_setText(this->minJLabel, "Minimum");
        JLabel_setText(this->maxJLabel, "Maximum");
        JLabel_setText(this->greenJLabel, "Green:");
        JLabel_setText(this->blueJLabel, "Blue:");
        JButton_setText(this->okJButton, "OK");
        JButton_addActionListener(this->okJButton, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void ColorAtActionScriptConditionJPanel_actionPerformed(ColorAtActionScriptConditionJPanel* this, ActionEvent* evt) {
                ColorAtActionScriptConditionJPanel_okJButtonActionPerformed(this, evt);
        }
#endif
);
        GroupLayout* colorAtActionJDialogLayout = GroupLayout_new(JDialog_getContentPane(this->colorAtActionJDialog));
        JAVA_CALL(JDialog_getContentPane(this->colorAtActionJDialog), setLayout, colorAtActionJDialogLayout);
        GroupLayout_setHorizontalGroup(colorAtActionJDialogLayout, JAVA_CALL(GroupLayout_createParallelGroup(colorAtActionJDialogLayout, javax_swing->GroupLayout->Alignment->LEADING), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(colorAtActionJDialogLayout), addContainerGap), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(colorAtActionJDialogLayout, javax_swing->GroupLayout->Alignment->LEADING), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(colorAtActionJDialogLayout), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(colorAtActionJDialogLayout, javax_swing->GroupLayout->Alignment->TRAILING), addComponent, this->okJButton), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(colorAtActionJDialogLayout), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(colorAtActionJDialogLayout, javax_swing->GroupLayout->Alignment->LEADING, false), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(colorAtActionJDialogLayout), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(colorAtActionJDialogLayout, javax_swing->GroupLayout->Alignment->LEADING), addComponent, this->blueJLabel), addComponent, this->greenJLabel), addComponent, this->redJLabel), addComponent, this->colorRangeJLabel)), addGap, 29, 29, 29)), addGroup, javax_swing->GroupLayout->Alignment->TRAILING, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(colorAtActionJDialogLayout), addComponent, this->locationJLabel), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED, javax_swing->GroupLayout->DEFAULT_SIZE, Short_MAX_VALUE), addComponent, this->xJLabel), addGap, 18, 18, 18))), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(colorAtActionJDialogLayout, javax_swing->GroupLayout->Alignment->LEADING), addComponent, this->minBlueJTextField, javax_swing->GroupLayout->DEFAULT_SIZE, 40, Short_MAX_VALUE), addComponent, this->minGreenJTextField, javax_swing->GroupLayout->DEFAULT_SIZE, 40, Short_MAX_VALUE), addComponent, this->minJLabel, javax_swing->GroupLayout->Alignment->TRAILING, javax_swing->GroupLayout->DEFAULT_SIZE, javax_swing->GroupLayout->DEFAULT_SIZE, Short_MAX_VALUE), addComponent, this->minRedJTextField, javax_swing->GroupLayout->DEFAULT_SIZE, 40, Short_MAX_VALUE), addComponent, this->colorAtXJTextField, javax_swing->GroupLayout->DEFAULT_SIZE, 40, Short_MAX_VALUE)), addGap, 16, 16, 16))), addGap, 6, 6, 6), addComponent, this->yJLabel), addGap, 24, 24, 24), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(colorAtActionJDialogLayout, javax_swing->GroupLayout->Alignment->TRAILING), addComponent, this->maxJLabel, javax_swing->GroupLayout->Alignment->LEADING, javax_swing->GroupLayout->DEFAULT_SIZE, javax_swing->GroupLayout->DEFAULT_SIZE, Short_MAX_VALUE), addGroup, javax_swing->GroupLayout->Alignment->LEADING, JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(colorAtActionJDialogLayout), addGap, 1, 1, 1), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(colorAtActionJDialogLayout, javax_swing->GroupLayout->Alignment->LEADING, false), addComponent, this->maxBlueJTextField, javax_swing->GroupLayout->Alignment->TRAILING), addComponent, this->maxRedJTextField, javax_swing->GroupLayout->Alignment->TRAILING, javax_swing->GroupLayout->DEFAULT_SIZE, 43, Short_MAX_VALUE), addComponent, this->maxGreenJTextField, javax_swing->GroupLayout->Alignment->TRAILING, javax_swing->GroupLayout->PREFERRED_SIZE, 43, javax_swing->GroupLayout->PREFERRED_SIZE))), addComponent, this->colorAtYJTextField, javax_swing->GroupLayout->Alignment->LEADING, javax_swing->GroupLayout->DEFAULT_SIZE, 44, Short_MAX_VALUE)), addGap, 22, 22, 22)), addGroup, javax_swing->GroupLayout->Alignment->TRAILING, JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(colorAtActionJDialogLayout), addComponent, this->titleJLabel), addGap, 33, 33, 33)))));
        GroupLayout_setVerticalGroup(colorAtActionJDialogLayout, JAVA_CALL(GroupLayout_createParallelGroup(colorAtActionJDialogLayout, javax_swing->GroupLayout->Alignment->LEADING), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(colorAtActionJDialogLayout), addContainerGap), addComponent, this->titleJLabel), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(colorAtActionJDialogLayout, javax_swing->GroupLayout->Alignment->LEADING), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(colorAtActionJDialogLayout), addGap, 15, 15, 15), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(colorAtActionJDialogLayout, javax_swing->GroupLayout->Alignment->BASELINE), addComponent, this->xJLabel), addComponent, this->locationJLabel), addComponent, this->colorAtXJTextField, javax_swing->GroupLayout->PREFERRED_SIZE, javax_swing->GroupLayout->DEFAULT_SIZE, javax_swing->GroupLayout->PREFERRED_SIZE), addComponent, this->yJLabel)), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(colorAtActionJDialogLayout, javax_swing->GroupLayout->Alignment->BASELINE), addComponent, this->minJLabel), addComponent, this->colorRangeJLabel)), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(colorAtActionJDialogLayout, javax_swing->GroupLayout->Alignment->BASELINE), addComponent, this->minRedJTextField, javax_swing->GroupLayout->PREFERRED_SIZE, javax_swing->GroupLayout->DEFAULT_SIZE, javax_swing->GroupLayout->PREFERRED_SIZE), addComponent, this->redJLabel)), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(colorAtActionJDialogLayout, javax_swing->GroupLayout->Alignment->BASELINE), addComponent, this->greenJLabel), addComponent, this->minGreenJTextField, javax_swing->GroupLayout->PREFERRED_SIZE, javax_swing->GroupLayout->DEFAULT_SIZE, javax_swing->GroupLayout->PREFERRED_SIZE)), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(colorAtActionJDialogLayout, javax_swing->GroupLayout->Alignment->BASELINE), addComponent, this->blueJLabel), addComponent, this->minBlueJTextField, javax_swing->GroupLayout->PREFERRED_SIZE, javax_swing->GroupLayout->DEFAULT_SIZE, javax_swing->GroupLayout->PREFERRED_SIZE)), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED, 17, Short_MAX_VALUE), addComponent, this->okJButton)), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(colorAtActionJDialogLayout), addGap, 14, 14, 14), addComponent, this->colorAtYJTextField, javax_swing->GroupLayout->PREFERRED_SIZE, javax_swing->GroupLayout->DEFAULT_SIZE, javax_swing->GroupLayout->PREFERRED_SIZE), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addComponent, this->maxJLabel), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addComponent, this->maxRedJTextField, javax_swing->GroupLayout->PREFERRED_SIZE, javax_swing->GroupLayout->DEFAULT_SIZE, javax_swing->GroupLayout->PREFERRED_SIZE), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addComponent, this->maxGreenJTextField, javax_swing->GroupLayout->PREFERRED_SIZE, javax_swing->GroupLayout->DEFAULT_SIZE, javax_swing->GroupLayout->PREFERRED_SIZE), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addComponent, this->maxBlueJTextField, javax_swing->GroupLayout->PREFERRED_SIZE, javax_swing->GroupLayout->DEFAULT_SIZE, javax_swing->GroupLayout->PREFERRED_SIZE))), addContainerGap)));
        ColorAtActionScriptConditionJPanel_setPreferredSize(this, Dimension_new(100, 0));
        JButton_setText(this->colorAtActionJButton, "Edit");
        JButton_addActionListener(this->colorAtActionJButton, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void ColorAtActionScriptConditionJPanel_actionPerformed(ColorAtActionScriptConditionJPanel* this, ActionEvent* evt) {
                ColorAtActionScriptConditionJPanel_colorAtActionJButtonActionPerformed(this, evt);
        }
#endif
);
        JLabel_setText(this->jLabel1, "Color At:");
        GroupLayout* layout = GroupLayout_new(this);
        ColorAtActionScriptConditionJPanel_setLayout(this, layout);
        GroupLayout_setHorizontalGroup(layout, JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->LEADING), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(layout), addComponent, this->jLabel1), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED, 15, Short_MAX_VALUE), addComponent, this->colorAtActionJButton)));
        GroupLayout_setVerticalGroup(layout, JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->LEADING), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->BASELINE), addComponent, this->jLabel1), addComponent, this->colorAtActionJButton)));
}


static void ColorAtActionScriptConditionJPanel_okJButtonActionPerformed(ColorAtActionScriptConditionJPanel* this, ActionEvent* evt) {
        ColorAtActionScriptConditionJPanel_update(this);
        JAVA_CALL(ColorAtActionScriptConditionJPanel_getColorAtActionJDialog(this), setVisible, false);
}


static void ColorAtActionScriptConditionJPanel_colorAtActionJButtonActionPerformed(ColorAtActionScriptConditionJPanel* this, ActionEvent* evt) {
        JAVA_CALL(ColorAtActionScriptConditionJPanel_getColorAtActionJDialog(this), setVisible, true);
}

