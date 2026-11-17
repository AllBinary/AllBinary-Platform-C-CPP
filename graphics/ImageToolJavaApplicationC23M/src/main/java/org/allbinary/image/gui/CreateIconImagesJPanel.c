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
#include "org/allbinary/graphics/displayable/CanvasStrings.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/io/file/AbFile.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/media/image/ImagePersistanceUtil.h"
#include "org/allbinary/media/image/ImageProcessorInput.h"
#include "org/allbinary/media/image/ImageProcessorInputCompositeInterface.h"
#include "org/allbinary/media/image/ImageUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/image/gui/JPanel.h"

typedef struct CreateIconImagesJPanel CreateIconImagesJPanel;
struct CreateIconImagesJPanel {
    JPanel base;
    ImageProcessorInputCompositeInterface ImageProcessorInputCompositeInterface_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    ImageProcessorInput* imageProcessorInput;
    JButton* aboveJButton;
};


CreateIconImagesJPanel* CreateIconImagesJPanel_new(ImageProcessorInput* imageProcessorInput);

void CreateIconImagesJPanel_init(CreateIconImagesJPanel* this, ImageProcessorInput* imageProcessorInput);
void CreateIconImagesJPanel_process(CreateIconImagesJPanel* this);
ImageProcessorInput* CreateIconImagesJPanel_getImageProcessorInput(CreateIconImagesJPanel* this);
void CreateIconImagesJPanel_setImageProcessorInput(CreateIconImagesJPanel* this, ImageProcessorInput* imageProcessorInput);
static void CreateIconImagesJPanel_initComponents(CreateIconImagesJPanel* this);
static void CreateIconImagesJPanel_aboveJButtonActionPerformed(CreateIconImagesJPanel* this, ActionEvent* evt);

static void CreateIconImagesJPanel_initFields(CreateIconImagesJPanel* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    
    this->aboveJButton = nullptr;
}


void CreateIconImagesJPanel_init(CreateIconImagesJPanel* this, ImageProcessorInput* imageProcessorInput) {
        JPanel_init(&this->base);
        CreateIconImagesJPanel_initFields(this);
        CreateIconImagesJPanel_initComponents(this);
        this->imageProcessorInput = imageProcessorInput;
        const char** numberStringArray = ((const char**) java_array_new(sizeof(const char*), 101));
        numberStringArray[0] = java_string_of(-1);
        for (int32_t index = 1; index < 100; index++) {
            numberStringArray[index] = java_string_of(index);
        }
        Raster* araster = JAVA_CALL(ImageProcessorInput_getBufferedImageArray(this->imageProcessorInput)[0], getAlphaRaster);
        if (araster == nullptr) {
            puts(java_string_of("there is no Alpha channel!!!!!!!!!"));
        } else {
            puts(java_string_of("Alpha channel found !"));
        }
}

CreateIconImagesJPanel* CreateIconImagesJPanel_new(ImageProcessorInput* imageProcessorInput) {
    CreateIconImagesJPanel* this = calloc(1, sizeof(CreateIconImagesJPanel));
    CreateIconImagesJPanel_init(this, imageProcessorInput);
    return this;
}


