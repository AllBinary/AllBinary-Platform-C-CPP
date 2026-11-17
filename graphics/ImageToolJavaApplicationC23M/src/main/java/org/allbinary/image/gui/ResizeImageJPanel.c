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
// #include "java/awt/image/Raster.h"
// #include "java/io/File.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/io/file/FileWrapperUtil.h"
#include "org/allbinary/media/image/ImagePersistanceUtil.h"
#include "org/allbinary/media/image/ImageProcessorInput.h"
#include "org/allbinary/media/image/ImageProcessorInputCompositeInterface.h"
#include "org/allbinary/media/image/ImageUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/image/gui/JPanel.h"

typedef struct ResizeImageJPanel ResizeImageJPanel;
struct ResizeImageJPanel {
    JPanel base;
    ImageProcessorInputCompositeInterface ImageProcessorInputCompositeInterface_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    ImageProcessorInput* imageProcessorInput;
    JButton* aboveJButton;
    JButton* adjustFor16AboveJButton;
    JButton* adjustFor16BelowJButton;
    JTextField* floatPercentJTextField;
    JComboBox* jComboBox1;
    JLabel* jLabel1;
    JLabel* jLabel2;
    JLabel* jLabel3;
    JTextField* jTextField1;
    JTextField* jTextField2;
    JButton* updateJButton;
};


ResizeImageJPanel* ResizeImageJPanel_new(ImageProcessorInput* imageProcessorInput);

void ResizeImageJPanel_init(ResizeImageJPanel* this, ImageProcessorInput* imageProcessorInput);
void ResizeImageJPanel_process(ResizeImageJPanel* this);
void ResizeImageJPanel_update(ResizeImageJPanel* this);
void ResizeImageJPanel_updateFor16Above(ResizeImageJPanel* this);
void ResizeImageJPanel_updateFor16Below(ResizeImageJPanel* this);
ImageProcessorInput* ResizeImageJPanel_getImageProcessorInput(ResizeImageJPanel* this);
void ResizeImageJPanel_setImageProcessorInput(ResizeImageJPanel* this, ImageProcessorInput* imageProcessorInput);
static void ResizeImageJPanel_initComponents(ResizeImageJPanel* this);
static void ResizeImageJPanel_aboveJButtonActionPerformed(ResizeImageJPanel* this, ActionEvent* evt);
static void ResizeImageJPanel_updateJButtonActionPerformed(ResizeImageJPanel* this, ActionEvent* evt);
static void ResizeImageJPanel_adjustFor16AboveJButtonActionPerformed(ResizeImageJPanel* this, ActionEvent* evt);
static void ResizeImageJPanel_adjustFor16BelowJButtonActionPerformed(ResizeImageJPanel* this, ActionEvent* evt);

static void ResizeImageJPanel_initFields(ResizeImageJPanel* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    
    this->aboveJButton = nullptr;
    this->adjustFor16AboveJButton = nullptr;
    this->adjustFor16BelowJButton = nullptr;
    this->floatPercentJTextField = nullptr;
    this->jComboBox1 = nullptr;
    this->jLabel1 = nullptr;
    this->jLabel2 = nullptr;
    this->jLabel3 = nullptr;
    this->jTextField1 = nullptr;
    this->jTextField2 = nullptr;
    this->updateJButton = nullptr;
}


void ResizeImageJPanel_init(ResizeImageJPanel* this, ImageProcessorInput* imageProcessorInput) {
        JPanel_init(&this->base);
        ResizeImageJPanel_initFields(this);
        ResizeImageJPanel_initComponents(this);
        this->imageProcessorInput = imageProcessorInput;
        const char** numberStringArray = ((const char**) java_array_new(sizeof(const char*), 101));
        numberStringArray[0] = java_string_of(-1);
        for (int32_t index = 1; index < 100; index++) {
            numberStringArray[index] = java_string_of(index);
        }
        JComboBox_setModel(this->jComboBox1, DefaultComboBoxModel_new(numberStringArray));
        Raster* araster = JAVA_CALL(ImageProcessorInput_getBufferedImageArray(this->imageProcessorInput)[0], getAlphaRaster);
        if (araster == nullptr) {
            puts(java_string_of("there is no Alpha channel!!!!!!!!!"));
        } else {
            puts(java_string_of("Alpha channel found !"));
        }
}

