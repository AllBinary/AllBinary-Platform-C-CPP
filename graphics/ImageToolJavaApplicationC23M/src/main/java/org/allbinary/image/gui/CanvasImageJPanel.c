/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2022 AllBinary 
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
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/media/image/CanvasExpandUtil.h"
#include "org/allbinary/media/image/CanvasTrimUtil.h"
#include "org/allbinary/media/image/ImageProcessedVisitor.h"
#include "org/allbinary/media/image/ImageProcessorInput.h"
#include "org/allbinary/media/image/ImageStrings.h"
#include "org/allbinary/string/CommonPhoneStrings.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/image/gui/JPanel.h"

typedef struct CanvasImageJPanel CanvasImageJPanel;
struct CanvasImageJPanel {
    JPanel base;
    ImageProcessedVisitor ImageProcessedVisitor_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    CommonSeps* commonSeps;
    ImageStrings* imageStrings;
    ImageProcessorInput* imageProcessorInput;
    BufferedImage* result;
    JButton* generateJButton;
    JTextField* heightReductionTextField;
    JTextField* heightReductionTextField1;
    JLabel* jLabel4;
    JLabel* jLabel5;
    JLabel* jLabel6;
    JLabel* jLabel7;
    JLabel* jLabel8;
    JPanel* jPanel1;
    JPanel* jPanel2;
    JTextField* widthReductionTextField;
    JTextField* widthReductionTextField1;
    JCheckBox* writeOverOriginalJCheckBox;
};


CanvasImageJPanel* CanvasImageJPanel_new(ImageProcessorInput* imageProcessorInput);

void CanvasImageJPanel_init(CanvasImageJPanel* this, ImageProcessorInput* imageProcessorInput);
void CanvasImageJPanel_process(CanvasImageJPanel* this);
static void CanvasImageJPanel_initComponents(CanvasImageJPanel* this);
static void CanvasImageJPanel_writeOverOriginalJCheckBoxActionPerformed(CanvasImageJPanel* this, ActionEvent* evt);
static void CanvasImageJPanel_generateJButtonActionPerformed(CanvasImageJPanel* this, ActionEvent* evt);
static void CanvasImageJPanel_widthReductionTextFieldActionPerformed(CanvasImageJPanel* this, ActionEvent* evt);
static void CanvasImageJPanel_widthReductionTextField1ActionPerformed(CanvasImageJPanel* this, ActionEvent* evt);
ImageProcessorInput* CanvasImageJPanel_getImageProcessorInput(CanvasImageJPanel* this);
void CanvasImageJPanel_setImageProcessorInput(CanvasImageJPanel* this, ImageProcessorInput* imageProcessorInput);
void CanvasImageJPanel_visit(CanvasImageJPanel* this, BufferedImage* generatedBufferedImage, const char* name, int32_t index);

static void CanvasImageJPanel_initFields(CanvasImageJPanel* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->commonSeps = CommonSeps_getInstance();
    this->imageStrings = ImageStrings_getInstance();
    
    this->result = nullptr;
    this->generateJButton = nullptr;
    this->heightReductionTextField = nullptr;
    this->heightReductionTextField1 = nullptr;
    this->jLabel4 = nullptr;
    this->jLabel5 = nullptr;
    this->jLabel6 = nullptr;
    this->jLabel7 = nullptr;
    this->jLabel8 = nullptr;
    this->jPanel1 = nullptr;
    this->jPanel2 = nullptr;
    this->widthReductionTextField = nullptr;
    this->widthReductionTextField1 = nullptr;
    this->writeOverOriginalJCheckBox = nullptr;
}


void CanvasImageJPanel_init(CanvasImageJPanel* this, ImageProcessorInput* imageProcessorInput) {
        JPanel_init(&this->base);
        CanvasImageJPanel_initFields(this);
        CanvasImageJPanel_initComponents(this);
        this->imageProcessorInput = imageProcessorInput;
}

CanvasImageJPanel* CanvasImageJPanel_new(ImageProcessorInput* imageProcessorInput) {
    CanvasImageJPanel* this = calloc(1, sizeof(CanvasImageJPanel));
    CanvasImageJPanel_init(this, imageProcessorInput);
    return this;
}


