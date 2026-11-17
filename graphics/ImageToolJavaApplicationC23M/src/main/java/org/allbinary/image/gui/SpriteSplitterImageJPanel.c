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
#include "org/allbinary/media/image/ImageProcessedVisitor.h"
#include "org/allbinary/media/image/ImageProcessorInput.h"
#include "org/allbinary/media/image/ImageStrings.h"
#include "org/allbinary/media/image/SpriteSplitterUtil.h"
#include "org/allbinary/string/CommonPhoneStrings.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/image/gui/JPanel.h"

typedef struct SpriteSplitterImageJPanel SpriteSplitterImageJPanel;
struct SpriteSplitterImageJPanel {
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
    JTextField* increaseHeightTextField;
    JTextField* increaseWidthTextField;
    JLabel* jLabel1;
    JLabel* jLabel2;
    JLabel* jLabel3;
    JLabel* jLabel4;
    JLabel* jLabel5;
    JLabel* jLabel6;
    JLabel* jLabel7;
    JLabel* jLabel8;
    JPanel* jPanel1;
    JPanel* jPanel2;
    JComboBox* spriteTypeJComboBox;
    JComboBox* totalAnimationsJComboBox;
    JComboBox* totalFramesJComboBox;
    JTextField* widthReductionTextField;
    JCheckBox* writeOverOriginalJCheckBox;
};


SpriteSplitterImageJPanel* SpriteSplitterImageJPanel_new(ImageProcessorInput* imageProcessorInput);

void SpriteSplitterImageJPanel_init(SpriteSplitterImageJPanel* this, ImageProcessorInput* imageProcessorInput);
void SpriteSplitterImageJPanel_process(SpriteSplitterImageJPanel* this);
static void SpriteSplitterImageJPanel_initComponents(SpriteSplitterImageJPanel* this);
static void SpriteSplitterImageJPanel_writeOverOriginalJCheckBoxActionPerformed(SpriteSplitterImageJPanel* this, ActionEvent* evt);
static void SpriteSplitterImageJPanel_generateJButtonActionPerformed(SpriteSplitterImageJPanel* this, ActionEvent* evt);
static void SpriteSplitterImageJPanel_spriteTypeJComboBoxActionPerformed(SpriteSplitterImageJPanel* this, ActionEvent* evt);
static void SpriteSplitterImageJPanel_totalAnimationsJComboBoxActionPerformed(SpriteSplitterImageJPanel* this, ActionEvent* evt);
static void SpriteSplitterImageJPanel_totalFramesJComboBoxActionPerformed(SpriteSplitterImageJPanel* this, ActionEvent* evt);
static void SpriteSplitterImageJPanel_widthReductionTextFieldActionPerformed(SpriteSplitterImageJPanel* this, ActionEvent* evt);
static void SpriteSplitterImageJPanel_increaseWidthTextFieldActionPerformed(SpriteSplitterImageJPanel* this, ActionEvent* evt);
ImageProcessorInput* SpriteSplitterImageJPanel_getImageProcessorInput(SpriteSplitterImageJPanel* this);
void SpriteSplitterImageJPanel_setImageProcessorInput(SpriteSplitterImageJPanel* this, ImageProcessorInput* imageProcessorInput);
void SpriteSplitterImageJPanel_visit(SpriteSplitterImageJPanel* this, BufferedImage* generatedBufferedImage, const char* name, int32_t index);

static void SpriteSplitterImageJPanel_initFields(SpriteSplitterImageJPanel* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->commonSeps = CommonSeps_getInstance();
    this->imageStrings = ImageStrings_getInstance();
    
    this->result = nullptr;
    this->generateJButton = nullptr;
    this->heightReductionTextField = nullptr;
    this->increaseHeightTextField = nullptr;
    this->increaseWidthTextField = nullptr;
    this->jLabel1 = nullptr;
    this->jLabel2 = nullptr;
    this->jLabel3 = nullptr;
    this->jLabel4 = nullptr;
    this->jLabel5 = nullptr;
    this->jLabel6 = nullptr;
    this->jLabel7 = nullptr;
    this->jLabel8 = nullptr;
    this->jPanel1 = nullptr;
    this->jPanel2 = nullptr;
    this->spriteTypeJComboBox = nullptr;
    this->totalAnimationsJComboBox = nullptr;
    this->totalFramesJComboBox = nullptr;
    this->widthReductionTextField = nullptr;
    this->writeOverOriginalJCheckBox = nullptr;
}


