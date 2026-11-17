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
// #include "javax/imageio/ImageIO.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/media/image/ImageProcessorInput.h"
#include "org/allbinary/media/image/ImageProcessorInputCompositeInterface.h"
#include "org/allbinary/media/image/ImageStrings.h"
#include "org/allbinary/media/image/MirrorImageUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/image/gui/JPanel.h"

typedef struct MirrorImageJPanel MirrorImageJPanel;
struct MirrorImageJPanel {
    JPanel base;
    ImageProcessorInputCompositeInterface ImageProcessorInputCompositeInterface_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    ImageStrings* imageStrings;
    ImageProcessorInput* imageProcessorInput;
    BufferedImage* result;
    ButtonGroup* buttonGroup;
    JButton* generateJButton;
    JCheckBox* horizontalJCheckBox;
    JLabel* jLabel2;
    JLayeredPane* jLayeredPane1;
    JPanel* jPanel1;
    JPanel* jPanel2;
    JPanel* jPanel3;
    JRadioButton* renameJRadioButton;
    JCheckBox* verticleJCheckBox;
    JRadioButton* writeOverOriginalJRadioButton;
};


MirrorImageJPanel* MirrorImageJPanel_new(ImageProcessorInput* imageProcessorInput);

void MirrorImageJPanel_init(MirrorImageJPanel* this, ImageProcessorInput* imageProcessorInput);
void MirrorImageJPanel_process(MirrorImageJPanel* this);
static void MirrorImageJPanel_initComponents(MirrorImageJPanel* this);
static void MirrorImageJPanel_generateJButtonActionPerformed(MirrorImageJPanel* this, ActionEvent* evt);
static void MirrorImageJPanel_renameJRadioButtonActionPerformed(MirrorImageJPanel* this, ActionEvent* evt);
ImageProcessorInput* MirrorImageJPanel_getImageProcessorInput(MirrorImageJPanel* this);
void MirrorImageJPanel_setImageProcessorInput(MirrorImageJPanel* this, ImageProcessorInput* imageProcessorInput);

static void MirrorImageJPanel_initFields(MirrorImageJPanel* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->imageStrings = ImageStrings_getInstance();
    
    this->result = nullptr;
    this->buttonGroup = nullptr;
    this->generateJButton = nullptr;
    this->horizontalJCheckBox = nullptr;
    this->jLabel2 = nullptr;
    this->jLayeredPane1 = nullptr;
    this->jPanel1 = nullptr;
    this->jPanel2 = nullptr;
    this->jPanel3 = nullptr;
    this->renameJRadioButton = nullptr;
    this->verticleJCheckBox = nullptr;
    this->writeOverOriginalJRadioButton = nullptr;
}


void MirrorImageJPanel_init(MirrorImageJPanel* this, ImageProcessorInput* imageProcessorInput) {
        JPanel_init(&this->base);
        MirrorImageJPanel_initFields(this);
        LogUtil_putF(this->logUtil, "Starting", this, this->commonStrings->CONSTRUCTOR);
        MirrorImageJPanel_initComponents(this);
        this->imageProcessorInput = imageProcessorInput;
}

MirrorImageJPanel* MirrorImageJPanel_new(ImageProcessorInput* imageProcessorInput) {
    MirrorImageJPanel* this = calloc(1, sizeof(MirrorImageJPanel));
    MirrorImageJPanel_init(this, imageProcessorInput);
    return this;
}


void MirrorImageJPanel_process(MirrorImageJPanel* this) {
        Thread_start(Thread_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void MirrorImageJPanel_run(MirrorImageJPanel* this) {
                LogUtil* logUtil = LogUtil_getInstance();
                JAVA_TRY {
                    ImageProcessorInput* imageProcessorInput = MirrorImageJPanel_getImageProcessorInput(this);
                    BufferedImage** bufferedImageArray = ImageProcessorInput_getBufferedImageArray(imageProcessorInput);
                    for (int32_t index = 0; index < java_array_length(bufferedImageArray); index++) {
                        this->result = MirrorImageUtil_getImage(MirrorImageUtil_getInstance(), bufferedImageArray[index], JCheckBox_isSelected(this->verticleJCheckBox), JCheckBox_isSelected(this->horizontalJCheckBox));
                        File* file = ImageProcessorInput_getFiles(imageProcessorInput)[index];
                        if (JRadioButton_isSelected(this->writeOverOriginalJRadioButton)) {
                        } else if (JRadioButton_isSelected(this->renameJRadioButton)) {
                            const char* filePath = File_getAbsolutePath(file);
                            int32_t extensionIndex = java_string_indexOf(filePath, this->imageStrings->PNG_EXTENSION);
                            filePath = java_concat(java_concat(java_substring(filePath, 0, extensionIndex), "_mirror"), java_string_of(this->imageStrings->PNG_EXTENSION));
                            LogUtil_putF(logUtil, java_concat("Renamed File: ", filePath), this, this->commonStrings->RUN);
                            file = File_new(filePath);
                        }
                        bool isWritten = ImageIO_write(((RenderedImage*) this->result), this->imageStrings->PNG, file);
                        LogUtil_putF(logUtil, java_concat(java_concat(java_concat("File: ", java_string_of(file)), " Wrote: "), java_string_of(isWritten)), this, this->commonStrings->RUN);
                        JAVA_CALL(MirrorImageJPanel_getParent(this), repaint);
                    }
                } JAVA_CATCH(Exception, e) {
                    LogUtil_put(logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->RUN, e);
                } JAVA_END_TRY;
        }
#endif
);
}