void CanvasImageJPanel_process(CanvasImageJPanel* this) {
        Thread_start(Thread_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void CanvasImageJPanel_run(CanvasImageJPanel* this) {
                LogUtil* logUtil = LogUtil_getInstance();
                JAVA_TRY {
                    CanvasTrimUtil* canvasTrimUtil = CanvasTrimUtil_getInstance();
                    CanvasExpandUtil* canvasExpandUtil = CanvasExpandUtil_getInstance();
                    int32_t leftReduction = java_string_of(JTextField_getText(this->widthReductionTextField1));
                    int32_t topReduction = java_string_of(JTextField_getText(this->heightReductionTextField1));
                    int32_t widthReduction = java_string_of(JTextField_getText(this->widthReductionTextField));
                    int32_t heightReduction = java_string_of(JTextField_getText(this->heightReductionTextField));
                    if (leftReduction <= 0 || topReduction <= 0 || widthReduction <= 0 || heightReduction <= 0) {
                        CanvasTrimUtil_process(canvasTrimUtil, CanvasImageJPanel_getImageProcessorInput(this), -leftReduction, -topReduction, -widthReduction, -heightReduction, this);
                    } else {
                        CanvasExpandUtil_process(canvasExpandUtil, CanvasImageJPanel_getImageProcessorInput(this), leftReduction, topReduction, this);
                    }
                } JAVA_CATCH(Exception, e) {
                    LogUtil_put(logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->RUN, e);
                } JAVA_END_TRY;
        }
#endif
);
}