void SpriteSplitterImageJPanel_init(SpriteSplitterImageJPanel* this, ImageProcessorInput* imageProcessorInput) {
        JPanel_init(&this->base);
        SpriteSplitterImageJPanel_initFields(this);
        SpriteSplitterImageJPanel_initComponents(this);
        this->imageProcessorInput = imageProcessorInput;
}

SpriteSplitterImageJPanel* SpriteSplitterImageJPanel_new(ImageProcessorInput* imageProcessorInput) {
    SpriteSplitterImageJPanel* this = calloc(1, sizeof(SpriteSplitterImageJPanel));
    SpriteSplitterImageJPanel_init(this, imageProcessorInput);
    return this;
}


void SpriteSplitterImageJPanel_process(SpriteSplitterImageJPanel* this) {
        Thread_start(Thread_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void SpriteSplitterImageJPanel_run(SpriteSplitterImageJPanel* this) {
                LogUtil* logUtil = LogUtil_getInstance();
                JAVA_TRY {
                    SpriteSplitterUtil* spriteSplitterUtil = SpriteSplitterUtil_getInstance();
                    const char* spriteType = ((const char*) JComboBox_getSelectedItem(this->spriteTypeJComboBox));
                    int32_t totalFrames = java_string_of(((const char*) JComboBox_getSelectedItem(this->totalFramesJComboBox)));
                    int32_t totalAnimations = java_string_of(((const char*) JComboBox_getSelectedItem(this->totalAnimationsJComboBox)));
                    int32_t widthReduction = java_string_of(JTextField_getText(this->widthReductionTextField));
                    int32_t heightReduction = java_string_of(JTextField_getText(this->heightReductionTextField));
                    int32_t increaseWidth = java_string_of(JTextField_getText(this->increaseWidthTextField));
                    int32_t increaseHeight = java_string_of(JTextField_getText(this->increaseHeightTextField));
                    SpriteSplitterUtil_process(spriteSplitterUtil, SpriteSplitterImageJPanel_getImageProcessorInput(this), totalFrames, totalAnimations, widthReduction, heightReduction, increaseWidth, increaseHeight, spriteType, this);
                } JAVA_CATCH(Exception, e) {
                    LogUtil_put(logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->RUN, e);
                } JAVA_END_TRY;
        }
#endif
);
}


