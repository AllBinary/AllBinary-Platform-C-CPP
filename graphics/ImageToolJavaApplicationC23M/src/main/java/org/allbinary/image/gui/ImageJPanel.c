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
#include "org/allbinary/graphics/displayable/CanvasStrings.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/image/gui/JPanel.h"

typedef struct ImageJPanel ImageJPanel;
struct ImageJPanel {
    JPanel base;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    CanvasStrings* canvasStrings;
    bool isDrawn;
    BufferedImage* bufferedImage;
};


ImageJPanel* ImageJPanel_new(BufferedImage* bufferedImage);

void ImageJPanel_init(ImageJPanel* this, BufferedImage* bufferedImage);
void ImageJPanel_paint(ImageJPanel* this, Graphics* graphics);
static void ImageJPanel_initComponents(ImageJPanel* this);

static void ImageJPanel_initFields(ImageJPanel* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->canvasStrings = CanvasStrings_getInstance();
    this->isDrawn = false;
    
}


void ImageJPanel_init(ImageJPanel* this, BufferedImage* bufferedImage) {
    JPanel_init(&this->base);
    ImageJPanel_initFields(this);
        ImageJPanel_initComponents(this);
        this->bufferedImage = bufferedImage;
        ImageJPanel_setSize(this, BufferedImage_getWidth(this->bufferedImage, nullptr), BufferedImage_getHeight(this->bufferedImage, nullptr));
}

ImageJPanel* ImageJPanel_new(BufferedImage* bufferedImage) {
    ImageJPanel* this = calloc(1, sizeof(ImageJPanel));
    ImageJPanel_init(this, bufferedImage);
    return this;
}


void ImageJPanel_paint(ImageJPanel* this, Graphics* graphics) {
        if (!this->isDrawn) {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->canvasStrings->PAINT);
            Graphics_drawImage(graphics, this->bufferedImage, 0, 0, BufferedImage_getWidth(this->bufferedImage, nullptr), BufferedImage_getHeight(this->bufferedImage, nullptr), nullptr);
            this->isDrawn = true;
        }
}


static void ImageJPanel_initComponents(ImageJPanel* this) {
        GroupLayout* layout = GroupLayout_new(this);
        ImageJPanel_setLayout(this, layout);
        GroupLayout_setHorizontalGroup(layout, JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->LEADING), addGap, 0, 400, Short_MAX_VALUE));
        GroupLayout_setVerticalGroup(layout, JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->LEADING), addGap, 0, 300, Short_MAX_VALUE));
}

