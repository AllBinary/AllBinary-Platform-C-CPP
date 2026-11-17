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
// package org.allbinary.graphics.j2me.workarea.properties

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/graphics/j2me/workarea/properties/JPanel.h"

typedef struct PropertiesJPanel PropertiesJPanel;
struct PropertiesJPanel {
    JPanel base;
    JButton* rotateJButton;
    JButton* copyVerticalJButton;
    JButton* leftJButton;
    JPanel* rotateJPanel;
    JTextField* angleJTextField;
    JPanel* workAreaPropertiesJPanel;
    JPanel* modifierJPanel;
    JButton* upJButton;
    JPanel* jPanel8;
    JButton* downJButton;
    JPanel* jPanel7;
    JButton* rightJButton;
    JButton* copyHorizontalJButton;
};


PropertiesJPanel* PropertiesJPanel_new(void);

void PropertiesJPanel_init(PropertiesJPanel* this);
void PropertiesJPanel_set(PropertiesJPanel* this, JPanel* panel);
static void PropertiesJPanel_initComponents(PropertiesJPanel* this);

static void PropertiesJPanel_initFields(PropertiesJPanel* this) {
    this->rotateJButton = nullptr;
    this->copyVerticalJButton = nullptr;
    this->leftJButton = nullptr;
    this->rotateJPanel = nullptr;
    this->angleJTextField = nullptr;
    this->workAreaPropertiesJPanel = nullptr;
    this->modifierJPanel = nullptr;
    this->upJButton = nullptr;
    this->jPanel8 = nullptr;
    this->downJButton = nullptr;
    this->jPanel7 = nullptr;
    this->rightJButton = nullptr;
    this->copyHorizontalJButton = nullptr;
}


void PropertiesJPanel_init(PropertiesJPanel* this) {
    JPanel_init(&this->base);
    PropertiesJPanel_initFields(this);
        PropertiesJPanel_initComponents(this);
}

PropertiesJPanel* PropertiesJPanel_new(void) {
    PropertiesJPanel* this = calloc(1, sizeof(PropertiesJPanel));
    PropertiesJPanel_init(this);
    return this;
}


void PropertiesJPanel_set(PropertiesJPanel* this, JPanel* panel) {
        JPanel_add(this->workAreaPropertiesJPanel, panel);
        PropertiesJPanel_repaint(this);
}


static void PropertiesJPanel_initComponents(PropertiesJPanel* this) {
        this->workAreaPropertiesJPanel = JPanel_new();
        this->modifierJPanel = JPanel_new();
        this->copyVerticalJButton = JButton_new();
        this->copyHorizontalJButton = JButton_new();
        this->rotateJPanel = JPanel_new();
        this->rotateJButton = JButton_new();
        this->angleJTextField = JTextField_new();
        this->jPanel7 = JPanel_new();
        this->upJButton = JButton_new();
        this->downJButton = JButton_new();
        this->jPanel8 = JPanel_new();
        this->leftJButton = JButton_new();
        this->rightJButton = JButton_new();
        PropertiesJPanel_setLayout(this, GridLayout_new(2, 1));
        JPanel_setLayout(this->workAreaPropertiesJPanel, GridLayout_new());
        PropertiesJPanel_add(this, this->workAreaPropertiesJPanel);
        JPanel_setLayout(this->modifierJPanel, GridLayout_new(6, 0));
        JButton_setFont(this->copyVerticalJButton, Font_new("Dialog", 0, 10));
        JButton_setText(this->copyVerticalJButton, "Copy Vertical");
        JPanel_add(this->modifierJPanel, this->copyVerticalJButton);
        JButton_setFont(this->copyHorizontalJButton, Font_new("Dialog", 0, 10));
        JButton_setText(this->copyHorizontalJButton, "Copy Horizontal");
        JPanel_add(this->modifierJPanel, this->copyHorizontalJButton);
        JPanel_setLayout(this->rotateJPanel, GridLayout_new(1, 2));
        JButton_setFont(this->rotateJButton, Font_new("Dialog", 0, 10));
        JButton_setText(this->rotateJButton, "Rotate");
        JPanel_add(this->rotateJPanel, this->rotateJButton);
        JTextField_setText(this->angleJTextField, "Angle");
        JPanel_add(this->rotateJPanel, this->angleJTextField);
        JPanel_add(this->modifierJPanel, this->rotateJPanel);
        JPanel_setLayout(this->jPanel7, GridLayout_new(1, 2));
        JButton_setFont(this->upJButton, Font_new("Dialog", 0, 10));
        JButton_setText(this->upJButton, "Up");
        JPanel_add(this->jPanel7, this->upJButton);
        JButton_setFont(this->downJButton, Font_new("Dialog", 0, 10));
        JButton_setText(this->downJButton, "Down");
        JPanel_add(this->jPanel7, this->downJButton);
        JPanel_add(this->modifierJPanel, this->jPanel7);
        JPanel_setLayout(this->jPanel8, GridLayout_new(1, 2));
        JButton_setFont(this->leftJButton, Font_new("Dialog", 0, 10));
        JButton_setText(this->leftJButton, "Left");
        JPanel_add(this->jPanel8, this->leftJButton);
        JButton_setFont(this->rightJButton, Font_new("Dialog", 0, 10));
        JButton_setText(this->rightJButton, "Right");
        JPanel_add(this->jPanel8, this->rightJButton);
        JPanel_add(this->modifierJPanel, this->jPanel8);
        PropertiesJPanel_add(this, this->modifierJPanel);
}

