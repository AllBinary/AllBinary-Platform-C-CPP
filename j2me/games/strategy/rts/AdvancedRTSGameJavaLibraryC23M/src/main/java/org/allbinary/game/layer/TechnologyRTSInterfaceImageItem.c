/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2006 AllBinary 
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
// package org.allbinary.game.layer

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Font.h"
// #include "javax/microedition/lcdui/Graphics.h"
// #include "javax/microedition/lcdui/Image.h"
// #include "javax/microedition/lcdui/NullImage.h"
#include "org/allbinary/graphics/form/item/ABCustomImageItem.h"
#include "org/allbinary/logic/java/character/CharArrayFactory.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/font/MyFontProcessor.h"
#include "org/allbinary/graphics/font/UpdateMyFontInterface.h"
#include "org/allbinary/graphics/font/UpdateMyFontProcessor.h"
#include "org/allbinary/logic/math/PrimitiveLongUtil.h"

typedef struct TechnologyRTSInterfaceImageItem TechnologyRTSInterfaceImageItem;
struct TechnologyRTSInterfaceImageItem {
    ABCustomImageItem base;
    UpdateMyFontInterface UpdateMyFontInterface_interface;
    RTSInterface* rtsInterface;
    PrimitiveLongUtil* primitiveLongUtil;
    const char* LEVEL;
    const char* COST;
    const char* DOLLAR;
    MyFontProcessor* myFontProcessor;
    uint16_t* costString;
    int32_t costLength;
    uint16_t* levelString;
    int32_t levelLength;
    int32_t adjustedCostLabelY;
    int32_t adjustedCostX;
    int32_t adjustedCostY;
    int32_t adjustedLevelX;
    int32_t adjustedLevelY;
};


TechnologyRTSInterfaceImageItem* TechnologyRTSInterfaceImageItem_new(const char* label, Image* img, int32_t layout, const char* altText, BasicColor* basicColor, RTSInterface* rtsInterface);

void TechnologyRTSInterfaceImageItem_init(TechnologyRTSInterfaceImageItem* this, const char* label, Image* img, int32_t layout, const char* altText, BasicColor* basicColor, RTSInterface* rtsInterface);
void TechnologyRTSInterfaceImageItem_updateMeasurement(TechnologyRTSInterfaceImageItem* this, Graphics* graphics);
RTSInterface* TechnologyRTSInterfaceImageItem_getRtsInterface(TechnologyRTSInterfaceImageItem* this);
void TechnologyRTSInterfaceImageItem_update(TechnologyRTSInterfaceImageItem* this);
void TechnologyRTSInterfaceImageItem_paintXY(TechnologyRTSInterfaceImageItem* this, Graphics* graphics, int32_t x, int32_t y);

static void TechnologyRTSInterfaceImageItem_initFields(TechnologyRTSInterfaceImageItem* this) {
    
    this->primitiveLongUtil = PrimitiveLongUtil_createPowerOfTen(10000);
    this->LEVEL = "Level";
    this->COST = "Cost";
    this->DOLLAR = "$";
    this->myFontProcessor = UpdateMyFontProcessor_new(this);
    this->costString = CharArrayFactory_getZeroCharArray(CharArrayFactory_getInstance());
    this->costLength = 0;
    this->levelString = CharArrayFactory_getZeroCharArray(CharArrayFactory_getInstance());
    this->levelLength = 0;
    this->adjustedCostLabelY = 0;
    this->adjustedCostX = 0;
    this->adjustedCostY = 0;
    this->adjustedLevelX = 0;
    this->adjustedLevelY = 0;
}


void TechnologyRTSInterfaceImageItem_init(TechnologyRTSInterfaceImageItem* this, const char* label, Image* img, int32_t layout, const char* altText, BasicColor* basicColor, RTSInterface* rtsInterface) {
        ABCustomImageItem_init(&this->base, label, img, layout, altText, basicColor, 0);
        TechnologyRTSInterfaceImageItem_initFields(this);
        this->rtsInterface = rtsInterface;
        TechnologyRTSInterfaceImageItem_update(this);
}

TechnologyRTSInterfaceImageItem* TechnologyRTSInterfaceImageItem_new(const char* label, Image* img, int32_t layout, const char* altText, BasicColor* basicColor, RTSInterface* rtsInterface) {
    TechnologyRTSInterfaceImageItem* this = calloc(1, sizeof(TechnologyRTSInterfaceImageItem));
    TechnologyRTSInterfaceImageItem_init(this, label, img, layout, altText, basicColor, rtsInterface);
    return this;
}


void TechnologyRTSInterfaceImageItem_updateMeasurement(TechnologyRTSInterfaceImageItem* this, Graphics* graphics) {
        Font* font = Graphics_getFont(graphics);
        int32_t fontHeight = Font_getHeight(font);
        int32_t imageHeight = 0;
        Image* image = TechnologyRTSInterfaceImageItem_getImage(this);
        if (image != NullImage_NULL_IMAGE) {
            imageHeight = Image_getHeight(image);
        }
        this->adjustedCostLabelY = -this->yOffset + imageHeight - (3 * fontHeight);
        this->adjustedCostY = -this->yOffset + imageHeight - (2 * fontHeight);
        this->adjustedCostX = 2 + (((int32_t) strlen(this->DOLLAR)) * (fontHeight - 1));
        this->adjustedLevelY = -this->yOffset + imageHeight - fontHeight;
        this->adjustedLevelX = 2 + (((int32_t) strlen(this->LEVEL)) * (fontHeight - 1));
        this->myFontProcessor = MyFontProcessor_getInstance();
}


RTSInterface* TechnologyRTSInterfaceImageItem_getRtsInterface(TechnologyRTSInterfaceImageItem* this) {
        return this->rtsInterface;
}


void TechnologyRTSInterfaceImageItem_update(TechnologyRTSInterfaceImageItem* this) {
        this->costString = PrimitiveLongUtil_getCharArray(this->primitiveLongUtil, JAVA_CALL(TechnologyRTSInterfaceImageItem_getRtsInterface(this), getUpgradeCost));
        this->levelString = PrimitiveLongUtil_getCharArray(this->primitiveLongUtil, JAVA_CALL(TechnologyRTSInterfaceImageItem_getRtsInterface(this), getLevel));
}


void TechnologyRTSInterfaceImageItem_paintXY(TechnologyRTSInterfaceImageItem* this, Graphics* graphics, int32_t x, int32_t y) {
        MyFontProcessor_process(this->myFontProcessor, graphics);
        ABCustomImageItem_paintXY((&this->base), graphics, x, y);
        int32_t xa = x + 2;
        Graphics_drawString(graphics, this->COST, xa, y + this->adjustedCostLabelY, 0);
        Graphics_drawString(graphics, this->DOLLAR, xa, y + this->adjustedCostY, 0);
        Graphics_drawChars(graphics, this->costString, 0, this->costLength, x + this->adjustedCostX, y + this->adjustedCostY, 0);
        Graphics_drawString(graphics, this->LEVEL, xa, y + this->adjustedLevelY, 0);
        Graphics_drawChars(graphics, this->levelString, 0, this->levelLength, x + this->adjustedLevelX, y + this->adjustedLevelY, 0);
}

