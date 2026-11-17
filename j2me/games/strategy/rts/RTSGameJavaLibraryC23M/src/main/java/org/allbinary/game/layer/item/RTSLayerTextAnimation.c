/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2003 AllBinary 
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
// package org.allbinary.game.layer.item

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
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/graphics/font/MyFontProcessor.h"
#include "org/allbinary/graphics/font/UpdateMyFontInterface.h"
#include "org/allbinary/graphics/font/UpdateMyFontProcessor.h"

typedef struct RTSLayerTextAnimation RTSLayerTextAnimation;
struct RTSLayerTextAnimation {
    Animation base;
    UpdateMyFontInterface UpdateMyFontInterface_interface;
    Image* image;
    const char* text;
    MyFontProcessor* myFontProcessor;
    int32_t fontHeight;
};


RTSLayerTextAnimation* RTSLayerTextAnimation_new(const char* text, Image* image);

void RTSLayerTextAnimation_init(RTSLayerTextAnimation* this, const char* text, Image* image);
void RTSLayerTextAnimation_updateMeasurement(RTSLayerTextAnimation* this, Graphics* graphics);
void RTSLayerTextAnimation_paintXY(RTSLayerTextAnimation* this, Graphics* graphics, int32_t x, int32_t y);

static void RTSLayerTextAnimation_initFields(RTSLayerTextAnimation* this) {
    
    
    this->myFontProcessor = UpdateMyFontProcessor_new(this);
    this->fontHeight = 0;
}


void RTSLayerTextAnimation_init(RTSLayerTextAnimation* this, const char* text, Image* image) {
    Animation_init(&this->base);
    RTSLayerTextAnimation_initFields(this);
        this->text = text;
        this->image = image;
}

RTSLayerTextAnimation* RTSLayerTextAnimation_new(const char* text, Image* image) {
    RTSLayerTextAnimation* this = calloc(1, sizeof(RTSLayerTextAnimation));
    RTSLayerTextAnimation_init(this, text, image);
    return this;
}


void RTSLayerTextAnimation_updateMeasurement(RTSLayerTextAnimation* this, Graphics* graphics) {
        Font* font = Graphics_getFont(graphics);
        this->fontHeight = Font_getHeight(font);
        this->myFontProcessor = MyFontProcessor_getInstance();
}


void RTSLayerTextAnimation_paintXY(RTSLayerTextAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        MyFontProcessor_process(this->myFontProcessor, graphics);
        Animation_paintXY((&this->base), graphics, x, y);
        int32_t adjustedCostY = Image_getHeight(this->image) - this->fontHeight;
        Graphics_drawString(graphics, this->text, x, y + adjustedCostY, 0);
}

