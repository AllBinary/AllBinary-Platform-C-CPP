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
// package org.allbinary.image.gui

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/awt/image/BufferedImage.h"
// #include "java/awt/image/RenderedImage.h"
// #include "java/io/File.h"
// #include "java/io/IOException.h"
// #include "javax/imageio/ImageIO.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/media/image/ImageArrayRotationUtil.h"
#include "org/allbinary/media/image/ImageProcessedVisitor.h"
#include "org/allbinary/media/image/ImageProcessorInput.h"
#include "org/allbinary/media/image/ImageStrings.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/image/gui/JPanel.h"

typedef struct RotationImageJPanel RotationImageJPanel;
struct RotationImageJPanel {
    JPanel base;
    ImageProcessedVisitor ImageProcessedVisitor_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    ImageStrings* imageStrings;
    ImageProcessorInput* imageProcessorInput;
    BufferedImage* result;
    JButton* generateJButton;
    JLabel* jLabel1;
    JLabel* jLabel2;
    JLabel* jLabel3;
    JPanel* jPanel1;
    JPanel* jPanel2;
    JPanel* jPanel3;
    JComboBox* totalAngleJComboBox;
    JCheckBox* writeOverOriginalJCheckBox;
};


RotationImageJPanel* RotationImageJPanel_new(ImageProcessorInput* imageProcessorInput);

void RotationImageJPanel_init(RotationImageJPanel* this, ImageProcessorInput* imageProcessorInput);
void RotationImageJPanel_process(RotationImageJPanel* this);
static void RotationImageJPanel_initComponents(RotationImageJPanel* this);
static void RotationImageJPanel_generateJButtonActionPerformed(RotationImageJPanel* this, ActionEvent* evt);
static void RotationImageJPanel_totalAngleJComboBoxActionPerformed(RotationImageJPanel* this, ActionEvent* evt);
ImageProcessorInput* RotationImageJPanel_getImageProcessorInput(RotationImageJPanel* this);
void RotationImageJPanel_setImageProcessorInput(RotationImageJPanel* this, ImageProcessorInput* imageProcessorInput);
void RotationImageJPanel_visit(RotationImageJPanel* this, BufferedImage* generatedBufferedImage, const char* name, int32_t index);

static void RotationImageJPanel_initFields(RotationImageJPanel* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->imageStrings = ImageStrings_getInstance();
    
    this->result = nullptr;
    this->generateJButton = nullptr;
    this->jLabel1 = nullptr;
    this->jLabel2 = nullptr;
    this->jLabel3 = nullptr;
    this->jPanel1 = nullptr;
    this->jPanel2 = nullptr;
    this->jPanel3 = nullptr;
    this->totalAngleJComboBox = nullptr;
    this->writeOverOriginalJCheckBox = nullptr;
}


void RotationImageJPanel_init(RotationImageJPanel* this, ImageProcessorInput* imageProcessorInput) {
        JPanel_init(&this->base);
        RotationImageJPanel_initFields(this);
        RotationImageJPanel_initComponents(this);
        this->imageProcessorInput = imageProcessorInput;
}

RotationImageJPanel* RotationImageJPanel_new(ImageProcessorInput* imageProcessorInput) {
    RotationImageJPanel* this = calloc(1, sizeof(RotationImageJPanel));
    RotationImageJPanel_init(this, imageProcessorInput);
    return this;
}


void RotationImageJPanel_process(RotationImageJPanel* this) {
        Thread_start(Thread_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void RotationImageJPanel_run(RotationImageJPanel* this) {
                LogUtil* logUtil = LogUtil_getInstance();
                JAVA_TRY {
                    const char* angleAsString = ((const char*) JComboBox_getSelectedItem(this->totalAngleJComboBox));
                    ImageArrayRotationUtil_process(ImageArrayRotationUtil_getInstance(), RotationImageJPanel_getImageProcessorInput(this), angleAsString, this);
                } JAVA_CATCH(Exception, e) {
                    LogUtil_put(logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->RUN, e);
                } JAVA_END_TRY;
        }
#endif
);
}