static void MirrorImageJPanel_initComponents(MirrorImageJPanel* this) {
        this->jLayeredPane1 = JLayeredPane_new();
        this->buttonGroup = ButtonGroup_new();
        this->jPanel1 = JPanel_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void MirrorImageJPanel_paint(MirrorImageJPanel* this, Graphics* graphics) {
                if (this->result != nullptr) {
                    Graphics_drawImage(graphics, this->result, 0, 0, BufferedImage_getWidth(this->result, nullptr), BufferedImage_getHeight(this->result, nullptr), nullptr);
                }
        }
#endif
;
        this->jPanel2 = JPanel_new();
        this->horizontalJCheckBox = JCheckBox_new();
        this->verticleJCheckBox = JCheckBox_new();
        this->generateJButton = JButton_new();
        this->renameJRadioButton = JRadioButton_new();
        this->writeOverOriginalJRadioButton = JRadioButton_new();
        this->jPanel3 = JPanel_new();
        this->jLabel2 = JLabel_new();
        GroupLayout* jPanel1Layout = GroupLayout_new(this->jPanel1);
        JPanel_setLayout(this->jPanel1, jPanel1Layout);
        GroupLayout_setHorizontalGroup(jPanel1Layout, JAVA_CALL(GroupLayout_createParallelGroup(jPanel1Layout, org_jdesktop->layout->GroupLayout->LEADING), add, 0, 522, Short_MAX_VALUE));
        GroupLayout_setVerticalGroup(jPanel1Layout, JAVA_CALL(GroupLayout_createParallelGroup(jPanel1Layout, org_jdesktop->layout->GroupLayout->LEADING), add, 0, 230, Short_MAX_VALUE));
        JCheckBox_setSelected(this->horizontalJCheckBox, true);
        JCheckBox_setText(this->horizontalJCheckBox, "Horizontal");
        JCheckBox_setEnabled(this->horizontalJCheckBox, false);
        JCheckBox_setText(this->verticleJCheckBox, "Verticle");
        JCheckBox_setEnabled(this->verticleJCheckBox, false);
        JButton_setText(this->generateJButton, "Generate");
        JButton_addActionListener(this->generateJButton, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void MirrorImageJPanel_actionPerformed(MirrorImageJPanel* this, ActionEvent* evt) {
                MirrorImageJPanel_generateJButtonActionPerformed(this, evt);
        }
#endif
);
        JRadioButton_setText(this->renameJRadioButton, "Save As filename_mirror");
        JRadioButton_addActionListener(this->renameJRadioButton, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void MirrorImageJPanel_actionPerformed(MirrorImageJPanel* this, ActionEvent* evt) {
                MirrorImageJPanel_renameJRadioButtonActionPerformed(this, evt);
        }
#endif
);
        JRadioButton_setText(this->writeOverOriginalJRadioButton, "Write Over Original");
        GroupLayout* jPanel2Layout = GroupLayout_new(this->jPanel2);
        JPanel_setLayout(this->jPanel2, jPanel2Layout);
        GroupLayout_setHorizontalGroup(jPanel2Layout, JAVA_CALL(GroupLayout_createParallelGroup(jPanel2Layout, org_jdesktop->layout->GroupLayout->LEADING), add, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(jPanel2Layout), addContainerGap, org_jdesktop->layout->GroupLayout->DEFAULT_SIZE, Short_MAX_VALUE), add, this->verticleJCheckBox), addPreferredGap, org_jdesktop->layout->LayoutStyle->UNRELATED), add, this->horizontalJCheckBox), addPreferredGap, org_jdesktop->layout->LayoutStyle->RELATED), add, this->writeOverOriginalJRadioButton), addPreferredGap, org_jdesktop->layout->LayoutStyle->UNRELATED), add, this->renameJRadioButton), addPreferredGap, org_jdesktop->layout->LayoutStyle->RELATED), add, this->generateJButton), add, 37, 37, 37)));
        GroupLayout_setVerticalGroup(jPanel2Layout, JAVA_CALL(GroupLayout_createParallelGroup(jPanel2Layout, org_jdesktop->layout->GroupLayout->LEADING), add, JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(jPanel2Layout), add, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(jPanel2Layout, org_jdesktop->layout->GroupLayout->BASELINE), add, this->horizontalJCheckBox), add, this->verticleJCheckBox), add, this->writeOverOriginalJRadioButton), add, this->renameJRadioButton), add, this->generateJButton)), addContainerGap)));
        JLabel_setText(this->jLabel2, "Results:");
        GroupLayout* jPanel3Layout = GroupLayout_new(this->jPanel3);
        JPanel_setLayout(this->jPanel3, jPanel3Layout);
        GroupLayout_setHorizontalGroup(jPanel3Layout, JAVA_CALL(GroupLayout_createParallelGroup(jPanel3Layout, org_jdesktop->layout->GroupLayout->LEADING), add, JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(jPanel3Layout), add, this->jLabel2), addContainerGap, 433, Short_MAX_VALUE)));
        GroupLayout_setVerticalGroup(jPanel3Layout, JAVA_CALL(GroupLayout_createParallelGroup(jPanel3Layout, org_jdesktop->layout->GroupLayout->LEADING), add, this->jLabel2));
        GroupLayout* layout = GroupLayout_new(this);
        MirrorImageJPanel_setLayout(this, layout);
        GroupLayout_setHorizontalGroup(layout, JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(layout, org_jdesktop->layout->GroupLayout->LEADING), add, org_jdesktop->layout->GroupLayout->TRAILING, JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(layout), addContainerGap), add, this->jPanel3, org_jdesktop->layout->GroupLayout->DEFAULT_SIZE, org_jdesktop->layout->GroupLayout->DEFAULT_SIZE, Short_MAX_VALUE), addContainerGap)), add, this->jPanel1, org_jdesktop->layout->GroupLayout->DEFAULT_SIZE, org_jdesktop->layout->GroupLayout->DEFAULT_SIZE, Short_MAX_VALUE), add, JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(layout), add, this->jPanel2, org_jdesktop->layout->GroupLayout->DEFAULT_SIZE, org_jdesktop->layout->GroupLayout->DEFAULT_SIZE, Short_MAX_VALUE), addContainerGap, org_jdesktop->layout->GroupLayout->DEFAULT_SIZE, Short_MAX_VALUE)));
        GroupLayout_setVerticalGroup(layout, JAVA_CALL(GroupLayout_createParallelGroup(layout, org_jdesktop->layout->GroupLayout->LEADING), add, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(layout), add, this->jPanel2, org_jdesktop->layout->GroupLayout->PREFERRED_SIZE, 25, org_jdesktop->layout->GroupLayout->PREFERRED_SIZE), addPreferredGap, org_jdesktop->layout->LayoutStyle->RELATED), add, this->jPanel3, org_jdesktop->layout->GroupLayout->PREFERRED_SIZE, org_jdesktop->layout->GroupLayout->DEFAULT_SIZE, org_jdesktop->layout->GroupLayout->PREFERRED_SIZE), addPreferredGap, org_jdesktop->layout->LayoutStyle->RELATED), add, this->jPanel1, org_jdesktop->layout->GroupLayout->DEFAULT_SIZE, org_jdesktop->layout->GroupLayout->DEFAULT_SIZE, Short_MAX_VALUE)));
}


static void MirrorImageJPanel_generateJButtonActionPerformed(MirrorImageJPanel* this, ActionEvent* evt) {
        MirrorImageJPanel_process(this);
}


static void MirrorImageJPanel_renameJRadioButtonActionPerformed(MirrorImageJPanel* this, ActionEvent* evt) {
}


ImageProcessorInput* MirrorImageJPanel_getImageProcessorInput(MirrorImageJPanel* this) {
        return this->imageProcessorInput;
}


void MirrorImageJPanel_setImageProcessorInput(MirrorImageJPanel* this, ImageProcessorInput* imageProcessorInput) {
        this->imageProcessorInput = imageProcessorInput;
}

