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
// package org.allbinary.gui.dialog

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/thread/ARunnable.h"
#include "org/allbinary/gui/dialog/JDialog.h"

typedef struct BasicTextJDialog BasicTextJDialog;
struct BasicTextJDialog {
    JDialog base;
    CloseJDialogListenerInterface* closeListenerInterface;
    JButton* jButton1;
    JLabel* textJLabel;
};


BasicTextJDialog* BasicTextJDialog_new(Frame* parent, bool modal, const char* text);

void BasicTextJDialog_init(BasicTextJDialog* this, Frame* parent, bool modal, const char* text);
void BasicTextJDialog_setText(BasicTextJDialog* this, const char* text);
void BasicTextJDialog_addCloseListener(BasicTextJDialog* this, CloseJDialogListenerInterface* closeListenerInterface);

BasicTextJDialog* BasicTextJDialog_new1(const char* text);
void BasicTextJDialog_init1(BasicTextJDialog* this, const char* text);
static void BasicTextJDialog_initComponents(BasicTextJDialog* this);
static void BasicTextJDialog_jButton1ActionPerformed(BasicTextJDialog* this, ActionEvent* evt);
void BasicTextJDialog_main(const char** args);

static void BasicTextJDialog_initFields(BasicTextJDialog* this) {
    this->closeListenerInterface = nullptr;
    this->jButton1 = nullptr;
    this->textJLabel = nullptr;
}


void BasicTextJDialog_init(BasicTextJDialog* this, Frame* parent, bool modal, const char* text) {
        JDialog_init(&this->base, parent, modal);
        BasicTextJDialog_initFields(this);
        BasicTextJDialog_initComponents(this);
        BasicTextJDialog_setText(this, text);
}

BasicTextJDialog* BasicTextJDialog_new(Frame* parent, bool modal, const char* text) {
    BasicTextJDialog* this = calloc(1, sizeof(BasicTextJDialog));
    BasicTextJDialog_init(this, parent, modal, text);
    return this;
}


void BasicTextJDialog_setText(BasicTextJDialog* this, const char* text) {
        JLabel_setText(this->textJLabel, text);
}


void BasicTextJDialog_addCloseListener(BasicTextJDialog* this, CloseJDialogListenerInterface* closeListenerInterface) {
        this->closeListenerInterface = closeListenerInterface;
}


void BasicTextJDialog_init1(BasicTextJDialog* this, const char* text) {
    JDialog_init(&this->base);
    BasicTextJDialog_initFields(this);
        BasicTextJDialog_initComponents(this);
        JLabel_setText(this->textJLabel, text);
}

BasicTextJDialog* BasicTextJDialog_new1(const char* text) {
    BasicTextJDialog* this = calloc(1, sizeof(BasicTextJDialog));
    BasicTextJDialog_init1(this, text);
    return this;
}


static void BasicTextJDialog_initComponents(BasicTextJDialog* this) {
        this->jButton1 = JButton_new();
        this->textJLabel = JLabel_new();
        BasicTextJDialog_setDefaultCloseOperation(this, javax_swing->WindowConstants->DISPOSE_ON_CLOSE);
        JButton_setText(this->jButton1, "OK");
        JButton_addActionListener(this->jButton1, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void BasicTextJDialog_actionPerformed(BasicTextJDialog* this, ActionEvent* evt) {
                BasicTextJDialog_jButton1ActionPerformed(this, evt);
        }
#endif
);
        JLabel_setText(this->textJLabel, "No Text Set");
        GroupLayout* layout = GroupLayout_new(BasicTextJDialog_getContentPane(this));
        JAVA_CALL(BasicTextJDialog_getContentPane(this), setLayout, layout);
        GroupLayout_setHorizontalGroup(layout, JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->LEADING), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(layout), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->LEADING), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(layout), addGap, 80, 80, 80), addComponent, this->jButton1)), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(layout), addContainerGap), addComponent, this->textJLabel, javax_swing->GroupLayout->DEFAULT_SIZE, 184, Short_MAX_VALUE))), addContainerGap)));
        GroupLayout_setVerticalGroup(layout, JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->LEADING), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(layout), addGap, 20, 20, 20), addComponent, this->textJLabel, javax_swing->GroupLayout->PREFERRED_SIZE, 20, javax_swing->GroupLayout->PREFERRED_SIZE), addGap, 30, 30, 30), addComponent, this->jButton1)));
        BasicTextJDialog_pack(this);
}


static void BasicTextJDialog_jButton1ActionPerformed(BasicTextJDialog* this, ActionEvent* evt) {
        BasicTextJDialog_setVisible(this, false);
        if (this->closeListenerInterface != nullptr) {
            CloseJDialogListenerInterface_onClose(this->closeListenerInterface);
        }
}


void BasicTextJDialog_main(const char** args) {
        JAVA_CALL(java_awt->EventQueue, invokeLater, ARunnable_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void BasicTextJDialog_run(BasicTextJDialog* this) {
                BasicTextJDialog_setVisible(BasicTextJDialog_new(JFrame_new(), true, "Test"), true);
        }
#endif
);
}