static void RotationImageJPanel_initComponents(RotationImageJPanel* this) {
        this->jPanel1 = JPanel_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void RotationImageJPanel_paint(RotationImageJPanel* this, Graphics* graphics) {
                if (this->result != nullptr) {
                    Graphics_drawImage(graphics, this->result, 0, 0, BufferedImage_getWidth(this->result, nullptr), BufferedImage_getHeight(this->result, nullptr), nullptr);
                }
        }
#endif
;
        this->jPanel2 = JPanel_new();
        this->jLabel1 = JLabel_new();
        this->generateJButton = JButton_new();
        this->totalAngleJComboBox = JComboBox_new();
        this->jLabel3 = JLabel_new();
        this->writeOverOriginalJCheckBox = JCheckBox_new();
        this->jPanel3 = JPanel_new();
        this->jLabel2 = JLabel_new();
        GroupLayout* jPanel1Layout = GroupLayout_new(this->jPanel1);
        JPanel_setLayout(this->jPanel1, jPanel1Layout);
        GroupLayout_setHorizontalGroup(jPanel1Layout, JAVA_CALL(GroupLayout_createParallelGroup(jPanel1Layout, org_jdesktop->layout->GroupLayout->LEADING), add, 0, 436, Short_MAX_VALUE));
        GroupLayout_setVerticalGroup(jPanel1Layout, JAVA_CALL(GroupLayout_createParallelGroup(jPanel1Layout, org_jdesktop->layout->GroupLayout->LEADING), add, 0, 227, Short_MAX_VALUE));
        JButton_setText(this->generateJButton, "Generate");
        JButton_addActionListener(this->generateJButton, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void RotationImageJPanel_actionPerformed(RotationImageJPanel* this, ActionEvent* evt) {
                RotationImageJPanel_generateJButtonActionPerformed(this, evt);
        }
#endif
);
        JComboBox_setModel(this->totalAngleJComboBox, DefaultComboBoxModel_new(((const char**) java_array_from(sizeof(const char*), sizeof((const char*[]){ this->commonStrings->UP, this->commonStrings->DOWN, "-90", "90" }) / sizeof(const char*), (const char*[]){ this->commonStrings->UP, this->commonStrings->DOWN, "-90", "90" }))));
        JComboBox_addActionListener(this->totalAngleJComboBox, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void RotationImageJPanel_actionPerformed(RotationImageJPanel* this, ActionEvent* evt) {
                RotationImageJPanel_totalAngleJComboBoxActionPerformed(this, evt);
        }
#endif
);
        JLabel_setText(this->jLabel3, "Total Angle:");
        JCheckBox_setText(this->writeOverOriginalJCheckBox, "Write Over Original");
        GroupLayout* jPanel2Layout = GroupLayout_new(this->jPanel2);
        JPanel_setLayout(this->jPanel2, jPanel2Layout);
        GroupLayout_setHorizontalGroup(jPanel2Layout, JAVA_CALL(GroupLayout_createParallelGroup(jPanel2Layout, org_jdesktop->layout->GroupLayout->LEADING), add, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(jPanel2Layout), add, 8, 8, 8), add, this->jLabel1), addPreferredGap, org_jdesktop->layout->LayoutStyle->RELATED), add, this->jLabel3), addPreferredGap, org_jdesktop->layout->LayoutStyle->RELATED), add, this->totalAngleJComboBox, org_jdesktop->layout->GroupLayout->PREFERRED_SIZE, org_jdesktop->layout->GroupLayout->DEFAULT_SIZE, org_jdesktop->layout->GroupLayout->PREFERRED_SIZE), addPreferredGap, org_jdesktop->layout->LayoutStyle->RELATED), add, this->writeOverOriginalJCheckBox), addPreferredGap, org_jdesktop->layout->LayoutStyle->RELATED), add, this->generateJButton), addContainerGap, org_jdesktop->layout->GroupLayout->DEFAULT_SIZE, Short_MAX_VALUE)));
        GroupLayout_setVerticalGroup(jPanel2Layout, JAVA_CALL(GroupLayout_createParallelGroup(jPanel2Layout, org_jdesktop->layout->GroupLayout->LEADING), add, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(jPanel2Layout, org_jdesktop->layout->GroupLayout->BASELINE), add, this->jLabel1), add, this->generateJButton), add, this->totalAngleJComboBox, org_jdesktop->layout->GroupLayout->PREFERRED_SIZE, org_jdesktop->layout->GroupLayout->DEFAULT_SIZE, org_jdesktop->layout->GroupLayout->PREFERRED_SIZE), add, this->jLabel3), add, this->writeOverOriginalJCheckBox)));
        JLabel_setText(this->jLabel2, "Results:");
        GroupLayout* jPanel3Layout = GroupLayout_new(this->jPanel3);
        JPanel_setLayout(this->jPanel3, jPanel3Layout);
        GroupLayout_setHorizontalGroup(jPanel3Layout, JAVA_CALL(GroupLayout_createParallelGroup(jPanel3Layout, org_jdesktop->layout->GroupLayout->LEADING), add, JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(jPanel3Layout), add, this->jLabel2), addContainerGap, 377, Short_MAX_VALUE)));
        GroupLayout_setVerticalGroup(jPanel3Layout, JAVA_CALL(GroupLayout_createParallelGroup(jPanel3Layout, org_jdesktop->layout->GroupLayout->LEADING), add, this->jLabel2));
        GroupLayout* layout = GroupLayout_new(this);
        RotationImageJPanel_setLayout(this, layout);
        GroupLayout_setHorizontalGroup(layout, JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(layout, org_jdesktop->layout->GroupLayout->LEADING), add, org_jdesktop->layout->GroupLayout->TRAILING, this->jPanel2, org_jdesktop->layout->GroupLayout->DEFAULT_SIZE, org_jdesktop->layout->GroupLayout->DEFAULT_SIZE, Short_MAX_VALUE), add, JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(layout), addContainerGap), add, this->jPanel3, org_jdesktop->layout->GroupLayout->DEFAULT_SIZE, org_jdesktop->layout->GroupLayout->DEFAULT_SIZE, Short_MAX_VALUE), addContainerGap)), add, this->jPanel1, org_jdesktop->layout->GroupLayout->DEFAULT_SIZE, org_jdesktop->layout->GroupLayout->DEFAULT_SIZE, Short_MAX_VALUE));
        GroupLayout_setVerticalGroup(layout, JAVA_CALL(GroupLayout_createParallelGroup(layout, org_jdesktop->layout->GroupLayout->LEADING), add, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(layout), add, this->jPanel2, org_jdesktop->layout->GroupLayout->PREFERRED_SIZE, org_jdesktop->layout->GroupLayout->DEFAULT_SIZE, org_jdesktop->layout->GroupLayout->PREFERRED_SIZE), addPreferredGap, org_jdesktop->layout->LayoutStyle->UNRELATED), add, this->jPanel3, org_jdesktop->layout->GroupLayout->PREFERRED_SIZE, org_jdesktop->layout->GroupLayout->DEFAULT_SIZE, org_jdesktop->layout->GroupLayout->PREFERRED_SIZE), addPreferredGap, org_jdesktop->layout->LayoutStyle->RELATED), add, this->jPanel1, org_jdesktop->layout->GroupLayout->DEFAULT_SIZE, org_jdesktop->layout->GroupLayout->DEFAULT_SIZE, Short_MAX_VALUE)));
}