void CreateIconImagesJPanel_process(CreateIconImagesJPanel* this) {
        Thread_start(Thread_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void CreateIconImagesJPanel_run(CreateIconImagesJPanel* this) {
                LogUtil* logUtil = LogUtil_getInstance();
                JAVA_TRY {
                    ImageUtil* imageUtil = ImageUtil_getInstance();
                    StringMaker* stringMaker = StringMaker_new();
                    ImageProcessorInput* imageProcessorInput = CreateIconImagesJPanel_getImageProcessorInput(this);
                    File** files = ImageProcessorInput_getFiles(imageProcessorInput);
                    BasicArrayList* iconWidthList = BasicArrayListD_new();
                    BasicArrayList* iconHeightList = BasicArrayListD_new();
                    BasicArrayList_add(iconWidthList, 864);
                    BasicArrayList_add(iconHeightList, 864);
                    const char* ANDROID = "android-icon-";
                    const char* IOS = "ios-icon-";
                    int32_t size = BasicArrayList_size(iconWidthList);
                    int32_t width = 0;
                    int32_t height = 0;
                    for (int32_t index2 = 0; index2 < size; index2++) {
                        width = Integer_intValue((((int32_t) BasicArrayList_get(iconWidthList, index2))));
                        height = Integer_intValue((((int32_t) BasicArrayList_get(iconHeightList, index2))));
                        BufferedImage** generatedBufferedImageArray = ImageUtil_createBufferedImage3(imageUtil, ImageProcessorInput_getBufferedImageArray(imageProcessorInput), width, height, true);
                        ImagePersistanceUtil* imagePersistanceUtil = ImagePersistanceUtil_getInstance();
                        for (int32_t index = 0; index < java_array_length(generatedBufferedImageArray); index++) {
                            const char* filePath = JAVA_CALL(files[index], getAbsolutePath);
                            int32_t endIndex = java_string_lastIndexOf(filePath, u'\\');
                            const char* path = java_substring(filePath, 0, endIndex + 1);
                            StringMaker_delete(stringMaker, 0, StringMaker_length(stringMaker));
                            JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(stringMaker, path), append, ANDROID), appendint, width), append, CanvasStrings_getInstance()->_PNG);
                            const char* newFilePath = StringMaker_toString(stringMaker);
                            ImagePersistanceUtil_saveWithBatik(imagePersistanceUtil, AbFile_createAbFile(newFilePath), generatedBufferedImageArray[index]);
                            StringMaker_delete(stringMaker, 0, StringMaker_length(stringMaker));
                            JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(stringMaker, path), append, IOS), appendint, width), append, CanvasStrings_getInstance()->_PNG);
                            newFilePath = StringMaker_toString(stringMaker);
                            ImagePersistanceUtil_saveWithBatik(imagePersistanceUtil, AbFile_createAbFile(newFilePath), generatedBufferedImageArray[index]);
                        }
                    }
                    JAVA_CALL(CreateIconImagesJPanel_getParent(this), repaint);
                } JAVA_CATCH(Exception, e) {
                    LogUtil_put(logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->RUN, e);
                } JAVA_END_TRY;
        }
#endif
);
}


ImageProcessorInput* CreateIconImagesJPanel_getImageProcessorInput(CreateIconImagesJPanel* this) {
        return this->imageProcessorInput;
}


void CreateIconImagesJPanel_setImageProcessorInput(CreateIconImagesJPanel* this, ImageProcessorInput* imageProcessorInput) {
        this->imageProcessorInput = imageProcessorInput;
}


static void CreateIconImagesJPanel_initComponents(CreateIconImagesJPanel* this) {
        this->aboveJButton = JButton_new();
        JButton_setText(this->aboveJButton, "Process");
        JButton_addActionListener(this->aboveJButton, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void CreateIconImagesJPanel_actionPerformed(CreateIconImagesJPanel* this, ActionEvent* evt) {
                CreateIconImagesJPanel_aboveJButtonActionPerformed(this, evt);
        }
#endif
);
        GroupLayout* layout = GroupLayout_new(this);
        CreateIconImagesJPanel_setLayout(this, layout);
        GroupLayout_setHorizontalGroup(layout, JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->LEADING), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(layout), addComponent, this->aboveJButton), addGap, 0, 335, Short_MAX_VALUE)));
        GroupLayout_setVerticalGroup(layout, JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->LEADING), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(layout), addContainerGap), addComponent, this->aboveJButton), addContainerGap, 286, Short_MAX_VALUE)));
}


static void CreateIconImagesJPanel_aboveJButtonActionPerformed(CreateIconImagesJPanel* this, ActionEvent* evt) {
        CreateIconImagesJPanel_process(this);
}