static void SpriteSplitterImageJPanel_initComponents(SpriteSplitterImageJPanel* this) {
        this->writeOverOriginalJCheckBox = JCheckBox_new();
        this->widthReductionTextField = JTextField_new();
        this->jLabel5 = JLabel_new();
        this->jPanel1 = JPanel_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void SpriteSplitterImageJPanel_paint(SpriteSplitterImageJPanel* this, Graphics* graphics) {
                if (this->result != nullptr) {
                    Graphics_drawImage(graphics, this->result, 0, 0, BufferedImage_getWidth(this->result, nullptr), BufferedImage_getHeight(this->result, nullptr), nullptr);
                }
        }
#endif
;
        this->jLabel4 = JLabel_new();
        this->jLabel6 = JLabel_new();
        this->heightReductionTextField = JTextField_new();
        this->generateJButton = JButton_new();
        this->jPanel2 = JPanel_new();
        this->jLabel1 = JLabel_new();
        this->totalFramesJComboBox = JComboBox_new();
        int32_t size = 70;
        const char** animationStringArray2 = ((const char**) java_array_new(sizeof(const char*), size - 1));
        for (int32_t index = 1; index < size; index++) {
            animationStringArray2[index - 1] = java_string_of(index);
        }
        JComboBox_setModel(this->totalFramesJComboBox, DefaultComboBoxModel_new(animationStringArray2));
        this->jLabel2 = JLabel_new();
        this->totalAnimationsJComboBox = JComboBox_new();
        const char** animationStringArray = ((const char**) java_array_new(sizeof(const char*), size - 1));
        for (int32_t index = 1; index < size; index++) {
            animationStringArray[index - 1] = java_string_of(index);
        }
        JComboBox_setModel(this->totalAnimationsJComboBox, DefaultComboBoxModel_new(animationStringArray));
        this->jLabel3 = JLabel_new();
        this->spriteTypeJComboBox = JComboBox_new();
        JComboBox_setModel(this->spriteTypeJComboBox, DefaultComboBoxModel_new(((const char**) java_array_from(sizeof(const char*), sizeof((const char*[]){ JAVA_CALL(org_allbinary->media->image->SpriteSplitterUtil, getInstance)->DIRECTIONAL_ANIMATIONS, JAVA_CALL(org_allbinary->media->image->SpriteSplitterUtil, getInstance)->HORIZONTAL_ANIMATIONS, JAVA_CALL(org_allbinary->media->image->SpriteSplitterUtil, getInstance)->HORIZONTAL_SPRITE }) / sizeof(const char*), (const char*[]){ JAVA_CALL(org_allbinary->media->image->SpriteSplitterUtil, getInstance)->DIRECTIONAL_ANIMATIONS, JAVA_CALL(org_allbinary->media->image->SpriteSplitterUtil, getInstance)->HORIZONTAL_ANIMATIONS, JAVA_CALL(org_allbinary->media->image->SpriteSplitterUtil, getInstance)->HORIZONTAL_SPRITE }))));
        this->jLabel7 = JLabel_new();
        this->increaseWidthTextField = JTextField_new();
        this->jLabel8 = JLabel_new();
        this->increaseHeightTextField = JTextField_new();
        JCheckBox_setText(this->writeOverOriginalJCheckBox, "Write Over Original");
        JCheckBox_addActionListener(this->writeOverOriginalJCheckBox, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void SpriteSplitterImageJPanel_actionPerformed(SpriteSplitterImageJPanel* this, ActionEvent* evt) {
                SpriteSplitterImageJPanel_writeOverOriginalJCheckBoxActionPerformed(this, evt);
        }
#endif
);
        JTextField_setText(this->widthReductionTextField, CommonPhoneStrings_getInstance()->ZERO);
        JTextField_addActionListener(this->widthReductionTextField, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void SpriteSplitterImageJPanel_actionPerformed(SpriteSplitterImageJPanel* this, ActionEvent* evt) {
                SpriteSplitterImageJPanel_widthReductionTextFieldActionPerformed(this, evt);
        }
#endif
);
        JLabel_setText(this->jLabel5, "Less Width:");
        JLabel_setText(this->jLabel4, "Results:");
        GroupLayout* jPanel1Layout = GroupLayout_new(this->jPanel1);
        JPanel_setLayout(this->jPanel1, jPanel1Layout);
        GroupLayout_setHorizontalGroup(jPanel1Layout, JAVA_CALL(GroupLayout_createParallelGroup(jPanel1Layout, javax_swing->GroupLayout->Alignment->LEADING), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(jPanel1Layout), addComponent, this->jLabel4), addGap, 0, 0, Short_MAX_VALUE)));
        GroupLayout_setVerticalGroup(jPanel1Layout, JAVA_CALL(GroupLayout_createParallelGroup(jPanel1Layout, javax_swing->GroupLayout->Alignment->LEADING), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(jPanel1Layout), addComponent, this->jLabel4), addGap, 0, 184, Short_MAX_VALUE)));
        JLabel_setText(this->jLabel6, "Less Height:");
        JTextField_setText(this->heightReductionTextField, CommonPhoneStrings_getInstance()->ZERO);
        JButton_setText(this->generateJButton, "Generate");
        JButton_addActionListener(this->generateJButton, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void SpriteSplitterImageJPanel_actionPerformed(SpriteSplitterImageJPanel* this, ActionEvent* evt) {
                SpriteSplitterImageJPanel_generateJButtonActionPerformed(this, evt);
        }
#endif
);
        JLabel_setText(this->jLabel1, "Row Total:");
        JComboBox_setSelectedIndex(this->totalFramesJComboBox, 1);
        JComboBox_addActionListener(this->totalFramesJComboBox, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void SpriteSplitterImageJPanel_actionPerformed(SpriteSplitterImageJPanel* this, ActionEvent* evt) {
                SpriteSplitterImageJPanel_totalFramesJComboBoxActionPerformed(this, evt);
        }
#endif
);
        JLabel_setText(this->jLabel2, "Column Total :");
        JComboBox_setSelectedIndex(this->totalAnimationsJComboBox, 3);
        JComboBox_addActionListener(this->totalAnimationsJComboBox, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void SpriteSplitterImageJPanel_actionPerformed(SpriteSplitterImageJPanel* this, ActionEvent* evt) {
                SpriteSplitterImageJPanel_totalAnimationsJComboBoxActionPerformed(this, evt);
        }
#endif
);
        JLabel_setText(this->jLabel3, "Type:");
        JComboBox_addActionListener(this->spriteTypeJComboBox, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void SpriteSplitterImageJPanel_actionPerformed(SpriteSplitterImageJPanel* this, ActionEvent* evt) {
                SpriteSplitterImageJPanel_spriteTypeJComboBoxActionPerformed(this, evt);
        }
#endif
);
        GroupLayout* jPanel2Layout = GroupLayout_new(this->jPanel2);
        JPanel_setLayout(this->jPanel2, jPanel2Layout);
        GroupLayout_setHorizontalGroup(jPanel2Layout, JAVA_CALL(GroupLayout_createParallelGroup(jPanel2Layout, javax_swing->GroupLayout->Alignment->LEADING), addGroup, javax_swing->GroupLayout->Alignment->TRAILING, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(jPanel2Layout), addContainerGap), addComponent, this->jLabel1), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addComponent, this->totalFramesJComboBox, javax_swing->GroupLayout->PREFERRED_SIZE, 48, javax_swing->GroupLayout->PREFERRED_SIZE), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addComponent, this->jLabel2), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addComponent, this->totalAnimationsJComboBox, javax_swing->GroupLayout->PREFERRED_SIZE, 39, javax_swing->GroupLayout->PREFERRED_SIZE), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addComponent, this->jLabel3), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addComponent, this->spriteTypeJComboBox, javax_swing->GroupLayout->PREFERRED_SIZE, 172, javax_swing->GroupLayout->PREFERRED_SIZE), addContainerGap, javax_swing->GroupLayout->DEFAULT_SIZE, Short_MAX_VALUE)));
        GroupLayout_setVerticalGroup(jPanel2Layout, JAVA_CALL(GroupLayout_createParallelGroup(jPanel2Layout, javax_swing->GroupLayout->Alignment->LEADING), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(jPanel2Layout), addContainerGap, javax_swing->GroupLayout->DEFAULT_SIZE, Short_MAX_VALUE), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(jPanel2Layout, javax_swing->GroupLayout->Alignment->BASELINE), addComponent, this->jLabel1), addComponent, this->totalFramesJComboBox, javax_swing->GroupLayout->PREFERRED_SIZE, javax_swing->GroupLayout->DEFAULT_SIZE, javax_swing->GroupLayout->PREFERRED_SIZE), addComponent, this->jLabel2), addComponent, this->totalAnimationsJComboBox, javax_swing->GroupLayout->PREFERRED_SIZE, javax_swing->GroupLayout->DEFAULT_SIZE, javax_swing->GroupLayout->PREFERRED_SIZE), addComponent, this->jLabel3), addComponent, this->spriteTypeJComboBox, javax_swing->GroupLayout->PREFERRED_SIZE, javax_swing->GroupLayout->DEFAULT_SIZE, javax_swing->GroupLayout->PREFERRED_SIZE))));
        JLabel_setText(this->jLabel7, "More Width:");
        JTextField_setText(this->increaseWidthTextField, CommonPhoneStrings_getInstance()->ZERO);
        JTextField_addActionListener(this->increaseWidthTextField, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void SpriteSplitterImageJPanel_actionPerformed(SpriteSplitterImageJPanel* this, ActionEvent* evt) {
                SpriteSplitterImageJPanel_increaseWidthTextFieldActionPerformed(this, evt);
        }
#endif
);
        JLabel_setText(this->jLabel8, "More Height:");
        JTextField_setText(this->increaseHeightTextField, CommonPhoneStrings_getInstance()->ZERO);
        GroupLayout* layout = GroupLayout_new(this);
        SpriteSplitterImageJPanel_setLayout(this, layout);
        GroupLayout_setHorizontalGroup(layout, JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->LEADING), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(layout), addComponent, this->jPanel2, javax_swing->GroupLayout->PREFERRED_SIZE, 415, Short_MAX_VALUE), addGap, 78, 78, 78)), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(layout), addContainerGap), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->LEADING), addComponent, this->jPanel1, javax_swing->GroupLayout->DEFAULT_SIZE, javax_swing->GroupLayout->DEFAULT_SIZE, Short_MAX_VALUE), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(layout), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->LEADING), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(layout), addComponent, this->writeOverOriginalJCheckBox), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addComponent, this->generateJButton)), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(layout), addComponent, this->jLabel5), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addComponent, this->widthReductionTextField, javax_swing->GroupLayout->PREFERRED_SIZE, 41, javax_swing->GroupLayout->PREFERRED_SIZE), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addComponent, this->jLabel6), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addComponent, this->heightReductionTextField, javax_swing->GroupLayout->PREFERRED_SIZE, 46, javax_swing->GroupLayout->PREFERRED_SIZE), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addComponent, this->jLabel7), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addComponent, this->increaseWidthTextField, javax_swing->GroupLayout->PREFERRED_SIZE, 41, javax_swing->GroupLayout->PREFERRED_SIZE), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addComponent, this->jLabel8), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addComponent, this->increaseHeightTextField, javax_swing->GroupLayout->PREFERRED_SIZE, 46, javax_swing->GroupLayout->PREFERRED_SIZE))), addGap, 0, 0, Short_MAX_VALUE))), addContainerGap)));
        GroupLayout_setVerticalGroup(layout, JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->LEADING), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(layout), addComponent, this->jPanel2, javax_swing->GroupLayout->PREFERRED_SIZE, javax_swing->GroupLayout->DEFAULT_SIZE, javax_swing->GroupLayout->PREFERRED_SIZE), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->LEADING), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->BASELINE), addComponent, this->jLabel7), addComponent, this->increaseWidthTextField, javax_swing->GroupLayout->PREFERRED_SIZE, 22, javax_swing->GroupLayout->PREFERRED_SIZE), addComponent, this->jLabel8), addComponent, this->increaseHeightTextField, javax_swing->GroupLayout->PREFERRED_SIZE, javax_swing->GroupLayout->DEFAULT_SIZE, javax_swing->GroupLayout->PREFERRED_SIZE)), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->BASELINE), addComponent, this->jLabel5), addComponent, this->widthReductionTextField, javax_swing->GroupLayout->PREFERRED_SIZE, 22, javax_swing->GroupLayout->PREFERRED_SIZE), addComponent, this->jLabel6), addComponent, this->heightReductionTextField, javax_swing->GroupLayout->PREFERRED_SIZE, javax_swing->GroupLayout->DEFAULT_SIZE, javax_swing->GroupLayout->PREFERRED_SIZE))), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->BASELINE), addComponent, this->writeOverOriginalJCheckBox), addComponent, this->generateJButton)), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addComponent, this->jPanel1, javax_swing->GroupLayout->DEFAULT_SIZE, javax_swing->GroupLayout->DEFAULT_SIZE, Short_MAX_VALUE)));
}