ResizeImageJPanel* ResizeImageJPanel_new(ImageProcessorInput* imageProcessorInput) {
    ResizeImageJPanel* this = calloc(1, sizeof(ResizeImageJPanel));
    ResizeImageJPanel_init(this, imageProcessorInput);
    return this;
}


void ResizeImageJPanel_process(ResizeImageJPanel* this) {
        Thread_start(Thread_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void ResizeImageJPanel_run(ResizeImageJPanel* this) {
                LogUtil* logUtil = LogUtil_getInstance();
                JAVA_TRY {
                    ImageUtil* imageUtil = ImageUtil_getInstance();
                    int32_t percent = java_string_of(((const char*) JComboBox_getSelectedItem(this->jComboBox1)));
                    float percentAsFloat = strtof(JTextField_getText(this->floatPercentJTextField), nullptr);
                    ImageProcessorInput* imageProcessorInput = ResizeImageJPanel_getImageProcessorInput(this);
                    File** files = ImageProcessorInput_getFiles(imageProcessorInput);
                    BufferedImage** generatedBufferedImageArray = nullptr;
                    if (Float_intValue(percentAsFloat) != -1) {
                        generatedBufferedImageArray = ImageUtil_createBufferedImage2(imageUtil, ImageProcessorInput_getBufferedImageArray(imageProcessorInput), percentAsFloat, true);
                    } else if (Integer_intValue(percent) != -1) {
                        generatedBufferedImageArray = ImageUtil_createBufferedImageForResize(imageUtil, ImageProcessorInput_getBufferedImageArray(imageProcessorInput), percent, true);
                    } else {
                        int32_t width = java_string_of(((const char*) JTextField_getText(this->jTextField1)));
                        int32_t height = java_string_of(((const char*) JTextField_getText(this->jTextField2)));
                        generatedBufferedImageArray = ImageUtil_createBufferedImage3(imageUtil, ImageProcessorInput_getBufferedImageArray(imageProcessorInput), width, height, true);
                    }
                    Raster* araster = JAVA_CALL(generatedBufferedImageArray[0], getAlphaRaster);
                    if (araster == nullptr) {
                        puts(java_string_of("No Alpha Channel In Result"));
                    } else {
                        puts(java_string_of("Found Alpha Channel In Result"));
                    }
                    ImagePersistanceUtil* imagePersistanceUtil = ImagePersistanceUtil_getInstance();
                    for (int32_t index = 0; index < java_array_length(generatedBufferedImageArray); index++) {
                        ImagePersistanceUtil_saveWithBatik(imagePersistanceUtil, FileWrapperUtil_wrapFile(files[index]), generatedBufferedImageArray[index]);
                    }
                    JAVA_CALL(ResizeImageJPanel_getParent(this), repaint);
                } JAVA_CATCH(Exception, e) {
                    LogUtil_put(logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->RUN, e);
                } JAVA_END_TRY;
        }
#endif
);
}


void ResizeImageJPanel_update(ResizeImageJPanel* this) {
        Thread_start(Thread_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void ResizeImageJPanel_run(ResizeImageJPanel* this) {
                LogUtil* logUtil = LogUtil_getInstance();
                JAVA_TRY {
                    ImageProcessorInput* imageProcessorInput = ResizeImageJPanel_getImageProcessorInput(this);
                    int32_t size = java_array_length(ImageProcessorInput_getBufferedImageArray(imageProcessorInput));
                    BufferedImage** bufferedImageArray = ImageProcessorInput_getBufferedImageArray(imageProcessorInput);
                    BufferedImage* bufferedImage = nullptr;
                    for (int32_t index = 0; index < size; index++) {
                        bufferedImage = bufferedImageArray[0];
                        JTextField_setText(this->jTextField1, java_string_of(BufferedImage_getWidth(bufferedImage)));
                        JTextField_setText(this->jTextField2, java_string_of(BufferedImage_getHeight(bufferedImage)));
                    }
                    JAVA_CALL(ResizeImageJPanel_getParent(this), repaint);
                } JAVA_CATCH(Exception, e) {
                    LogUtil_put(logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->RUN, e);
                } JAVA_END_TRY;
        }
#endif
);
}


