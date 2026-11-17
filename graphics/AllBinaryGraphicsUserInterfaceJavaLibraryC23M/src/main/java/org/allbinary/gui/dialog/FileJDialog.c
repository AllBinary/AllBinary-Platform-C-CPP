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
// #include "java/io/File.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/gui/dialog/JDialog.h"

typedef struct FileJDialog FileJDialog;
struct FileJDialog {
    JDialog base;
    LogUtil* logUtil;
    FileJDialogListenerInterface* finishedListenerInterface;
    JFileChooser* jFileChooser1;
};


FileJDialog* FileJDialog_new(void);

void FileJDialog_init(FileJDialog* this);

FileJDialog* FileJDialog_new2(Frame* parent, bool modal);
void FileJDialog_init2(FileJDialog* this, Frame* parent, bool modal);
void FileJDialog_addFinishedListener(FileJDialog* this, FileJDialogListenerInterface* finishedListenerInterface);
static void FileJDialog_initComponents(FileJDialog* this);
static void FileJDialog_jFileChooser1ActionPerformed(FileJDialog* this, ActionEvent* evt);
void FileJDialog_main(const char** args);
JFileChooser* FileJDialog_getJFileChooser1(FileJDialog* this);
void FileJDialog_setJFileChooser1(FileJDialog* this, JFileChooser* jFileChooser1);

static void FileJDialog_initFields(FileJDialog* this) {
    this->logUtil = LogUtil_getInstance();
    this->finishedListenerInterface = nullptr;
    this->jFileChooser1 = nullptr;
}


void FileJDialog_init(FileJDialog* this) {
        JDialog_init(&this->base);
        FileJDialog_initFields(this);
        FileJDialog_initComponents(this);
        JAVA_CALL(FileJDialog_getJFileChooser1(this), setMultiSelectionEnabled, true);
}

FileJDialog* FileJDialog_new(void) {
    FileJDialog* this = calloc(1, sizeof(FileJDialog));
    FileJDialog_init(this);
    return this;
}


void FileJDialog_init2(FileJDialog* this, Frame* parent, bool modal) {
        JDialog_init(&this->base, parent, modal);
        FileJDialog_initFields(this);
        FileJDialog_initComponents(this);
        JAVA_CALL(FileJDialog_getJFileChooser1(this), setMultiSelectionEnabled, true);
}

FileJDialog* FileJDialog_new2(Frame* parent, bool modal) {
    FileJDialog* this = calloc(1, sizeof(FileJDialog));
    FileJDialog_init2(this, parent, modal);
    return this;
}


void FileJDialog_addFinishedListener(FileJDialog* this, FileJDialogListenerInterface* finishedListenerInterface) {
        this->finishedListenerInterface = finishedListenerInterface;
}


static void FileJDialog_initComponents(FileJDialog* this) {
        this->jFileChooser1 = JFileChooser_new();
        FileJDialog_setDefaultCloseOperation(this, javax_swing->WindowConstants->DISPOSE_ON_CLOSE);
        JFileChooser_addActionListener(this->jFileChooser1, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void FileJDialog_actionPerformed(FileJDialog* this, ActionEvent* evt) {
                FileJDialog_jFileChooser1ActionPerformed(this, evt);
        }
#endif
);
        GroupLayout* layout = GroupLayout_new(FileJDialog_getContentPane(this));
        JAVA_CALL(FileJDialog_getContentPane(this), setLayout, layout);
        GroupLayout_setHorizontalGroup(layout, JAVA_CALL(GroupLayout_createParallelGroup(layout, org_jdesktop->layout->GroupLayout->LEADING), add, org_jdesktop->layout->GroupLayout->TRAILING, JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(layout), addContainerGap, org_jdesktop->layout->GroupLayout->DEFAULT_SIZE, Short_MAX_VALUE), add, this->jFileChooser1, org_jdesktop->layout->GroupLayout->PREFERRED_SIZE, org_jdesktop->layout->GroupLayout->DEFAULT_SIZE, org_jdesktop->layout->GroupLayout->PREFERRED_SIZE), addContainerGap)));
        GroupLayout_setVerticalGroup(layout, JAVA_CALL(GroupLayout_createParallelGroup(layout, org_jdesktop->layout->GroupLayout->LEADING), add, JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(layout), addContainerGap), add, this->jFileChooser1, org_jdesktop->layout->GroupLayout->PREFERRED_SIZE, 357, org_jdesktop->layout->GroupLayout->PREFERRED_SIZE), addContainerGap, org_jdesktop->layout->GroupLayout->DEFAULT_SIZE, Short_MAX_VALUE)));
        FileJDialog_pack(this);
}


static void FileJDialog_jFileChooser1ActionPerformed(FileJDialog* this, ActionEvent* evt) {
        LogUtil_putF(this->logUtil, java_concat("Starting Action Command: ", java_string_of(ActionEvent_getActionCommand(evt))), this, "ActionPerformed");
        File** files = JAVA_CALL(FileJDialog_getJFileChooser1(this), getSelectedFiles);
        if (ActionEvent_getActionCommand(evt) == FileJDialog_getJFileChooser1(this)->CANCEL_SELECTION) {
            FileJDialog_setVisible(this, false);
        }
        if (ActionEvent_getActionCommand(evt) == FileJDialog_getJFileChooser1(this)->APPROVE_SELECTION) {
            if (files != nullptr && java_array_length(files) > 0) {
                FileJDialogListenerInterface_onFiles(this->finishedListenerInterface, files);
            }
        }
}


void FileJDialog_main(const char** args) {
        JAVA_CALL(java_awt->EventQueue, invokeLater, ARunnable_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void FileJDialog_run(FileJDialog* this) {
                FileJDialog_setVisible(FileJDialog_new(JFrame_new(), true), true);
        }
#endif
);
}


JFileChooser* FileJDialog_getJFileChooser1(FileJDialog* this) {
        return this->jFileChooser1;
}


void FileJDialog_setJFileChooser1(FileJDialog* this, JFileChooser* jFileChooser1) {
        this->jFileChooser1 = jFileChooser1;
}