static void SpriteSplitterImageJPanel_writeOverOriginalJCheckBoxActionPerformed(SpriteSplitterImageJPanel* this, ActionEvent* evt) {
}


static void SpriteSplitterImageJPanel_generateJButtonActionPerformed(SpriteSplitterImageJPanel* this, ActionEvent* evt) {
        SpriteSplitterImageJPanel_process(this);
}


static void SpriteSplitterImageJPanel_spriteTypeJComboBoxActionPerformed(SpriteSplitterImageJPanel* this, ActionEvent* evt) {
        SpriteSplitterUtil* spriteSplitterUtil = SpriteSplitterUtil_getInstance();
        JLabel_setText(this->jLabel1, spriteSplitterUtil->ANIMATIONS_LABELS[JComboBox_getSelectedIndex(this->spriteTypeJComboBox)]);
        JLabel_setText(this->jLabel2, spriteSplitterUtil->ANIMATIONS_LABELS[JComboBox_getSelectedIndex(this->spriteTypeJComboBox) + 1]);
}


static void SpriteSplitterImageJPanel_totalAnimationsJComboBoxActionPerformed(SpriteSplitterImageJPanel* this, ActionEvent* evt) {
}


static void SpriteSplitterImageJPanel_totalFramesJComboBoxActionPerformed(SpriteSplitterImageJPanel* this, ActionEvent* evt) {
}


static void SpriteSplitterImageJPanel_widthReductionTextFieldActionPerformed(SpriteSplitterImageJPanel* this, ActionEvent* evt) {
}


static void SpriteSplitterImageJPanel_increaseWidthTextFieldActionPerformed(SpriteSplitterImageJPanel* this, ActionEvent* evt) {
}


ImageProcessorInput* SpriteSplitterImageJPanel_getImageProcessorInput(SpriteSplitterImageJPanel* this) {
        return this->imageProcessorInput;
}


void SpriteSplitterImageJPanel_setImageProcessorInput(SpriteSplitterImageJPanel* this, ImageProcessorInput* imageProcessorInput) {
        this->imageProcessorInput = imageProcessorInput;
}


// throws IOException
void SpriteSplitterImageJPanel_visit(SpriteSplitterImageJPanel* this, BufferedImage* generatedBufferedImage, const char* name, int32_t index) {
        LogUtil_putF(this->logUtil, this->commonStrings->VISIT, this, this->commonStrings->VISIT);
        this->result = generatedBufferedImage;
        JAVA_CALL(SpriteSplitterImageJPanel_getParent(this), repaint);
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