void ResizeImageJPanel_updateFor16Above(ResizeImageJPanel* this) {
        Thread_start(Thread_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void ResizeImageJPanel_run(ResizeImageJPanel* this) {
                LogUtil* logUtil = LogUtil_getInstance();
                JAVA_TRY {
                    ImageProcessorInput* imageProcessorInput = ResizeImageJPanel_getImageProcessorInput(this);
                    int32_t size = java_array_length(ImageProcessorInput_getBufferedImageArray(imageProcessorInput));
                    BufferedImage** bufferedImageArray = ImageProcessorInput_getBufferedImageArray(imageProcessorInput);
                    BufferedImage* bufferedImage = nullptr;
                    for (int32_t index = 0; index < size; index++) {
                        bufferedImage = bufferedImageArray[0];
                        JTextField_setText(this->jTextField1, java_string_of(BufferedImage_getWidth(bufferedImage) / 16 * 16));
                        JTextField_setText(this->jTextField2, java_string_of(BufferedImage_getHeight(bufferedImage) / 16 * 16));
                    }
                    JAVA_CALL(ResizeImageJPanel_getParent(this), repaint);
                } JAVA_CATCH(Exception, e) {
                    LogUtil_put(logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->RUN, e);
                } JAVA_END_TRY;
        }
#endif
);
}


void ResizeImageJPanel_updateFor16Below(ResizeImageJPanel* this) {
        Thread_start(Thread_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void ResizeImageJPanel_run(ResizeImageJPanel* this) {
                LogUtil* logUtil = LogUtil_getInstance();
                JAVA_TRY {
                    ImageProcessorInput* imageProcessorInput = ResizeImageJPanel_getImageProcessorInput(this);
                    int32_t size = java_array_length(ImageProcessorInput_getBufferedImageArray(imageProcessorInput));
                    BufferedImage** bufferedImageArray = ImageProcessorInput_getBufferedImageArray(imageProcessorInput);
                    BufferedImage* bufferedImage = nullptr;
                    for (int32_t index = 0; index < size; index++) {
                        bufferedImage = bufferedImageArray[0];
                        JTextField_setText(this->jTextField1, java_string_of(((BufferedImage_getWidth(bufferedImage) / 16) + 1) * 16));
                        JTextField_setText(this->jTextField2, java_string_of(((BufferedImage_getHeight(bufferedImage) / 16) + 1) * 16));
                    }
                    JAVA_CALL(ResizeImageJPanel_getParent(this), repaint);
                } JAVA_CATCH(Exception, e) {
                    LogUtil_put(logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->RUN, e);
                } JAVA_END_TRY;
        }
#endif
);
}


ImageProcessorInput* ResizeImageJPanel_getImageProcessorInput(ResizeImageJPanel* this) {
        return this->imageProcessorInput;
}


void ResizeImageJPanel_setImageProcessorInput(ResizeImageJPanel* this, ImageProcessorInput* imageProcessorInput) {
        this->imageProcessorInput = imageProcessorInput;
}