static void RotationImageJPanel_generateJButtonActionPerformed(RotationImageJPanel* this, ActionEvent* evt) {
        RotationImageJPanel_process(this);
}


static void RotationImageJPanel_totalAngleJComboBoxActionPerformed(RotationImageJPanel* this, ActionEvent* evt) {
}


ImageProcessorInput* RotationImageJPanel_getImageProcessorInput(RotationImageJPanel* this) {
        return this->imageProcessorInput;
}


void RotationImageJPanel_setImageProcessorInput(RotationImageJPanel* this, ImageProcessorInput* imageProcessorInput) {
        this->imageProcessorInput = imageProcessorInput;
}


// throws IOException
void RotationImageJPanel_visit(RotationImageJPanel* this, BufferedImage* generatedBufferedImage, const char* name, int32_t index) {
        this->result = generatedBufferedImage;
        JAVA_CALL(RotationImageJPanel_getParent(this), repaint);
        File* file = ImageProcessorInput_getFiles(this->imageProcessorInput)[index];
        if (!JCheckBox_isSelected(this->writeOverOriginalJCheckBox)) {
            const char* filePath = File_getAbsolutePath(file);
            int32_t extensionIndex = java_string_indexOf(filePath, this->imageStrings->PNG_EXTENSION);
            filePath = JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), java_substring(filePath, 0, extensionIndex)), append, CommonSeps_getInstance()->UNDERSCORE), append, name), append, this->imageStrings->PNG_EXTENSION), toString);
            file = File_new(filePath);
        }
        bool isWritten = ImageIO_write(((RenderedImage*) this->result), this->imageStrings->PNG, file);
        LogUtil_putF(this->logUtil, java_concat(java_concat(java_concat("File: ", java_string_of(file)), " Wrote: "), java_string_of(isWritten)), this, this->commonStrings->RUN);
}

