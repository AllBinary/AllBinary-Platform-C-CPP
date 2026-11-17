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
// package org.allbinary.graphics.j2me.dialog

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/awt/event/ActionEvent.h"
// #include "java/awt/event/ActionListener.h"
#include "org/allbinary/graphics/j2me/GraphicsException.h"
#include "org/allbinary/graphics/j2me/MyFrame.h"
#include "org/allbinary/graphics/j2me/workarea/WorkAreaJPanel.h"
#include "org/allbinary/graphics/j2me/workarea/WorkAreaJPanelInterface.h"
#include "org/allbinary/graphics/j2me/dialog/JDialog.h"

typedef struct NewWorkAreaJDialog NewWorkAreaJDialog;
struct NewWorkAreaJDialog {
    JDialog base;
    MyFrame* parent;
    Dimension* dimension;
    JTextField* xSizeJTextField;
    JTextField* ySizeJTextField;
    JTextField* nameJTextField;
};


NewWorkAreaJDialog* NewWorkAreaJDialog_new(MyFrame* parent, bool modal, Dimension* dimension, const char* newName);

void NewWorkAreaJDialog_init(NewWorkAreaJDialog* this, MyFrame* parent, bool modal, Dimension* dimension, const char* newName);
static void NewWorkAreaJDialog_disposeNewDialog(NewWorkAreaJDialog* this);
static void NewWorkAreaJDialog_initComponents(NewWorkAreaJDialog* this);
static void NewWorkAreaJDialog_closeDialog(NewWorkAreaJDialog* this, WindowEvent* evt);
void NewWorkAreaJDialog_main(const char** args);

static void NewWorkAreaJDialog_initFields(NewWorkAreaJDialog* this) {
    this->parent = nullptr;
    this->dimension = nullptr;
    this->xSizeJTextField = nullptr;
    this->ySizeJTextField = nullptr;
    this->nameJTextField = nullptr;
}


void NewWorkAreaJDialog_init(NewWorkAreaJDialog* this, MyFrame* parent, bool modal, Dimension* dimension, const char* newName) {
        JDialog_init(&this->base, ((Frame*) parent), modal);
        NewWorkAreaJDialog_initFields(this);
        JAVA_TRY {
            NewWorkAreaJDialog_initComponents(this);
            this->parent = parent;
            this->xSizeJTextField = JTextField_new("12");
            this->ySizeJTextField = JTextField_new("12");
            this->nameJTextField = JTextField_new(newName);
            this->dimension = dimension;
            JButton* submitButton = JButton_new("Ok");
            JButton_addActionListener(submitButton, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
                

            void NewWorkAreaJDialog_actionPerformed(NewWorkAreaJDialog* this, ActionEvent* evt) {
                    JAVA_TRY {
                        NewWorkAreaJDialog_disposeNewDialog(this);
                    } JAVA_CATCH(Exception, e) {
                    } JAVA_END_TRY;
            }
#endif
);
            NewWorkAreaJDialog_setSize(this, 150, 100);
            JAVA_CALL(NewWorkAreaJDialog_getContentPane(this), setLayout, GridLayout_new(5, 2));
            JAVA_CALL(NewWorkAreaJDialog_getContentPane(this), add, JLabel_new("Please enter"));
            JAVA_CALL(NewWorkAreaJDialog_getContentPane(this), add, JLabel_new(" the size."));
            JAVA_CALL(NewWorkAreaJDialog_getContentPane(this), add, JLabel_new("Name:"));
            JAVA_CALL(NewWorkAreaJDialog_getContentPane(this), add, this->nameJTextField);
            JAVA_CALL(NewWorkAreaJDialog_getContentPane(this), add, JLabel_new("X: "));
            JAVA_CALL(NewWorkAreaJDialog_getContentPane(this), add, this->xSizeJTextField);
            JAVA_CALL(NewWorkAreaJDialog_getContentPane(this), add, JLabel_new("Y: "));
            JAVA_CALL(NewWorkAreaJDialog_getContentPane(this), add, this->ySizeJTextField);
            JAVA_CALL(NewWorkAreaJDialog_getContentPane(this), add, submitButton);
            NewWorkAreaJDialog_show(this);
        } JAVA_CATCH(Exception, e) {
            java_throw(e);
        } JAVA_END_TRY;
}

NewWorkAreaJDialog* NewWorkAreaJDialog_new(MyFrame* parent, bool modal, Dimension* dimension, const char* newName) {
    NewWorkAreaJDialog* this = calloc(1, sizeof(NewWorkAreaJDialog));
    NewWorkAreaJDialog_init(this, parent, modal, dimension, newName);
    return this;
}


// throws Exception
static void NewWorkAreaJDialog_disposeNewDialog(NewWorkAreaJDialog* this) {
        JAVA_TRY {
            int32_t canvasWidth = JTextField_getText(this->xSizeJTextField);
            int32_t canvasHeight = JTextField_getText(this->ySizeJTextField);
            const char* newName = JTextField_getText(this->nameJTextField);
            if (newName == nullptr) {
                java_throw(java_exception_new("GraphicsException", "No Name", this, "disposeNewDialog"));
            }
            WorkAreaJPanel* workAreaJPanel = WorkAreaJPanel_new(newName, this->dimension, Integer_intValue(canvasWidth), Integer_intValue(canvasHeight));
            WorkAreaJPanel_setLayout(workAreaJPanel, GridLayout_new(1, 1));
            MyFrame_add(this->parent, ((WorkAreaJPanelInterface*) workAreaJPanel));
            NewWorkAreaJDialog_dispose(this);
        } JAVA_CATCH(Exception, e) {
            java_throw(e);
        } JAVA_END_TRY;
}


static void NewWorkAreaJDialog_initComponents(NewWorkAreaJDialog* this) {
        NewWorkAreaJDialog_addWindowListener(this, WindowAdapter_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void NewWorkAreaJDialog_windowClosing(NewWorkAreaJDialog* this, WindowEvent* evt) {
                NewWorkAreaJDialog_closeDialog(this, evt);
        }
#endif
);
        NewWorkAreaJDialog_pack(this);
}


static void NewWorkAreaJDialog_closeDialog(NewWorkAreaJDialog* this, WindowEvent* evt) {
        NewWorkAreaJDialog_setVisible(this, false);
        NewWorkAreaJDialog_dispose(this);
}


void NewWorkAreaJDialog_main(const char** args) {
        JAVA_TRY {
            NewWorkAreaJDialog_show(NewWorkAreaJDialog_new(MyFrame_new(), true, Dimension_new(100, 100), "testing"));
        } JAVA_CATCH(Exception, e) {
        } JAVA_END_TRY;
}

