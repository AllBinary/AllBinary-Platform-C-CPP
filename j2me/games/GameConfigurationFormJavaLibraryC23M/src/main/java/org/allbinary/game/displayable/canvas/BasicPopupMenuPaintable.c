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
// package org.allbinary.game.displayable.canvas

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
#include "org/allbinary/AndroidUtil.h"
#include "org/allbinary/J2MEUtil.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/animation/NullAnimationFactory.h"
#include "org/allbinary/animation/vector/RectangleFilledAnimation.h"
#include "org/allbinary/game/configuration/feature/Features.h"
#include "org/allbinary/game/layer/SWTUtil.h"
#include "org/allbinary/graphics/GPoint.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/graphics/color/BasicColorSetUtil.h"
#include "org/allbinary/graphics/draw/DrawVerticalStringUtil.h"
#include "org/allbinary/graphics/font/MyFontProcessor.h"
#include "org/allbinary/graphics/font/UpdateMyFontInterface.h"
#include "org/allbinary/graphics/font/UpdateMyFontProcessor.h"
#include "org/allbinary/graphics/opengles/OpenGLFeatureFactory.h"
#include "org/allbinary/graphics/opengles/OpenGLFeatureUtil.h"
#include "org/allbinary/graphics/paint/Paintable.h"
#include "org/allbinary/graphics/threed/SWTJOGLProcessor.h"

typedef struct BasicPopupMenuPaintable BasicPopupMenuPaintable;
struct BasicPopupMenuPaintable {
    Paintable base;
    UpdateMyFontInterface UpdateMyFontInterface_interface;
    BasicColorSetUtil* basicSetColorUtil;
    DrawVerticalStringUtil* drawStringUtil;
    const char* label;
    BasicColor* foregroundBasicColor;
    MyFontProcessor* myFontProcessor;
    Rectangle* rectangle;
    int32_t BORDER;
    int32_t heightOffset;
    int32_t offset;
    Animation* animationInterface;
};

static const char* BasicPopupMenuPaintable_NAME = "MENU";

BasicPopupMenuPaintable* BasicPopupMenuPaintable_new(Rectangle* rectangle, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);

void BasicPopupMenuPaintable_init(BasicPopupMenuPaintable* this, Rectangle* rectangle, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);
void BasicPopupMenuPaintable_updateMeasurement(BasicPopupMenuPaintable* this, Graphics* graphics);
void BasicPopupMenuPaintable_init(BasicPopupMenuPaintable* this, Rectangle* rectangle);
void BasicPopupMenuPaintable_paint(BasicPopupMenuPaintable* this, Graphics* graphics);

static void BasicPopupMenuPaintable_initFields(BasicPopupMenuPaintable* this) {
    this->basicSetColorUtil = BasicColorSetUtil_getInstance();
    this->drawStringUtil = DrawVerticalStringUtil_getInstance();
    
    
    this->myFontProcessor = UpdateMyFontProcessor_new(this);
    
    this->BORDER = 0;
    this->heightOffset = 0;
    this->offset = 0;
    this->animationInterface = nullptr;
}


void BasicPopupMenuPaintable_init(BasicPopupMenuPaintable* this, Rectangle* rectangle, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
    Paintable_init(&this->base);
    BasicPopupMenuPaintable_initFields(this);
        this->foregroundBasicColor = foregroundBasicColor;
        this->label = BasicPopupMenuPaintable_NAME;
        this->rectangle = rectangle;
        if (J2MEUtil_isJ2ME() || J2MEUtil_isHTML()) {
            this->animationInterface = JAVA_CALL(NullAnimationFactory_getFactoryInstance(), getInstance, 0);
        } else {
            this->animationInterface = RectangleFilledAnimation_new(Rectangle_getWidth(this->rectangle), Rectangle_getHeight(this->rectangle), BasicColorFactory_getInstance()->TRANSPARENT_GREY);
        }
        BasicPopupMenuPaintable_init(this, rectangle);
}

BasicPopupMenuPaintable* BasicPopupMenuPaintable_new(Rectangle* rectangle, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
    BasicPopupMenuPaintable* this = calloc(1, sizeof(BasicPopupMenuPaintable));
    BasicPopupMenuPaintable_init(this, rectangle, backgroundBasicColor, foregroundBasicColor);
    return this;
}


void BasicPopupMenuPaintable_updateMeasurement(BasicPopupMenuPaintable* this, Graphics* graphics) {
        Font* font = Graphics_getFont(graphics);
        Features* features = Features_getInstance();
        bool isOpenGL = Features_isDefault(features, OpenGLFeatureFactory_getInstance()->OPENGL);
        DrawVerticalStringUtil_updateMeasurement(this->drawStringUtil, graphics, this->label);
        int32_t BORDER = 0;
        if (J2MEUtil_isHTML() || isOpenGL) {
            BORDER = MyFontProcessor_defaultCharWidth(font) / 2;
        } else if (AndroidUtil_isAndroid() || J2MEUtil_isJ2SE() || SWTUtil_isSWT) {
            BORDER = MyFontProcessor_defaultCharWidth(font);
        } else {
            BORDER = MyFontProcessor_defaultCharWidth(font) * 2;
        }
        this->BORDER = BORDER;
        this->heightOffset = Rectangle_getHeight(this->rectangle) - (Font_getHeight(font) * JAVA_CALL(BasicPopupMenuPaintable_NAME, length));
        if (OpenGLFeatureUtil_isAnyThreed(OpenGLFeatureUtil_getInstance())) {
            this->heightOffset -= Font_getHeight(font) + 2;
            if (AndroidUtil_isAndroid()) {
                this->heightOffset = Font_getHeight(font);
            } else {
                this->heightOffset -= Font_getHeight(font) + 2;
            }
        }
        this->offset = (this->heightOffset >> 1) + ((SWTJOGLProcessor_isJOGL(SWTJOGLProcessor_getInstance()) ? 4 : 0));
        this->myFontProcessor = MyFontProcessor_getInstance();
}


// throws Exception
void BasicPopupMenuPaintable_init(BasicPopupMenuPaintable* this, Rectangle* rectangle) {
        this->rectangle = rectangle;
        int32_t width = Rectangle_getWidth(this->rectangle);
        int32_t height = Rectangle_getHeight(this->rectangle);
        if (J2MEUtil_isJ2ME() || J2MEUtil_isHTML()) {
        } else {
            RectangleFilledAnimation* rectangleFilledAnimation = ((RectangleFilledAnimation*) this->animationInterface);
            RectangleFilledAnimation_setWidth(rectangleFilledAnimation, width);
            RectangleFilledAnimation_setHeight(rectangleFilledAnimation, height);
        }
}


void BasicPopupMenuPaintable_paint(BasicPopupMenuPaintable* this, Graphics* graphics) {
        MyFontProcessor_process(this->myFontProcessor, graphics);
        GPoint* point = Rectangle_getPoint(this->rectangle);
        int32_t x = GPoint_getX(point);
        int32_t y = GPoint_getY(point);
        int32_t width = Rectangle_getWidth(this->rectangle);
        int32_t height = Rectangle_getHeight(this->rectangle);
        Animation_paintXY(this->animationInterface, graphics, x, y);
        BasicColorSetUtil_setBasicColorP(this->basicSetColorUtil, graphics, this->foregroundBasicColor);
        DrawVerticalStringUtil_paintVerticle(this->drawStringUtil, graphics, this->label, x + this->BORDER, y + this->offset, 0);
        Graphics_drawRect(graphics, x, y, width, height);
}