static void CanvasImageJPanel_initComponents(CanvasImageJPanel* this) {
        this->writeOverOriginalJCheckBox = JCheckBox_new();
        this->jPanel1 = JPanel_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void CanvasImageJPanel_paint(CanvasImageJPanel* this, Graphics* graphics) {
                if (this->result != nullptr) {
                    Graphics_drawImage(graphics, this->result, 0, 0, BufferedImage_getWidth(this->result, nullptr), BufferedImage_getHeight(this->result, nullptr), nullptr);
                }
        }
#endif
;
        this->generateJButton = JButton_new();
        this->jLabel4 = JLabel_new();
        this->jPanel2 = JPanel_new();
        this->jLabel5 = JLabel_new();
        this->widthReductionTextField = JTextField_new();
        this->jLabel6 = JLabel_new();
        this->heightReductionTextField = JTextField_new();
        this->widthReductionTextField1 = JTextField_new();
        this->jLabel7 = JLabel_new();
        this->jLabel8 = JLabel_new();
        this->heightReductionTextField1 = JTextField_new();
        JCheckBox_setSelected(this->writeOverOriginalJCheckBox, true);
        JCheckBox_setText(this->writeOverOriginalJCheckBox, "Write Over Original");
        JCheckBox_addActionListener(this->writeOverOriginalJCheckBox, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void CanvasImageJPanel_actionPerformed(CanvasImageJPanel* this, ActionEvent* evt) {
                CanvasImageJPanel_writeOverOriginalJCheckBoxActionPerformed(this, evt);
        }
#endif
);
        GroupLayout* jPanel1Layout = GroupLayout_new(this->jPanel1);
        JPanel_setLayout(this->jPanel1, jPanel1Layout);
        GroupLayout_setHorizontalGroup(jPanel1Layout, JAVA_CALL(GroupLayout_createParallelGroup(jPanel1Layout, javax_swing->GroupLayout->Alignment->LEADING), addGap, 0, 0, Short_MAX_VALUE));
        GroupLayout_setVerticalGroup(jPanel1Layout, JAVA_CALL(GroupLayout_createParallelGroup(jPanel1Layout, javax_swing->GroupLayout->Alignment->LEADING), addGap, 0, 196, Short_MAX_VALUE));
        JButton_setText(this->generateJButton, "Generate");
        JButton_addActionListener(this->generateJButton, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void CanvasImageJPanel_actionPerformed(CanvasImageJPanel* this, ActionEvent* evt) {
                CanvasImageJPanel_generateJButtonActionPerformed(this, evt);
        }
#endif
);
        JLabel_setText(this->jLabel4, "Results:");
        JLabel_setText(this->jLabel5, "Right:");
        JTextField_setText(this->widthReductionTextField, CommonPhoneStrings_getInstance()->ZERO);
        JTextField_addActionListener(this->widthReductionTextField, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void CanvasImageJPanel_actionPerformed(CanvasImageJPanel* this, ActionEvent* evt) {
                CanvasImageJPanel_widthReductionTextFieldActionPerformed(this, evt);
        }
#endif
);
        JLabel_setText(this->jLabel6, "Bottom");
        JTextField_setText(this->heightReductionTextField, CommonPhoneStrings_getInstance()->ZERO);
        JTextField_setText(this->widthReductionTextField1, CommonPhoneStrings_getInstance()->ZERO);
        JTextField_addActionListener(this->widthReductionTextField1, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void CanvasImageJPanel_actionPerformed(CanvasImageJPanel* this, ActionEvent* evt) {
                CanvasImageJPanel_widthReductionTextField1ActionPerformed(this, evt);
        }
#endif
);
        JLabel_setText(this->jLabel7, "Top");
        JLabel_setText(this->jLabel8, "Left:");
        JTextField_setText(this->heightReductionTextField1, CommonPhoneStrings_getInstance()->ZERO);
        GroupLayout* jPanel2Layout = GroupLayout_new(this->jPanel2);
        JPanel_setLayout(this->jPanel2, jPanel2Layout);
        GroupLayout_setHorizontalGroup(jPanel2Layout, JAVA_CALL(GroupLayout_createParallelGroup(jPanel2Layout, javax_swing->GroupLayout->Alignment->LEADING), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(jPanel2Layout), addContainerGap), addComponent, this->jLabel8), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addComponent, this->widthReductionTextField1, javax_swing->GroupLayout->PREFERRED_SIZE, 41, javax_swing->GroupLayout->PREFERRED_SIZE), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addComponent, this->jLabel5), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addComponent, this->widthReductionTextField, javax_swing->GroupLayout->PREFERRED_SIZE, 41, javax_swing->GroupLayout->PREFERRED_SIZE), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addComponent, this->jLabel7), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addComponent, this->heightReductionTextField1, javax_swing->GroupLayout->PREFERRED_SIZE, 46, javax_swing->GroupLayout->PREFERRED_SIZE), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addComponent, this->jLabel6), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addComponent, this->heightReductionTextField, javax_swing->GroupLayout->PREFERRED_SIZE, 46, javax_swing->GroupLayout->PREFERRED_SIZE), addContainerGap, 140, Short_MAX_VALUE)));
        GroupLayout_setVerticalGroup(jPanel2Layout, JAVA_CALL(GroupLayout_createParallelGroup(jPanel2Layout, javax_swing->GroupLayout->Alignment->LEADING), addGroup, javax_swing->GroupLayout->Alignment->TRAILING, JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(jPanel2Layout), addGap, 0, 16, Short_MAX_VALUE), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(jPanel2Layout, javax_swing->GroupLayout->Alignment->LEADING), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(jPanel2Layout, javax_swing->GroupLayout->Alignment->BASELINE), addComponent, this->jLabel6), addComponent, this->heightReductionTextField, javax_swing->GroupLayout->PREFERRED_SIZE, javax_swing->GroupLayout->DEFAULT_SIZE, javax_swing->GroupLayout->PREFERRED_SIZE)), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(jPanel2Layout, javax_swing->GroupLayout->Alignment->BASELINE), addComponent, this->jLabel8), addComponent, this->widthReductionTextField1, javax_swing->GroupLayout->PREFERRED_SIZE, 22, javax_swing->GroupLayout->PREFERRED_SIZE), addComponent, this->jLabel7), addComponent, this->heightReductionTextField1, javax_swing->GroupLayout->PREFERRED_SIZE, javax_swing->GroupLayout->DEFAULT_SIZE, javax_swing->GroupLayout->PREFERRED_SIZE)), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(jPanel2Layout, javax_swing->GroupLayout->Alignment->BASELINE), addComponent, this->jLabel5), addComponent, this->widthReductionTextField, javax_swing->GroupLayout->PREFERRED_SIZE, 22, javax_swing->GroupLayout->PREFERRED_SIZE)))));
        GroupLayout* layout = GroupLayout_new(this);
        CanvasImageJPanel_setLayout(this, layout);
        GroupLayout_setHorizontalGroup(layout, JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->LEADING), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(layout), addComponent, this->jPanel2, javax_swing->GroupLayout->DEFAULT_SIZE, javax_swing->GroupLayout->DEFAULT_SIZE, Short_MAX_VALUE), addGap, 78, 78, 78)), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(layout), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->LEADING), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(layout), addContainerGap), addComponent, this->jPanel1, javax_swing->GroupLayout->DEFAULT_SIZE, javax_swing->GroupLayout->DEFAULT_SIZE, Short_MAX_VALUE)), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(layout), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->LEADING), addComponent, this->jLabel4), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(layout), addComponent, this->writeOverOriginalJCheckBox), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addComponent, this->generateJButton))), addGap, 0, 0, Short_MAX_VALUE))), addContainerGap)));
        GroupLayout_setVerticalGroup(layout, JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->LEADING), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(layout), addComponent, this->jPanel2, javax_swing->GroupLayout->PREFERRED_SIZE, javax_swing->GroupLayout->DEFAULT_SIZE, javax_swing->GroupLayout->PREFERRED_SIZE), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->LEADING), addComponent, this->generateJButton), addComponent, this->writeOverOriginalJCheckBox)), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addComponent, this->jLabel4), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addComponent, this->jPanel1, javax_swing->GroupLayout->DEFAULT_SIZE, javax_swing->GroupLayout->DEFAULT_SIZE, Short_MAX_VALUE)));
}