static void ResizeImageJPanel_initComponents(ResizeImageJPanel* this) {
        this->jLabel1 = JLabel_new();
        this->jComboBox1 = JComboBox_new();
        this->aboveJButton = JButton_new();
        this->jTextField1 = JTextField_new();
        this->jLabel2 = JLabel_new();
        this->jLabel3 = JLabel_new();
        this->jTextField2 = JTextField_new();
        this->updateJButton = JButton_new();
        this->floatPercentJTextField = JTextField_new();
        this->adjustFor16AboveJButton = JButton_new();
        this->adjustFor16BelowJButton = JButton_new();
        JLabel_setText(this->jLabel1, "Percent:");
        JComboBox_setModel(this->jComboBox1, DefaultComboBoxModel_new(((const char**) java_array_from(sizeof(const char*), sizeof((const char*[]){ "Item 1", "Item 2", "Item 3", "Item 4" }) / sizeof(const char*), (const char*[]){ "Item 1", "Item 2", "Item 3", "Item 4" }))));
        JButton_setText(this->aboveJButton, "Process");
        JButton_addActionListener(this->aboveJButton, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void ResizeImageJPanel_actionPerformed(ResizeImageJPanel* this, ActionEvent* evt) {
                ResizeImageJPanel_aboveJButtonActionPerformed(this, evt);
        }
#endif
);
        JLabel_setText(this->jLabel2, "Width:");
        JLabel_setText(this->jLabel3, "Height:");
        JButton_setText(this->updateJButton, "Update");
        JButton_addActionListener(this->updateJButton, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void ResizeImageJPanel_actionPerformed(ResizeImageJPanel* this, ActionEvent* evt) {
                ResizeImageJPanel_updateJButtonActionPerformed(this, evt);
        }
#endif
);
        JTextField_setText(this->floatPercentJTextField, "-1.000000");
        JTextField_setMinimumSize(this->floatPercentJTextField, Dimension_new(120, 22));
        JButton_setText(this->adjustFor16AboveJButton, "Adjust for 16 Above");
        JButton_addActionListener(this->adjustFor16AboveJButton, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void ResizeImageJPanel_actionPerformed(ResizeImageJPanel* this, ActionEvent* evt) {
                ResizeImageJPanel_adjustFor16AboveJButtonActionPerformed(this, evt);
        }
#endif
);
        JButton_setText(this->adjustFor16BelowJButton, "Adjust for 16 Below");
        JButton_addActionListener(this->adjustFor16BelowJButton, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void ResizeImageJPanel_actionPerformed(ResizeImageJPanel* this, ActionEvent* evt) {
                ResizeImageJPanel_adjustFor16BelowJButtonActionPerformed(this, evt);
        }
#endif
);
        GroupLayout* layout = GroupLayout_new(this);
        ResizeImageJPanel_setLayout(this, layout);
        GroupLayout_setHorizontalGroup(layout, JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->LEADING), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(layout), addContainerGap), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->LEADING), addComponent, this->jLabel1), addComponent, this->jLabel2), addComponent, this->jLabel3)), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->LEADING, false), addComponent, this->jComboBox1, 0, javax_swing->GroupLayout->DEFAULT_SIZE, Short_MAX_VALUE), addComponent, this->jTextField1), addComponent, this->jTextField2)), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->UNRELATED), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->LEADING), addComponent, this->floatPercentJTextField, javax_swing->GroupLayout->PREFERRED_SIZE, javax_swing->GroupLayout->DEFAULT_SIZE, javax_swing->GroupLayout->PREFERRED_SIZE), addComponent, this->adjustFor16AboveJButton), addComponent, this->adjustFor16BelowJButton)), addContainerGap, javax_swing->GroupLayout->DEFAULT_SIZE, Short_MAX_VALUE)), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(layout), addComponent, this->updateJButton), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addComponent, this->aboveJButton), addGap, 0, 250, Short_MAX_VALUE)));
        GroupLayout_setVerticalGroup(layout, JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->LEADING), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(layout), addContainerGap), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->BASELINE), addComponent, this->jLabel1), addComponent, this->jComboBox1, javax_swing->GroupLayout->PREFERRED_SIZE, javax_swing->GroupLayout->DEFAULT_SIZE, javax_swing->GroupLayout->PREFERRED_SIZE), addComponent, this->floatPercentJTextField, javax_swing->GroupLayout->PREFERRED_SIZE, javax_swing->GroupLayout->DEFAULT_SIZE, javax_swing->GroupLayout->PREFERRED_SIZE)), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->BASELINE), addComponent, this->jTextField1, javax_swing->GroupLayout->PREFERRED_SIZE, javax_swing->GroupLayout->DEFAULT_SIZE, javax_swing->GroupLayout->PREFERRED_SIZE), addComponent, this->jLabel2), addComponent, this->adjustFor16AboveJButton)), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->BASELINE), addComponent, this->jLabel3), addComponent, this->jTextField2, javax_swing->GroupLayout->PREFERRED_SIZE, javax_swing->GroupLayout->DEFAULT_SIZE, javax_swing->GroupLayout->PREFERRED_SIZE), addComponent, this->adjustFor16BelowJButton)), addGap, 18, 18, 18), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->BASELINE), addComponent, this->aboveJButton), addComponent, this->updateJButton)), addContainerGap, 175, Short_MAX_VALUE)));
}


static void ResizeImageJPanel_aboveJButtonActionPerformed(ResizeImageJPanel* this, ActionEvent* evt) {
        ResizeImageJPanel_process(this);
}


static void ResizeImageJPanel_updateJButtonActionPerformed(ResizeImageJPanel* this, ActionEvent* evt) {
        ResizeImageJPanel_update(this);
}


static void ResizeImageJPanel_adjustFor16AboveJButtonActionPerformed(ResizeImageJPanel* this, ActionEvent* evt) {
        ResizeImageJPanel_updateFor16Above(this);
}


static void ResizeImageJPanel_adjustFor16BelowJButtonActionPerformed(ResizeImageJPanel* this, ActionEvent* evt) {
        ResizeImageJPanel_updateFor16Below(this);
}

