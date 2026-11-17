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
#include "org/allbinary/thread/ARunnable.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/gui/dialog/HashMapJDialogListenerInterface.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/graphics/j2me/dialog/JDialog.h"

typedef struct RotateJDialog RotateJDialog;
struct RotateJDialog {
    JDialog base;
    LogUtil* logUtil;
    HashMap* hashMap;
    JTextField* angleIncrementJTextField;
    JButton* jButton1;
    JLabel* jLabel1;
    JLabel* jLabel2;
    JPanel* jPanel1;
    JTextField* totalRotationJTextField;
};


RotateJDialog* RotateJDialog_new(Frame* parent, bool modal);

void RotateJDialog_init(RotateJDialog* this, Frame* parent, bool modal);
static void RotateJDialog_initComponents(RotateJDialog* this);
static void RotateJDialog_jButton1ActionPerformed(RotateJDialog* this, ActionEvent* evt);
void RotateJDialog_main(const char** args);

static void RotateJDialog_initFields(RotateJDialog* this) {
    this->logUtil = LogUtil_getInstance();
    this->hashMap = StdUtil_createHashMap(StdUtil_getInstance());
    this->angleIncrementJTextField = nullptr;
    this->jButton1 = nullptr;
    this->jLabel1 = nullptr;
    this->jLabel2 = nullptr;
    this->jPanel1 = nullptr;
    this->totalRotationJTextField = nullptr;
}


void RotateJDialog_init(RotateJDialog* this, Frame* parent, bool modal) {
        JDialog_init(&this->base, parent, modal);
        RotateJDialog_initFields(this);
        RotateJDialog_initComponents(this);
}

RotateJDialog* RotateJDialog_new(Frame* parent, bool modal) {
    RotateJDialog* this = calloc(1, sizeof(RotateJDialog));
    RotateJDialog_init(this, parent, modal);
    return this;
}


static void RotateJDialog_initComponents(RotateJDialog* this) {
        this->angleIncrementJTextField = JTextField_new();
        this->jLabel1 = JLabel_new();
        this->totalRotationJTextField = JTextField_new();
        this->jLabel2 = JLabel_new();
        this->jPanel1 = JPanel_new();
        this->jButton1 = JButton_new();
        RotateJDialog_setDefaultCloseOperation(this, javax_swing->WindowConstants->DISPOSE_ON_CLOSE);
        JTextField_setText(this->angleIncrementJTextField, "36");
        JLabel_setText(this->jLabel1, "Angle Increment:");
        JTextField_setText(this->totalRotationJTextField, "360");
        JLabel_setText(this->jLabel2, "Total Angular Rotation:");
        JButton_setText(this->jButton1, "OK");
        JButton_addActionListener(this->jButton1, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void RotateJDialog_actionPerformed(RotateJDialog* this, ActionEvent* evt) {
                RotateJDialog_jButton1ActionPerformed(this, evt);
        }
#endif
);
        GroupLayout* jPanel1Layout = GroupLayout_new(this->jPanel1);
        JPanel_setLayout(this->jPanel1, jPanel1Layout);
        GroupLayout_setHorizontalGroup(jPanel1Layout, JAVA_CALL(GroupLayout_createParallelGroup(jPanel1Layout, javax_swing->GroupLayout->Alignment->LEADING), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(jPanel1Layout), addGap, 62, 62, 62), addComponent, this->jButton1), addContainerGap, 62, Short_MAX_VALUE)));
        GroupLayout_setVerticalGroup(jPanel1Layout, JAVA_CALL(GroupLayout_createParallelGroup(jPanel1Layout, javax_swing->GroupLayout->Alignment->LEADING), addComponent, this->jButton1));
        GroupLayout* layout = GroupLayout_new(RotateJDialog_getContentPane(this));
        JAVA_CALL(RotateJDialog_getContentPane(this), setLayout, layout);
        GroupLayout_setHorizontalGroup(layout, JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->LEADING), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(layout), addContainerGap), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->TRAILING), addComponent, this->jLabel1), addComponent, this->jLabel2)), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->UNRELATED), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->LEADING), addComponent, this->totalRotationJTextField, javax_swing->GroupLayout->Alignment->TRAILING, javax_swing->GroupLayout->DEFAULT_SIZE, 31, Short_MAX_VALUE), addComponent, this->angleIncrementJTextField, javax_swing->GroupLayout->Alignment->TRAILING, javax_swing->GroupLayout->PREFERRED_SIZE, 31, javax_swing->GroupLayout->PREFERRED_SIZE)), addContainerGap)), addComponent, this->jPanel1, javax_swing->GroupLayout->Alignment->TRAILING, javax_swing->GroupLayout->DEFAULT_SIZE, javax_swing->GroupLayout->DEFAULT_SIZE, Short_MAX_VALUE));
        GroupLayout_setVerticalGroup(layout, JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->LEADING), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(layout), addContainerGap), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->BASELINE), addComponent, this->angleIncrementJTextField, javax_swing->GroupLayout->PREFERRED_SIZE, javax_swing->GroupLayout->DEFAULT_SIZE, javax_swing->GroupLayout->PREFERRED_SIZE), addComponent, this->jLabel1)), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->BASELINE), addComponent, this->totalRotationJTextField, javax_swing->GroupLayout->PREFERRED_SIZE, javax_swing->GroupLayout->DEFAULT_SIZE, javax_swing->GroupLayout->PREFERRED_SIZE), addComponent, this->jLabel2)), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED, 16, Short_MAX_VALUE), addComponent, this->jPanel1, javax_swing->GroupLayout->PREFERRED_SIZE, javax_swing->GroupLayout->DEFAULT_SIZE, javax_swing->GroupLayout->PREFERRED_SIZE), addContainerGap)));
        RotateJDialog_pack(this);
}


static void RotateJDialog_jButton1ActionPerformed(RotateJDialog* this, ActionEvent* evt) {
        JAVA_TRY {
            HashMap_put(this->hashMap, java_string_of(0), java_string_of(JTextField_getText(this->angleIncrementJTextField)));
            HashMap_put(this->hashMap, java_string_of(1), java_string_of(JTextField_getText(this->totalRotationJTextField)));
            HashMapJDialogListenerInterface_onHashMap((((HashMapJDialogListenerInterface*) RotateJDialog_getParent(this))), this->hashMap);
            RotateJDialog_setVisible(this, false);
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_putF(this->logUtil, commonStrings->EXCEPTION, this, "jButton1ActionPerformed");
        } JAVA_END_TRY;
}


void RotateJDialog_main(const char** args) {
        JAVA_CALL(java_awt->EventQueue, invokeLater, ARunnable_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void RotateJDialog_run(RotateJDialog* this) {
                RotateJDialog* dialog = RotateJDialog_new(JFrame_new(), true);
                RotateJDialog_addWindowListener(dialog, WindowAdapter_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
                    

                void RotateJDialog_windowClosing(RotateJDialog* this, WindowEvent* e) {
                        exit(0);
                }
#endif
);
                RotateJDialog_setVisible(dialog, true);
        }
#endif
);
}