static void CanvasImageJPanel_writeOverOriginalJCheckBoxActionPerformed(CanvasImageJPanel* this, ActionEvent* evt) {
}


static void CanvasImageJPanel_generateJButtonActionPerformed(CanvasImageJPanel* this, ActionEvent* evt) {
        CanvasImageJPanel_process(this);
}


static void CanvasImageJPanel_widthReductionTextFieldActionPerformed(CanvasImageJPanel* this, ActionEvent* evt) {
}


static void CanvasImageJPanel_widthReductionTextField1ActionPerformed(CanvasImageJPanel* this, ActionEvent* evt) {
}


ImageProcessorInput* CanvasImageJPanel_getImageProcessorInput(CanvasImageJPanel* this) {
        return this->imageProcessorInput;
}


void CanvasImageJPanel_setImageProcessorInput(CanvasImageJPanel* this, ImageProcessorInput* imageProcessorInput) {
        this->imageProcessorInput = imageProcessorInput;
}


// throws IOException
void CanvasImageJPanel_visit(CanvasImageJPanel* this, BufferedImage* generatedBufferedImage, const char* name, int32_t index) {
        LogUtil_putF(this->logUtil, this->commonStrings->VISIT, this, this->commonStrings->VISIT);
        this->result = generatedBufferedImage;
        JAVA_CALL(CanvasImageJPanel_getParent(this), repaint);
        File* file = ImageProcessorInput_getFiles(this->imageProcessorInput)[index];
        if (!JCheckBox_isSelected(this->writeOverOriginalJCheckBox)) {
            const char* filePath = File_getAbsolutePath(file);
            int32_t extensionIndex = java_string_indexOf(filePath, this->imageStrings->PNG_EXTENSION);
            filePath = JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), java_substring(filePath, 0, extensionIndex)), append, this->commonSeps->UNDERSCORE), append, name), append, this->imageStrings->PNG_EXTENSION), toString);
            file = File_new(filePath);
        }
        bool isWritten = ImageIO_write(((RenderedImage*) this->result), this->imageStrings->PNG, file);
        LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "File: "), append, StringUtil_toString(StringUtil_getInstance(), file)), append, " Wrote: "), appendboolean, isWritten), toString), this, this->commonStrings->RUN);
}

